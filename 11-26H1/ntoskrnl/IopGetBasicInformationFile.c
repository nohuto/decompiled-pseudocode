/*
 * XREFs of IopGetBasicInformationFile @ 0x1409B4538
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1409B321C (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     MmIsDriverVerifying @ 0x1403B79E0 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  ULONG_PTR FastIoQueryBasicInfo; // rdi
  void *v6; // rbx
  __int64 v7; // rdx
  char v8; // bp
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, (__int64)&v10);
  FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, (__int64)&v10);
  v6 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
     ? (void *)VfFastIoSnapState(DriverObject)
     : 0LL;
  v7 = Object->Flags >> 1;
  LOBYTE(v7) = (Object->Flags & 2) != 0;
  v8 = guard_dispatch_icall_no_overrides((__int64)Object, v7);
  if ( v6 )
    VfFastIoCheckState(v6, FastIoQueryBasicInfo);
  if ( v8 )
    return 0LL;
  else
    return IopGetFileInformation(Object, (__int64)&v10);
}
