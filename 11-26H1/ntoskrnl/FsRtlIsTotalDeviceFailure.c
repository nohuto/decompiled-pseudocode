/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1404673E0
 * Callers:
 *     MiConvertFaultStatus @ 0x1403A4CB0 (MiConvertFaultStatus.c)
 *     MiHandleSynchronousFlushError @ 0x14046717C (MiHandleSynchronousFlushError.c)
 *     CcIsFatalWriteError @ 0x140467230 (CcIsFatalWriteError.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140467358 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
