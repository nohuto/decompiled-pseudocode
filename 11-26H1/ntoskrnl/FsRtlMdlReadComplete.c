/*
 * XREFs of FsRtlMdlReadComplete @ 0x1405B52E0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlMdlReadComplete(struct _FILE_OBJECT *a1, __int64 a2)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r9

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x88 && FastIoDispatch->MdlReadComplete )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
