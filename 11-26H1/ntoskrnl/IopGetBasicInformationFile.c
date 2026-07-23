/*
 * XREFs of IopGetBasicInformationFile @ 0x1409855F8
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1409842DC (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetFileInformation @ 0x1409212D0 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, struct _IRP *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  ULONG_PTR FastIoQueryBasicInfo; // rdi
  void *v8; // rbx
  __int64 v9; // rdx
  char v10; // bp
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
  FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
  v8 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
     ? (void *)VfFastIoSnapState(DriverObject)
     : 0LL;
  v9 = Object->Flags >> 1;
  LOBYTE(v9) = (Object->Flags & 2) != 0;
  v10 = guard_dispatch_icall_no_overrides((__int64)Object, v9);
  if ( v8 )
    VfFastIoCheckState(v8, FastIoQueryBasicInfo);
  if ( v10 )
    return 0LL;
  else
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
}
