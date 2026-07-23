/*
 * XREFs of ExRebootSystemForRecovery @ 0x1406CF57C
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x1406CF7D0 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     VslNotifyShutdown @ 0x1405C5F30 (VslNotifyShutdown.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405EA2EC (KiBugcheckUnloadDebugSymbols.c)
 *     CmShutdownSystem @ 0x14085A594 (CmShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
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
