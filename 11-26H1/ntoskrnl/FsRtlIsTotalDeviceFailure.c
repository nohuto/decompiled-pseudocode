/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x14046DC60
 * Callers:
 *     MiConvertFaultStatus @ 0x1403A2F50 (MiConvertFaultStatus.c)
 *     MiHandleSynchronousFlushError @ 0x14046D9FC (MiHandleSynchronousFlushError.c)
 *     CcIsFatalWriteError @ 0x14046DAB0 (CcIsFatalWriteError.c)
 *     MiIsRetryIoStatus @ 0x14046DB90 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x14046DBD8 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
