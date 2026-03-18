/*
 * XREFs of ExCancelTimer @ 0x1403AA0D0
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x14082D210 (EtwpUpdatePeriodicCaptureState.c)
 *     WdtpCancelTimer @ 0x1409DDFE0 (WdtpCancelTimer.c)
 *     PnpWatchdogTimerPause @ 0x1409DE0A8 (PnpWatchdogTimerPause.c)
 *     EtwpStopLoggerInstance @ 0x140A15968 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AA888 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
