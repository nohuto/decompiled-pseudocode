/*
 * XREFs of FsRtlReleaseFile @ 0x140A64120
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1403100A0 (FsRtlCreateSectionForDataScan.c)
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiCallCreateSectionFilters @ 0x14098C50C (MiCallCreateSectionFilters.c)
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
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

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  unsigned int v2; // edi
  char *v3; // rsi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 v7; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  bool v12; // al
  int v13; // eax
  struct _DRIVER_OBJECT *v14; // rbx
  PVOID FsContext; // rcx
  struct _ERESOURCE *v16; // rcx
  int v17[4]; // [rsp+30h] [rbp-288h] BYREF
  char v18[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v20; // [rsp+50h] [rbp-268h]
  char v21; // [rsp+80h] [rbp-238h]

  memset_0(v18, 0, 0x238uLL);
  v2 = 0;
  v3 = v18;
  v17[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v12 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
      || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v12 )
  {
    v3 = 0LL;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
      && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
        && FastIoDispatch->ReleaseFileForNtCreateSection )
      {
        guard_dispatch_icall_no_overrides((__int64)FileObject, v6);
      }
      else
      {
        v2 = -1073741808;
      }
      v17[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v18, 254, (__int64)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v13 = FsFilterPerformCallbacks((__int64)v18, 0, 0, v17);
  v2 = v13;
  if ( v13 < 0 )
    goto LABEL_24;
  if ( !v13 )
  {
    FileObject = v20;
    if ( (v21 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v14 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v14->FastIoDispatch;
      AddDevice = v14->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
  v2 = 0;
  if ( v13 != 294 )
    v2 = v13;
LABEL_24:
  if ( v2 == -1073741808 && (v17[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v16 )
        ExReleaseResourceLite(v16);
    }
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v18, v2);
    FsFilterCtrlFree((__int64)v18);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
