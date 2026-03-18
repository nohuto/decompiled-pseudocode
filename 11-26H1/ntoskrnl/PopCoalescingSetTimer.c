/*
 * XREFs of PopCoalescingSetTimer @ 0x1404C3348
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404C32B4 (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x1407CF2D0 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (stru_140F11D08.AbWaitEntryCount & 1) != 0 )
  {
    PopPrintEx(3LL, "PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (__int64)&stru_140F11D08.600,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&stru_140F11D08.SchedulerApc.Reserved[2]);
    _interlockedbittestandset((volatile signed __int32 *)&stru_140F11D08.600, 9u);
  }
  return result;
}
