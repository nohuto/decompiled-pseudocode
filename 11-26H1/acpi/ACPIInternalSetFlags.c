/*
 * XREFs of ACPIInternalSetFlags @ 0x14003BB9C
 * Callers:
 *     ACPIFilterIrpQueryIdCompletion @ 0x1400B0E60 (ACPIFilterIrpQueryIdCompletion.c)
 *     PcisuppAcquirePciInterfaces @ 0x1400BC4A4 (PcisuppAcquirePciInterfaces.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1400CD25C (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1400D01C0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400D3B78 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIInternalIsPci @ 0x1400D4050 (ACPIInternalIsPci.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
