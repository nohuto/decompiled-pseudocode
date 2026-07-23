/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x140784620
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1407845D0 (HalpTimerWatchdogGeneratedLastReset.c)
 */

char HalpTimerWatchdogLogReset()
{
  char result; // al

  result = HalpTimerWatchdogGeneratedLastReset();
  if ( result )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_WATCHDOG_TRIGGERED, 0LL, 0, 0LL);
      return DbgPrint("System was rebooted due to system watchdog timeout.\n");
    }
  }
  return result;
}
