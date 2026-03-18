/*
 * XREFs of CcMdlWriteComplete @ 0x140B0A090
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r10

  FastIoDispatch = IoGetRelatedDeviceObject(FileObject)->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || !FastIoDispatch->MdlWriteComplete
    || !(unsigned __int8)guard_dispatch_icall_no_overrides((__int64)FileObject, (__int64)FileOffset) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (struct _KTHREAD **)FileOffset, MdlChain);
  }
}
