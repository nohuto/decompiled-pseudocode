/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x140A6A590
 * Callers:
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026D980 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026E030 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026E8C0 (FsFilterPerformCompletionCallbacks.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     FsFilterCtrlInit @ 0x140454CD0 (FsFilterCtrlInit.c)
 *     FsFilterCtrlFree @ 0x140460640 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rbp
  __int64 v7; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  bool v11; // al
  int v12; // eax
  struct _DRIVER_OBJECT *v13; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  int v18[4]; // [rsp+30h] [rbp-288h] BYREF
  char v19[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v21; // [rsp+50h] [rbp-268h]
  char v22; // [rsp+80h] [rbp-238h]

  memset_0(v19, 0, 0x238uLL);
  v2 = 0;
  v3 = v19;
  v18[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v11 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
      || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v11 )
  {
    v3 = 0LL;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x40u || !*((_QWORD *)AddDevice + 7))
      && (*(_DWORD *)AddDevice < 0x48u || !*((_QWORD *)AddDevice + 8)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xE0 && FastIoDispatch->ReleaseForCcFlush )
        v2 = guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)BaseFileSystemDeviceObject);
      else
        v2 = -1073741808;
      v18[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v19, 250, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v12 = FsFilterPerformCallbacks((__int64)v19, 0, 1, v18);
  v2 = v12;
  if ( v12 < 0 )
    goto LABEL_24;
  if ( !v12 )
  {
    FileObject = v21;
    if ( (v22 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v13 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v13->FastIoDispatch;
      AddDevice = v13->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
  v2 = 0;
  if ( v12 != 294 )
    v2 = v12;
LABEL_24:
  if ( v2 == -1073741808 && (v18[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v16 )
      ExReleaseResourceLite(v16);
    v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v17 )
      ExReleaseResourceLite(v17);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v2);
    FsFilterCtrlFree((__int64)v19);
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
