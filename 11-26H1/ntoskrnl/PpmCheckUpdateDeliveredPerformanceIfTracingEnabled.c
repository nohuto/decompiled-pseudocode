/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x1404D9690
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402547B0 (PpmCheckSnapAllDeliveredPerformance.c)
 */

void PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) )
      PpmCheckSnapAllDeliveredPerformance();
  }
}
