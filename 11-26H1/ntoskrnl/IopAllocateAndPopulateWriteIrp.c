/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1404B3F40
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1404B3A1C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopSetCopyInformationExtension @ 0x1404664C4 (IopSetCopyInformationExtension.c)
 *     IopProbeAndLockPages_1 @ 0x1404BF110 (IopProbeAndLockPages_1.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 Irp; // rax
  __int64 Flags; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  IRP *v13; // rsi
  void *v14; // r12
  struct _IO_STATUS_BLOCK *v15; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v17; // ecx
  struct _IRP *Pool2; // rax
  size_t v19; // r8
  void *v20; // rdx
  unsigned int v21; // edx
  __int64 Mdl; // rax
  struct _MDL **v23; // rax
  struct _MDL *v24; // rax
  _DWORD *v25; // rax
  PVOID *v26; // rbx
  void *v27; // rcx

  v3 = (_QWORD *)a2;
  v5 = a1;
  v6 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v7 + 80) & 2) == 0 || *(int *)(v5 + 112) >= 0 )
      IopResetEvent(v7, a2);
  }
  v8 = *(_QWORD *)(a1 + 24);
  LOBYTE(a3) = *(_BYTE *)(a1 + 9) == 0;
  LOBYTE(a2) = *(_BYTE *)(v8 + 76);
  Irp = IopAllocateIrpExReturn(v8, a2, a3);
  v13 = (IRP *)Irp;
  if ( !Irp )
  {
    v6 = -1073741670;
    goto LABEL_50;
  }
  *(_QWORD *)(Irp + 192) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(Irp + 152) = *(_QWORD *)a1;
  *(_QWORD *)(Irp + 160) = 0LL;
  *(_BYTE *)(Irp + 64) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(Irp + 65) = 0;
  *(_BYTE *)(Irp + 68) = 0;
  *(_QWORD *)(Irp + 104) = 0LL;
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 80) = *(_QWORD *)(a1 + 32);
  v14 = *(void **)(a1 + 96);
  if ( v14 )
  {
    v15 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
    v13->Flags |= 0x200000u;
    v13->UserIosb = v15;
  }
  else
  {
    *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
    v14 = *(void **)(a1 + 48);
  }
  v13->Overlay.AsynchronousParameters.UserApcContext = v14;
  CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
    CurrentStackLocation[-1].Flags = 4;
  v13->AssociatedIrp.MasterIrp = 0LL;
  v13->MdlAddress = 0LL;
  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( (v17 & 4) != 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      if ( *(_QWORD *)(a1 + 128) )
      {
        v13->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
        v13->Flags |= 0x10u;
        v13->UserBuffer = *(PVOID *)(a1 + 64);
        goto LABEL_36;
      }
      Pool2 = (struct _IRP *)ExAllocatePool2(0x49uLL);
      v13->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
      {
LABEL_18:
        v6 = -1073741670;
        v5 = a1;
        goto LABEL_50;
      }
      v19 = *(unsigned int *)(a1 + 72);
      v20 = *(void **)(a1 + 64);
      if ( *(_BYTE *)(a1 + 8) )
        RtlCopyFromUser(Pool2, v20, v19);
      else
        RtlCopyVolatileMemory(Pool2, v20, v19);
      v13->Flags |= 0x30u;
    }
    else
    {
      v13->Flags |= 0x10u;
    }
    goto LABEL_36;
  }
  if ( (v17 & 0x10) == 0 )
  {
    v13->UserBuffer = *(PVOID *)(a1 + 64);
    v23 = *(struct _MDL ***)(a1 + 120);
    if ( v23 )
    {
      v24 = *v23;
      if ( v24 )
      {
        v13->MdlAddress = v24;
        **(_QWORD **)(a1 + 120) = 0LL;
        if ( *(_QWORD *)(a1 + 96) )
          v13->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v13->Overlay.AsynchronousParameters.UserApcContext | 1);
      }
    }
    goto LABEL_36;
  }
  v21 = *(_DWORD *)(a1 + 72);
  if ( !v21 )
    goto LABEL_36;
  Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v21, 0, v12, (__int64)v13, 0);
  if ( !Mdl )
    goto LABEL_18;
  if ( *(_QWORD *)(a1 + 128) )
    LODWORD(Flags) = 0;
  else
    LOBYTE(Flags) = *(_BYTE *)(a1 + 8);
  v6 = IopProbeAndLockPages_1(Mdl, Flags, v11, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
  if ( v6 >= 0 )
  {
LABEL_36:
    Flags = v13->Flags;
    LODWORD(Flags) = Flags | 0x200;
    v13->Flags = Flags;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      Flags = (unsigned int)Flags | 1;
      v13->Flags = Flags;
    }
    if ( *(_BYTE *)(a1 + 10) )
    {
      LODWORD(Flags) = Flags | 0x800;
      v13->Flags = Flags;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 2) != 0 && *(int *)(a1 + 112) < 0 )
    {
      LODWORD(Flags) = Flags | 0x1000;
      v13->Flags = Flags;
    }
    if ( !*(_QWORD *)(a1 + 128)
      || (v13->RequestorMode = 0,
          v13->UserBuffer = *(PVOID *)(a1 + 64),
          v6 = IopSetCopyInformationExtension((__int64)v13, *(_OWORD **)(a1 + 128)),
          v6 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v25 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v25 )
      {
        if ( (*v25 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    if ( v6 >= 0 )
    {
      *v3 = v13;
      return (unsigned int)v6;
    }
  }
  v5 = a1;
LABEL_50:
  if ( v13 )
  {
    IopExceptionCleanupEx(*(_QWORD *)(a1 + 16), v13, *(PVOID *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      v26 = (PVOID *)(a1 + 16);
      IopReleaseFileObjectLock(*(_QWORD *)(a1 + 16), Flags, v11);
    }
    else
    {
      v26 = (PVOID *)(v5 + 16);
    }
    v27 = *(void **)(a1 + 32);
    if ( v27 )
    {
      ObfDereferenceObjectWithTag(v27, 0x746C6644u);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    ObfDereferenceObjectWithTag(*v26, 0x746C6644u);
    *v26 = 0LL;
  }
  return (unsigned int)v6;
}
