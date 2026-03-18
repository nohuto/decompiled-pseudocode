/*
 * XREFs of NtQueryEaFile @ 0x1409B0520
 * Callers:
 *     DifNtQueryEaFileWrapper @ 0x140682070 (DifNtQueryEaFileWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x140455C40 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopProbeAndLockPages_2 @ 0x1404E0418 (IopProbeAndLockPages_2.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1409B18E4 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409B6E40 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryEaFile(
        void *a1,
        unsigned int *a2,
        volatile void *Address,
        SIZE_T Length,
        char a5,
        volatile void *Addressa,
        SIZE_T Lengtha,
        unsigned int *a8,
        char a9)
{
  unsigned int v9; // edi
  UNICODE_STRING *v13; // rbx
  char v14; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int ULongFromUser; // eax
  UNICODE_STRING *v17; // rax
  UNICODE_STRING *v18; // rdi
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // edi
  struct _KLOCK_ENTRIES *v23; // r9
  PFILE_OBJECT v24; // rdi
  bool v25; // si
  struct _KTHREAD *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // rcx
  __int64 v29; // r8
  char v30; // r12
  __int64 v31; // rdx
  int v32; // r14d
  char v33; // r12
  PVOID v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  IRP *Irp; // rsi
  char v40; // dl
  _DWORD *v41; // r14
  unsigned int *p_Src; // rax
  struct _KEVENT *v43; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _DEVICE_OBJECT *v45; // r13
  int v46; // eax
  ULONG v47; // eax
  char v48; // al
  __int64 result; // rax
  __int64 v50; // r9
  bool v51; // zf
  struct _KEVENT *v52; // rax
  UNICODE_STRING *Pool2; // rax
  __int64 v54; // rax
  PMDL Mdl; // rcx
  char v56; // [rsp+40h] [rbp-A8h]
  char v57[7]; // [rsp+41h] [rbp-A7h] BYREF
  __int128 Src; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-90h]
  PVOID v60; // [rsp+60h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-60h]
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+98h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  ULONG v67; // [rsp+108h] [rbp+20h]

  v67 = Length;
  v9 = Length;
  FileObject = 0LL;
  v60 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v59 = 0;
  Src = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v56 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Addressa && (_DWORD)Lengtha )
    {
      v14 = 1;
      Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x41uLL);
      v13 = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      memmove(Pool2, (const void *)Addressa, (unsigned int)Lengtha);
    }
    if ( a8 )
      v59 = *a8;
LABEL_16:
    v22 = IopReferenceFileObject(a1, 8u, PreviousMode, (ULONG_PTR *)&FileObject, 0LL);
    if ( v22 < 0 )
    {
      if ( v14 )
        ExFreePoolWithTag(v13, 0);
      return (unsigned int)v22;
    }
    v24 = FileObject;
    if ( (FileObject->Flags & 2) != 0 )
    {
      v25 = (FileObject->Flags & 4) != 0;
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v28 = (AutoBoost *)KeAbPreAcquire((__int64)&v24->Lock, 0LL, 0LL, v23);
      v30 = 0;
      v57[0] = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v24->Busy, 1) )
      {
        LOBYTE(v29) = v25;
        LOBYTE(v27) = PreviousMode;
        v32 = IopWaitAndAcquireFileObjectLock(v24, v27, v29, v28, v57);
        v30 = v57[0];
      }
      else
      {
        if ( v28 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v28, v27);
          else
            *((_BYTE *)v28 + 10) = 1;
        }
        PsReferenceSiloContext(v24);
        v32 = 0;
      }
      if ( !v30 )
      {
        v33 = 1;
        v34 = v60;
        goto LABEL_25;
      }
      if ( v14 )
        ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v52 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v34 = v52;
      v60 = v52;
      if ( v52 )
      {
        KeInitializeEvent(v52, SynchronizationEvent, 0);
        v33 = 0;
LABEL_25:
        IopResetEvent((__int64)v24, v31);
        P = IoGetRelatedDeviceObject(v24);
        LOBYTE(v35) = *((_BYTE *)P + 76);
        v36 = IopAllocateIrpExReturn((__int64)P, v35, 0LL);
        Irp = (IRP *)v36;
        if ( v36 )
        {
          *(_QWORD *)(v36 + 192) = v24;
          *(_QWORD *)(v36 + 152) = CurrentThread;
          v40 = v56;
          *(_BYTE *)(v36 + 64) = v56;
          v41 = (_DWORD *)(v36 + 16);
          if ( v33 )
          {
            p_Src = a2;
            v43 = 0LL;
          }
          else
          {
            *v41 = 4;
            p_Src = (unsigned int *)&Src;
            v43 = (struct _KEVENT *)v60;
          }
          Irp->UserEvent = v43;
          Irp->UserIosb = (PIO_STATUS_BLOCK)p_Src;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v24;
          if ( v14 )
          {
            Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v13;
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v13;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Lengtha;
          }
          v45 = (struct _DEVICE_OBJECT *)P;
          v46 = *((_DWORD *)P + 12);
          if ( (v46 & 4) == 0 )
          {
            if ( (v46 & 0x10) == 0 )
            {
              Irp->UserBuffer = (PVOID)Address;
LABEL_33:
              v47 = v67;
LABEL_34:
              CurrentStackLocation[-1].Parameters.Read.Length = v47;
              CurrentStackLocation[-1].Parameters.Create.EaLength = v59;
              CurrentStackLocation[-1].Flags = 0;
              v48 = 0;
              if ( a9 )
              {
                CurrentStackLocation[-1].Flags = 1;
                v48 = 1;
              }
              if ( a5 )
              {
                v48 |= 2u;
                CurrentStackLocation[-1].Flags = v48;
              }
              if ( a8 )
                CurrentStackLocation[-1].Flags = v48 | 4;
              result = IopSynchronousServiceTail(v45, Irp, (ULONG_PTR)v24, v40, v33, 2);
              if ( !v33 )
              {
                LOBYTE(v50) = v56;
                return IopSynchronousApiServiceTail((unsigned int)result, v60, Irp, v50, &Src, a2);
              }
              return result;
            }
            v47 = v67;
            if ( !v67 )
              goto LABEL_34;
            Mdl = IoAllocateMdl((PVOID)Address, v67, 0, 1u, Irp);
            if ( !Mdl )
            {
              v32 = -1073741670;
              goto LABEL_85;
            }
            v32 = IopProbeAndLockPages_2((__int64)Mdl, v56, 1, (__int64)v45, CurrentStackLocation[-1].MajorFunction);
            if ( v32 < 0 )
            {
LABEL_85:
              IopExceptionCleanupEx((ULONG_PTR)v24, Irp, 0LL, v60, (v24->Flags & 2) != 0);
              if ( v13 )
                ExFreePoolWithTag(v13, 0);
              return (unsigned int)v32;
            }
LABEL_87:
            v40 = v56;
            goto LABEL_33;
          }
          v47 = v67;
          if ( !v67 )
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
            *v41 |= 0x50u;
            goto LABEL_34;
          }
          v54 = ExAllocatePool2(0x41uLL);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v54;
          if ( v54 )
          {
            Irp->UserBuffer = (PVOID)Address;
            *v41 |= 0x70u;
            goto LABEL_87;
          }
          IopExceptionCleanupEx((ULONG_PTR)v24, Irp, 0LL, v60, (v24->Flags & 2) != 0);
          v51 = v13 == 0LL;
        }
        else
        {
          if ( (v24->Flags & 2) == 0 )
            ExFreePoolWithTag(v34, 0);
          if ( (v24->Flags & 2) != 0 )
            IopReleaseFileObjectLock((ULONG_PTR)v24, v37, v38);
          ObfDereferenceObject(v24);
          v51 = v14 == 0;
        }
        if ( !v51 )
          ExFreePoolWithTag(v13, 0);
        return 3221225626LL;
      }
      if ( v14 )
        ExFreePoolWithTag(v13, 0);
      v32 = -1073741670;
    }
    ObfDereferenceObject(v24);
    return (unsigned int)v32;
  }
  ULongFromUser = RtlReadULongFromUser(a2);
  RtlWriteULongToUser(a2, ULongFromUser);
  ProbeForWrite(Address, v9, 4u);
  if ( a8 )
  {
    v59 = RtlReadULongFromUser(a8);
    v63 = v59;
  }
  if ( !Addressa || !(_DWORD)Lengtha )
    goto LABEL_16;
  v14 = 1;
  ProbeForRead(Addressa, (unsigned int)Lengtha, 4u);
  v17 = (UNICODE_STRING *)ExAllocatePool2(0x41uLL);
  v13 = v17;
  P = v17;
  if ( !v17 )
    return 3221225626LL;
  RtlCopyFromUser(v17, (void *)Addressa, (unsigned int)Lengtha);
  v18 = v13;
  v19 = Lengtha;
  while ( 1 )
  {
    if ( v19 < 5 )
    {
      ExFreePoolWithTag(v13, 0);
      LODWORD(Src) = -2147483628;
      *((_QWORD *)&Src + 1) = 0LL;
      RtlCopyToUser(a2, &Src, 0x10uLL);
      return 2147483668LL;
    }
    v20 = *((unsigned __int8 *)&v18->MaximumLength + 2) + 6;
    if ( v19 < v20 )
      break;
    v21 = *(unsigned int *)&v18->Length;
    if ( !(_DWORD)v21 )
    {
      if ( (int)(v19 - v20) >= 0 )
        goto LABEL_16;
      break;
    }
    if ( ((*((unsigned __int8 *)&v18->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v21 )
      break;
    if ( (int)v21 < 0 )
      break;
    v19 -= v21;
    if ( v19 < 0 )
      break;
    v18 = (UNICODE_STRING *)((char *)v18 + v21);
  }
  ExFreePoolWithTag(v13, 0);
  LODWORD(Src) = -2147483628;
  *((_QWORD *)&Src + 1) = (int)v18 - (int)v13;
  RtlCopyToUser(a2, &Src, 0x10uLL);
  return 2147483668LL;
}
