/*
 * XREFs of ACPIPowerScheduleDpc @ 0x140027488
 * Callers:
 *     ACPIDeviceCompleteRequest @ 0x140019A30 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x140026EB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x140027190 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1400272FC (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1400273F0 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteCommon @ 0x14002743C (ACPIDeviceCompleteCommon.c)
 *     ACPIBuildDeviceDpc @ 0x140028D70 (ACPIBuildDeviceDpc.c)
 *     ACPITableLoadCallBack @ 0x1400510E0 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1400DB3BC (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
