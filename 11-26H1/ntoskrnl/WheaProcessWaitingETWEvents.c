/*
 * XREFs of WheaProcessWaitingETWEvents @ 0x1406D71B0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C (WheaFlushETWEventsAddWorkRtn.c)
 *     WheapProcessWaitingETWEvents @ 0x140849550 (WheapProcessWaitingETWEvents.c)
 */

void WheaProcessWaitingETWEvents()
{
  if ( KeGetCurrentIrql() )
  {
    if ( WheaFlushETWEventsInitialized )
      WheaFlushETWEventsAddWorkRtn();
  }
  else
  {
    WheapProcessWaitingETWEvents();
  }
}
