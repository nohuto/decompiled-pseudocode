/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1404BA18C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1409B19A0 (IopWriteFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     IopAllocateMdl @ 0x14039EBE0 (IopAllocateMdl.c)
 *     IopResetEvent @ 0x140455C40 (IopResetEvent.c)
 *     IopSetCopyInformationExtension @ 0x14046CD44 (IopSetCopyInformationExtension.c)
 *     IopProbeAndLockPages_1 @ 0x1404C5760 (IopProbeAndLockPages_1.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     Feature_441966905__private_IsEnabledDeviceUsageNoInline @ 0x1405CC02C (Feature_441966905__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2)
{
  int v4; // r15d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 Irp; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  IRP *v14; // r14
  void *v15; // r12
  struct _IO_STATUS_BLOCK *v16; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v18; // ecx
  struct _IRP *Pool2; // rax
  size_t v20; // r8
  void *v21; // rdx
  unsigned int v22; // edx
  __int64 Mdl; // rax
  struct _MDL **v24; // rax
  struct _MDL *v25; // rax
  int v26; // edx
  _DWORD *v27; // rax
  PVOID *v28; // rbx
  void *v29; // rcx

  v4 = 0;
  IsEnabledDeviceUsageNoInline = Feature_441966905__private_IsEnabledDeviceUsageNoInline();
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( !IsEnabledDeviceUsageNoInline || (*(_DWORD *)(v8 + 80) & 2) == 0 || *(int *)(a1 + 112) >= 0 )
      IopResetEvent(v8, v6);
  }
  v9 = *(_QWORD *)(a1 + 24);
  LOBYTE(v7) = *(_BYTE *)(a1 + 9) == 0;
  LOBYTE(v6) = *(_BYTE *)(v9 + 76);
  Irp = IopAllocateIrpExReturn(v9, v6, v7);
  v14 = (IRP *)Irp;
  if ( !Irp )
    goto LABEL_7;
  *(_QWORD *)(Irp + 192) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(Irp + 152) = *(_QWORD *)a1;
  *(_QWORD *)(Irp + 160) = 0LL;
  *(_BYTE *)(Irp + 64) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(Irp + 65) = 0;
  *(_BYTE *)(Irp + 68) = 0;
  *(_QWORD *)(Irp + 104) = 0LL;
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 80) = *(_QWORD *)(a1 + 32);
  v15 = *(void **)(a1 + 96);
  if ( v15 )
  {
    v16 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
    v14->Flags |= 0x200000u;
    v14->UserIosb = v16;
  }
  else
  {
    *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
    v15 = *(void **)(a1 + 48);
  }
  v14->Overlay.AsynchronousParameters.UserApcContext = v15;
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
    CurrentStackLocation[-1].Flags = 4;
  v14->AssociatedIrp.MasterIrp = 0LL;
  v14->MdlAddress = 0LL;
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( (v18 & 4) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 72) )
    {
      v14->Flags |= 0x10u;
      goto LABEL_36;
    }
    if ( *(_QWORD *)(a1 + 128) )
    {
      v14->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
      v14->Flags |= 0x10u;
      v14->UserBuffer = *(PVOID *)(a1 + 64);
      goto LABEL_36;
    }
    Pool2 = (struct _IRP *)ExAllocatePool2(0x49uLL);
    v14->AssociatedIrp.MasterIrp = Pool2;
    if ( Pool2 )
    {
      v20 = *(unsigned int *)(a1 + 72);
      v21 = *(void **)(a1 + 64);
      if ( *(_BYTE *)(a1 + 8) )
        RtlCopyFromUser(Pool2, v21, v20);
      else
        RtlCopyVolatileMemory(Pool2, v21, v20);
      v14->Flags |= 0x30u;
      goto LABEL_36;
    }
LABEL_7:
    v4 = -1073741670;
    goto LABEL_50;
  }
  if ( (v18 & 0x10) != 0 )
  {
    v22 = *(_DWORD *)(a1 + 72);
    if ( !v22 )
      goto LABEL_36;
    Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v22, 0, v13, (__int64)v14, 0);
    if ( Mdl )
    {
      if ( *(_QWORD *)(a1 + 128) )
        LODWORD(v11) = 0;
      else
        LOBYTE(v11) = *(_BYTE *)(a1 + 8);
      v4 = IopProbeAndLockPages_1(Mdl, v11, v12, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      if ( v4 < 0 )
        goto LABEL_50;
      goto LABEL_36;
    }
    goto LABEL_7;
  }
  v14->UserBuffer = *(PVOID *)(a1 + 64);
  v24 = *(struct _MDL ***)(a1 + 120);
  if ( v24 )
  {
    v25 = *v24;
    if ( v25 )
    {
      v14->MdlAddress = v25;
      **(_QWORD **)(a1 + 120) = 0LL;
      if ( *(_QWORD *)(a1 + 96) )
        v14->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v14->Overlay.AsynchronousParameters.UserApcContext | 1);
    }
  }
LABEL_36:
  v26 = v14->Flags | 0x200;
  v14->Flags = v26;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
  {
    v26 |= 1u;
    v14->Flags = v26;
  }
  if ( *(_BYTE *)(a1 + 10) )
    v14->Flags = v26 | 0x800;
  if ( (unsigned int)Feature_441966905__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 2) != 0
    && *(int *)(a1 + 112) < 0 )
  {
    v14->Flags |= 0x1000u;
  }
  if ( !*(_QWORD *)(a1 + 128)
    || (v14->RequestorMode = 0,
        v14->UserBuffer = *(PVOID *)(a1 + 64),
        v4 = IopSetCopyInformationExtension((__int64)v14, *(_OWORD **)(a1 + 128)),
        v4 >= 0) )
  {
    CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
    CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
    v27 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
    if ( v27 )
    {
      if ( (*v27 & 0x10) != 0 )
        CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
    }
  }
  if ( v4 >= 0 )
  {
    *a2 = v14;
    return (unsigned int)v4;
  }
LABEL_50:
  if ( v14 )
  {
    IopExceptionCleanupEx(*(_QWORD *)(a1 + 16), v14, *(PVOID *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      v28 = (PVOID *)(a1 + 16);
      IopReleaseFileObjectLock(*(_QWORD *)(a1 + 16), v11, v12);
    }
    else
    {
      v28 = (PVOID *)(a1 + 16);
    }
    v29 = *(void **)(a1 + 32);
    if ( v29 )
    {
      ObfDereferenceObjectWithTag(v29, 0x746C6644u);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    ObfDereferenceObjectWithTag(*v28, 0x746C6644u);
    *v28 = 0LL;
  }
  return (unsigned int)v4;
}
