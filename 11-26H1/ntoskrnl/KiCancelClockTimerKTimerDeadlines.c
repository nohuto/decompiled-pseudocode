/*
 * XREFs of KiCancelClockTimerKTimerDeadlines @ 0x1405F0CD0
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KiCancelClockTimer @ 0x14040D864 (KiCancelClockTimer.c)
 */

char __fastcall KiCancelClockTimerKTimerDeadlines(__int64 a1)
{
  KiCancelClockTimer(a1, 1, 0);
  return KiCancelClockTimer(a1, 2, 0);
}
