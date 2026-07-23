/*
 * XREFs of ExCancelTimer @ 0x1403B3CE0
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     WdtpCancelTimer @ 0x140A1B10C (WdtpCancelTimer.c)
 *     PnpWatchdogTimerPause @ 0x140A1B1D4 (PnpWatchdogTimerPause.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403B4498 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
