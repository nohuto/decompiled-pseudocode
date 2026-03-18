/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x1404E6190
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140247600 (KiLoadDirectoryTableBase.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032BD30 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallpExtendedFastHypercall @ 0x1407324F0 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408B93E8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
