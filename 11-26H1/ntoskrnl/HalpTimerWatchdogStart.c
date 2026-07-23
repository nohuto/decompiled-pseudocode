/*
 * XREFs of HalpTimerWatchdogStart @ 0x140587AB0
 * Callers:
 *     HalpTimerInitializeSystemWatchdog @ 0x140587924 (HalpTimerInitializeSystemWatchdog.c)
 * Callees:
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1404EED9C (HalpTimerWatchdogWakeSetDueTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerWatchdogStart()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 InternalData; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    v1 = HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogStopCount < 0 || (--HalpTimerWatchdogStopCount, v1 - 1 < 0) )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      guard_dispatch_icall_no_overrides(InternalData, v3);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      if ( (int)HalpSetTimer(v0, 3u, HalpTimerWatchdogTimeout, 1, &v4) >= 0 )
      {
        HalpTimerWatchdogArmed = 1;
        HalpTimerWatchdogWakeSetDueTime();
      }
    }
  }
}
