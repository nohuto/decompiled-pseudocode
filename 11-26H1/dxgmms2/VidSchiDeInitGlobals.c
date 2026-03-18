/*
 * XREFs of VidSchiDeInitGlobals @ 0x1400C45F0
 * Callers:
 *     DriverUnload @ 0x14004D040 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void VidSchiDeInitGlobals()
{
  if ( PerfCounterSetEngineRegistered )
    PcwUnregister(GpuPerformanceCounterSetEngine);
}
