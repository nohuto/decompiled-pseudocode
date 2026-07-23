/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0
 * Callers:
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026D980 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026E030 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026E8C0 (FsFilterPerformCompletionCallbacks.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14042F560 (ExIsResourceAcquiredSharedLite.c)
 *     FsFilterCtrlInit @ 0x140454CD0 (FsFilterCtrlInit.c)
 *     FsFilterCtrlFree @ 0x140460640 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v2; // r14d
  char *v3; // r15
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rbx
  __int64 v7; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  bool v11; // al
  __int64 result; // rax
  struct _KTHREAD *v13; // rax
  int v14; // eax
  struct _DRIVER_OBJECT *v15; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v17; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v19; // rcx
  struct _ERESOURCE *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v22[4]; // [rsp+30h] [rbp-288h] BYREF
  char v23[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v25; // [rsp+50h] [rbp-268h]
  char v26; // [rsp+80h] [rbp-238h]

  memset_0(v23, 0, 0x238uLL);
  v2 = 0;
  v3 = v23;
  v22[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v11 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
      || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v11 )
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
      v22[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_25;
  }
  result = FsFilterCtrlInit((__int64)v23, 251, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = FsFilterPerformCallbacks((__int64)v23, 1, 1, v22);
  v2 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      v2 = 0;
      if ( v14 != 294 )
        v2 = v14;
      goto LABEL_25;
    }
    FileObject = v25;
    if ( (v26 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v15 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v15->FastIoDispatch;
      AddDevice = v15->DriverExtension[1].AddDevice;
    }
    goto LABEL_13;
  }
LABEL_25:
  if ( v2 == -1073741808 && (v22[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v17 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v17);
      v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v19, 1u);
      else
        ExAcquireResourceExclusiveLite(v19, 1u);
    }
    v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v20 )
      ExAcquireResourceSharedLite(v20, 1u);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v23, v2);
    FsFilterCtrlFree((__int64)v23);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
