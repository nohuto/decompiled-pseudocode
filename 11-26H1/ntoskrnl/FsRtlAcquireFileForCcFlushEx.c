/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x140A5D320
 * Callers:
 *     MmFlushSection @ 0x14039AA40 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x1404EBD20 (MiPrepareToFlushSubsection.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026E410 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026EAC0 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026F260 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026F350 (FsFilterPerformCompletionCallbacks.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14043CCB0 (ExIsResourceAcquiredSharedLite.c)
 *     FsFilterCtrlInit @ 0x14045B4A0 (FsFilterCtrlInit.c)
 *     FsFilterCtrlFree @ 0x140466EF0 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v2; // r14d
  char *v3; // r15
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v6; // rdx
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  bool v13; // al
  __int64 result; // rax
  struct _KTHREAD *v15; // rax
  int v16; // eax
  struct _DRIVER_OBJECT *v17; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v19; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v24[4]; // [rsp+30h] [rbp-288h] BYREF
  char v25[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v27; // [rsp+50h] [rbp-268h]
  char v28; // [rsp+80h] [rbp-238h]

  memset_0(v25, 0, 0x238uLL);
  v2 = 0;
  v3 = v25;
  v24[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v13 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
      || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v13 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->KernelApcDisable;
LABEL_13:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x30u || !*((_QWORD *)AddDevice + 5))
      && (*(_DWORD *)AddDevice < 0x38u || !*((_QWORD *)AddDevice + 6)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xD8 && FastIoDispatch->AcquireForCcFlush )
        v2 = guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)BaseFileSystemDeviceObject);
      else
        v2 = -1073741808;
      v24[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_25;
  }
  result = FsFilterCtrlInit((__int64)v25, 251, (__int64)RelatedDeviceObject, v9, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = FsFilterPerformCallbacks((__int64)v25, 1, 1, v24);
  v2 = v16;
  if ( v16 >= 0 )
  {
    if ( v16 )
    {
      v2 = 0;
      if ( v16 != 294 )
        v2 = v16;
      goto LABEL_25;
    }
    FileObject = v27;
    if ( (v28 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v17 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v17->FastIoDispatch;
      AddDevice = v17->DriverExtension[1].AddDevice;
    }
    goto LABEL_13;
  }
LABEL_25:
  if ( v2 == -1073741808 && (v24[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v19 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v19);
      v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v21, 1u);
      else
        ExAcquireResourceExclusiveLite(v21, 1u);
    }
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v22 )
      ExAcquireResourceSharedLite(v22, 1u);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v25, v2);
    FsFilterCtrlFree((__int64)v25);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v8);
  return (unsigned int)v2;
}
