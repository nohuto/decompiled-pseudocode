/*
 * XREFs of ACPIBuildScheduleDpc @ 0x14002809C
 * Callers:
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildCompleteCommon @ 0x140028050 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1400283E0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x140029960 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140042F5C (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1400480D0 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPITableLoad @ 0x140049220 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x140069970 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
