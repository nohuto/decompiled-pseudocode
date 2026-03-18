/*
 * XREFs of KeSuspendClockTimer @ 0x1404FF654
 * Callers:
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 * Callees:
 *     KiSuspendClockTimer @ 0x1404FF66C (KiSuspendClockTimer.c)
 */

__int64 KeSuspendClockTimer()
{
  return KiSuspendClockTimer();
}
