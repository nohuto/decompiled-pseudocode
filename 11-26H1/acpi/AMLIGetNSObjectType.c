/*
 * XREFs of AMLIGetNSObjectType @ 0x14003BAA4
 * Callers:
 *     ACPIProcessorGetInitialApicId @ 0x1400B5E68 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessorDeviceControl @ 0x1400C5FF0 (ACPIProcessorDeviceControl.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400CAFC0 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400CB6B0 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400CC08C (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
