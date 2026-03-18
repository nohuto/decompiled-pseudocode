/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x1409BB670
 * Callers:
 *     MiCallCreateSectionFilters @ 0x1409BB52C (MiCallCreateSectionFilters.c)
 *     FsRtlAcquireFileExclusive @ 0x1409BB640 (FsRtlAcquireFileExclusive.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140AA8E88 (FsRtlAcquireToCreateMappedSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14026E410 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14026EAC0 (FsFilterPerformCallbacks.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026F260 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026F350 (FsFilterPerformCompletionCallbacks.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     FsFilterCtrlInit @ 0x14045B4A0 (FsFilterCtrlInit.c)
 *     FsFilterCtrlFree @ 0x140466EF0 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(PFILE_OBJECT FileObject, int a2, int a3, int a4, int a5, __int64 a6)
{
  int v8; // esi
  char *v9; // r13
  char v10; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // r15
  __int64 result; // rax
  struct _KTHREAD *v21; // rax
  int v22; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v24; // di
  struct _DRIVER_OBJECT *v25; // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v27; // rcx
  int v28; // [rsp+30h] [rbp-2B8h] BYREF
  int v29; // [rsp+34h] [rbp-2B4h]
  int v30; // [rsp+38h] [rbp-2B0h]
  __int64 v31; // [rsp+40h] [rbp-2A8h]
  struct _FAST_IO_DISPATCH *v32; // [rsp+48h] [rbp-2A0h]
  char v33[8]; // [rsp+50h] [rbp-298h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-290h]
  struct _FILE_OBJECT *v35; // [rsp+60h] [rbp-288h]
  int v36; // [rsp+68h] [rbp-280h]
  int v37; // [rsp+6Ch] [rbp-27Ch]
  __int64 v38; // [rsp+70h] [rbp-278h]
  int v39; // [rsp+78h] [rbp-270h]
  int v40; // [rsp+7Ch] [rbp-26Ch]
  char v41; // [rsp+90h] [rbp-258h]

  v29 = a3;
  v31 = a6;
  v30 = a4;
  memset_0(v33, 0, 0x238uLL);
  v8 = 0;
  v9 = v33;
  v28 = 0;
  v10 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v32 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v10 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_33;
  }
  if ( a2 == 1 )
    LOBYTE(v8) = 1;
  result = FsFilterCtrlInit((__int64)v33, 255, (__int64)RelatedDeviceObject, v14, (__int64)FileObject, v8);
  if ( (int)result >= 0 )
  {
    v37 = v29;
    v38 = v31;
    v39 = v30;
    v40 = a5;
    v36 = a2;
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = FsFilterPerformCallbacks((__int64)v33, v8, v8, &v28);
    v8 = v22;
    if ( v22 < 0 )
    {
LABEL_13:
      if ( v8 == -1073741808 && (v28 & 1) != 0 )
      {
        FsContext = FileObject->FsContext;
        if ( FsContext )
        {
          v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v27 )
            ExAcquireResourceExclusiveLite(v27, 1u);
        }
        v8 = 0;
      }
      if ( v9 )
      {
        if ( *((_WORD *)v9 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v33, v8);
        FsFilterCtrlFree((__int64)v33);
      }
      if ( v8 < 0 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
      return (unsigned int)v8;
    }
    if ( v22 )
    {
      v8 = 0;
      if ( v22 != 294 )
        v8 = v22;
      goto LABEL_13;
    }
    FileObject = v35;
    if ( (v41 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v24 = 1;
      v25 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v25->FastIoDispatch;
      AddDevice = v25->DriverExtension[1].AddDevice;
      goto LABEL_34;
    }
    FastIoDispatch = v32;
LABEL_33:
    v24 = 0;
LABEL_34:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && FastIoDispatch->AcquireFileForNtCreateSection )
      {
        guard_dispatch_icall_no_overrides((__int64)FileObject, v12);
      }
      else
      {
        v8 = -1073741808;
      }
      v28 |= 1u;
    }
    if ( v24 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_13;
  }
  return result;
}
