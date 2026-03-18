/*
 * XREFs of FsRtlPrepareMdlWrite @ 0x140AFE1E0
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x140AFE0E0 (FsRtlPrepareMdlWriteEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlPrepareMdlWrite(struct _FILE_OBJECT *a1, __int64 a2)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r11

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x90 && FastIoDispatch->PrepareMdlWrite )
    return guard_dispatch_icall_no_overrides((__int64)a1, a2);
  else
    return 0;
}
