/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x1404DFFB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140252E50 (PpmCheckSnapAllDeliveredPerformance.c)
 */

void PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_DELIVERED_PERF_CHANGE) )
    {
      PpmCheckSnapAllDeliveredPerformance();
    }
  }
}
