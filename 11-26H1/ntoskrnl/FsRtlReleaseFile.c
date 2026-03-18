/*
 * XREFs of FsRtlReleaseFile @ 0x140A56BA0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402C53E0 (FsRtlCreateSectionForDataScan.c)
 *     CcZeroEndOfLastPage @ 0x1402C6408 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     MiReferenceControlArea @ 0x14046FD70 (MiReferenceControlArea.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     MiCallCreateSectionFilters @ 0x1409BB52C (MiCallCreateSectionFilters.c)
 *     MiCreateNewSection @ 0x140A562D8 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x140A56A00 (MiShareExistingControlArea.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026E410 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026EAC0 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026F260 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026F350 (FsFilterPerformCompletionCallbacks.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     FsFilterCtrlInit @ 0x14045B4A0 (FsFilterCtrlInit.c)
 *     FsFilterCtrlFree @ 0x140466EF0 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  unsigned int v2; // edi
  char *v3; // rsi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  bool v13; // al
  int v14; // eax
  struct _DRIVER_OBJECT *v15; // rbx
  PVOID FsContext; // rcx
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
  v13 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
      || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v13 )
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
      v18[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v19, 254, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 0);
  v14 = FsFilterPerformCallbacks((__int64)v19, 0, 0, v18);
  v2 = v14;
  if ( v14 < 0 )
    goto LABEL_24;
  if ( !v14 )
  {
    FileObject = v21;
    if ( (v22 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v15 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v15->FastIoDispatch;
      AddDevice = v15->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
  v2 = 0;
  if ( v14 != 294 )
    v2 = v14;
LABEL_24:
  if ( v2 == -1073741808 && (v18[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v17 )
        ExReleaseResourceLite(v17);
    }
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v2);
    FsFilterCtrlFree((__int64)v19);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7);
}
