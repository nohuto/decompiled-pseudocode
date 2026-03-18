/*
 * XREFs of ACPIInternalClearFlags @ 0x1400398B4
 * Callers:
 *     ACPIBusAndFilterIrpEject @ 0x1400A8F30 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpEject @ 0x1400AB490 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1400AC420 (ACPIDockIrpStartDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1400BC658 (PcisuppReleasePciInterfaces.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDetectFilterMatch @ 0x1400C2394 (ACPIDetectFilterMatch.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1400CA548 (ACPIInternalSetSpare.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
