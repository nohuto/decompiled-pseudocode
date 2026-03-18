/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x140A5D5D0
 * Callers:
 *     MmFlushSection @ 0x14039AA40 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x1404EBD20 (MiPrepareToFlushSubsection.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
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

__int64 __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v6; // rdx
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  bool v13; // al
  int v14; // eax
  struct _DRIVER_OBJECT *v15; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  int v20[4]; // [rsp+30h] [rbp-288h] BYREF
  char v21[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v23; // [rsp+50h] [rbp-268h]
  char v24; // [rsp+80h] [rbp-238h]

  memset_0(v21, 0, 0x238uLL);
  v2 = 0;
  v3 = v21;
  v20[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v13 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
      || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v13 )
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
      v20[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v21, 250, (__int64)RelatedDeviceObject, v9, (__int64)FileObject, 0);
  v14 = FsFilterPerformCallbacks((__int64)v21, 0, 1, v20);
  v2 = v14;
  if ( v14 < 0 )
    goto LABEL_24;
  if ( !v14 )
  {
    FileObject = v23;
    if ( (v24 & 4) != 0 )
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
  if ( v2 == -1073741808 && (v20[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v18 )
      ExReleaseResourceLite(v18);
    v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v19 )
      ExReleaseResourceLite(v19);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v21, v2);
    FsFilterCtrlFree((__int64)v21);
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v8);
}
