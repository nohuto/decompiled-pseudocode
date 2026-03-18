/*
 * XREFs of KiCancelClockTimerKTimerDeadlines @ 0x1405EE360
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405ED338 (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405ED634 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KiCancelClockTimer @ 0x140419334 (KiCancelClockTimer.c)
 */

char __fastcall KiCancelClockTimerKTimerDeadlines(__int64 a1)
{
  KiCancelClockTimer(a1, 1, 0);
  return KiCancelClockTimer(a1, 2, 0);
}
