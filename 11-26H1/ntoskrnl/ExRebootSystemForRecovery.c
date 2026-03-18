/*
 * XREFs of ExRebootSystemForRecovery @ 0x1406CB54C
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x1406CB7A0 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     KiSendThawExecution @ 0x1405023B0 (KiSendThawExecution.c)
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     VslNotifyShutdown @ 0x1405C36C0 (VslNotifyShutdown.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405E797C (KiBugcheckUnloadDebugSymbols.c)
 *     CmShutdownSystem @ 0x140854284 (CmShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C01874 (MiDeleteAllHardwareEnclaves.c)
 */

void ExRebootSystemForRecovery()
{
  if ( PnpKsrCallbackObject )
  {
    CmShutdownSystem(0LL);
    CmShutdownSystem(1LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 10LL, 0, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 15LL, 0, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 20LL, 0, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 22LL, 0, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 25LL, 0, 0LL);
    MiDeleteAllHardwareEnclaves();
    VslNotifyShutdown(0);
    KiBugcheckUnloadDebugSymbols();
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    HalReturnToFirmware(3);
  }
}
