/*
 * XREFs of HalpTimerWatchdogStop @ 0x140585620
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerWatchdogStop()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  if ( HalpWatchdogTimer )
  {
    ++HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogArmed )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      guard_dispatch_icall_no_overrides(InternalData, v1);
      HalpTimerWatchdogArmed = 0;
      HalpWatchdogWakeDueTime = 0LL;
    }
  }
}
