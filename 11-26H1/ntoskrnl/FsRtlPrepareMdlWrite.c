/*
 * XREFs of FsRtlPrepareMdlWrite @ 0x140B00250
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x140B00150 (FsRtlPrepareMdlWriteEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
