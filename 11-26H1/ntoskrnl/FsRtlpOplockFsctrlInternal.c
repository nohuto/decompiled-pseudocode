/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x140AA46C0
 * Callers:
 *     FsRtlUpperOplockFsctrl @ 0x140791580 (FsRtlUpperOplockFsctrl.c)
 *     FsRtlOplockFsctrl @ 0x140AA4680 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x140AA46A0 (FsRtlOplockFsctrlEx.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlCheckOplockEx @ 0x1403F8120 (FsRtlCheckOplockEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     IoIsOperationSynchronous @ 0x1404722B0 (IoIsOperationSynchronous.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14049C7EC (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14079171C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14079186C (FsRtlpOplockBreakNotify.c)
 *     FsRtlpAllocateOplock @ 0x140AACC9C (FsRtlpAllocateOplock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  char v5; // r13
  NTSTATUS v9; // r11d
  unsigned int v10; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v12; // ebx
  struct _IRP *MasterIrp; // r13
  int MdlAddress; // eax
  int v15; // ecx
  ULONG Options; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PFAST_MUTEX *v21; // rsi
  int v22; // edx
  int v23; // ecx
  char v24; // r9
  __int64 v25; // rbx
  PVOID *v26; // r14
  PVOID v27; // r11
  _QWORD **v28; // rcx
  PVOID *v29; // rax
  struct _IRP *v30; // rax
  int v31; // edx
  unsigned int v32; // ebx
  PVOID v33[8]; // [rsp+58h] [rbp-40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF
  int v35; // [rsp+B8h] [rbp+20h]

  v35 = a4;
  v5 = a4;
  v9 = 0;
  v10 = 0;
  P = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v10 = FsRtlpAttachOplockKey(Irp);
      if ( !v10 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               0LL,
                               1u,
                               0,
                               0xC8u,
                               0,
                               a5);
    }
    else if ( (Options & 0x10000) != 0 )
    {
      v10 = FsRtlpAttachOplockKey(Irp);
      if ( !v10 )
      {
        v21 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v21 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v20, v19);
          *Oplock = (__int64)v21;
        }
        v33[0] = v21;
        ExAcquireFastMutexUnsafe(v21[19]);
        v10 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v10 )
        {
          P = (PVOID)ExAllocatePool2(0x120uLL);
          v10 = FsRtlpRequestShareableOplock(
                  Oplock,
                  (__int64)CurrentStackLocation,
                  0LL,
                  0x10000u,
                  (_QWORD **)&P,
                  0,
                  0,
                  0,
                  a5,
                  v5);
        }
        if ( P )
        {
          FsRtlpClearOwner((__int64)v21, (__int64)P);
          ExFreePoolWithTag(P, 0);
        }
        ExReleaseFastMutexUnsafe(v21[19]);
      }
    }
    return v10;
  }
  v12 = 2;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x90000u:
LABEL_96:
      v32 = v12 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               1u,
                               v5,
                               v32,
                               0,
                               a5);
      }
      goto LABEL_62;
    case 0x90004u:
      if ( !a3
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)FsRtlpRequestShareableOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               0x10u,
                               0LL,
                               1,
                               0,
                               0,
                               a5,
                               v5);
      }
      v10 = -1073741598;
      Irp->IoStatus.Status = -1073741598;
LABEL_43:
      IofCompleteRequest(Irp, 1);
      return v10;
    case 0x90008u:
LABEL_57:
      v12 *= 2;
      goto LABEL_96;
    case 0x9000Cu:
      v24 = 1;
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v24, a5);
    case 0x90010u:
      return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, (__int64)Irp->Tail.Overlay.CurrentStackLocation, Irp);
    case 0x90014u:
      return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, (__int64)Irp, Irp);
    case 0x90050u:
      v24 = 0;
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v24, a5);
    case 0x9005Cu:
      v12 = 4;
      goto LABEL_57;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 590400 )
  {
    v10 = -1073741811;
    goto LABEL_45;
  }
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v10 = -1073741789;
LABEL_45:
    Irp->IoStatus.Status = v10;
    goto LABEL_43;
  }
  if ( MasterIrp->Type > 1u )
    goto LABEL_42;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MdlAddress & 1) == 0 )
  {
    if ( (MdlAddress & 2) != 0 )
    {
      v23 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12);
      if ( !v23 || v23 == 4096 || v23 == 12288 || v23 == 20480 || v23 == 28672 )
      {
        if ( IoIsOperationSynchronous(Irp) )
        {
          v10 = -1073741811;
          goto LABEL_83;
        }
        if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          v30 = Irp->AssociatedIrp.MasterIrp;
          *(_QWORD *)&v30->Flags = 0LL;
          *(_QWORD *)&v30->Type = 1572865LL;
          v30->MdlAddress = 0LL;
          Irp->IoStatus.Information = 24LL;
          Irp->IoStatus.Status = 0;
          IofCompleteRequest(Irp, 1);
          return 0;
        }
        v31 = *(_DWORD *)(&MasterIrp->Size + 1);
        if ( ((((v31 & 1) << 12) | (v31 << 12)) & 0x2000) != 0 )
        {
          P = (PVOID)ExAllocatePool2(0x120uLL);
          v31 = *(_DWORD *)(&MasterIrp->Size + 1);
        }
        v10 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                *Oplock,
                (__int64)CurrentStackLocation,
                (__int64)Irp,
                ((v31 & 1) << 12) | ((unsigned __int8)(v31 & 6) << 12),
                (_QWORD *)((unsigned __int64)&P & -(__int64)(P != 0LL)),
                (int)MasterIrp->MdlAddress,
                a5);
        goto LABEL_39;
      }
    }
LABEL_42:
    v10 = -1073741811;
    Irp->IoStatus.Status = -1073741811;
    goto LABEL_43;
  }
  v15 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12);
  if ( v15 )
  {
    if ( v15 == 28672 )
    {
LABEL_17:
      if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               a3,
                               v35,
                               ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12) | 0x40u,
                               (char)MasterIrp->MdlAddress,
                               a5);
      goto LABEL_62;
    }
    if ( v15 != 12288 && v15 != 4096 )
    {
      if ( v15 == 20480 )
        goto LABEL_17;
      goto LABEL_42;
    }
    if ( !a3 && !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
    {
      v22 = *(_DWORD *)(&MasterIrp->Size + 1);
      if ( ((((v22 & 1) << 12) | (v22 << 12)) & 0x2000) != 0 )
      {
        P = (PVOID)ExAllocatePool2(0x120uLL);
        v22 = *(_DWORD *)(&MasterIrp->Size + 1);
      }
      v10 = FsRtlpRequestShareableOplock(
              Oplock,
              (__int64)CurrentStackLocation,
              (__int64)Irp,
              ((v22 & 1) << 12) | ((unsigned __int8)(v22 & 6) << 12),
              (_QWORD **)((unsigned __int64)&P & -(__int64)(P != 0LL)),
              1,
              0,
              (char)MasterIrp->MdlAddress,
              a5,
              v35);
LABEL_39:
      if ( P )
      {
        FsRtlpClearOwner(*Oplock, (__int64)P);
        ExFreePoolWithTag(P, 0);
      }
      return v10;
    }
LABEL_62:
    v10 = -1073741598;
LABEL_83:
    Irp->IoStatus.Status = v10;
    goto LABEL_43;
  }
  v25 = *Oplock;
  if ( *Oplock )
  {
    v33[0] = 0LL;
    if ( (*(_DWORD *)(v25 + 144) & 0x10000) != 0 )
    {
      if ( FsRtlpCallerIsAtomicRequestor(v25, (__int64)CurrentStackLocation->FileObject, v33) )
      {
        v26 = (PVOID *)v33[0];
        FsRtlpOplockDequeueRH((_QWORD *)v33[0]);
        v28 = (_QWORD **)v26[7];
        v29 = (PVOID *)v26[8];
        if ( v28[1] != v26 + 7 || *v29 != v26 + 7 )
          __fastfail(3u);
        *v29 = v28;
        v28[1] = v29;
        if ( *(_QWORD *)(v25 + 120) == v25 + 120 )
          *(_DWORD *)(v25 + 144) &= 0xFFFCFFFF;
        if ( v26[5] != v27 )
          FsRtlpClearOwner(v25, (__int64)v26);
        FsRtlpFreeRHOpContext(v26, 1);
        FsRtlpComputeShareableOplockState(v25);
        FsRtlpReleaseIrpsWaitingForRH(v25);
        v9 = 0;
      }
    }
  }
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 1);
  return 0;
}
