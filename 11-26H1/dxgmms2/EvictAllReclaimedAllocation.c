/*
 * XREFs of EvictAllReclaimedAllocation @ 0x140114308
 * Callers:
 *     ?EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x1401142F0 (-EvictAllReclaimedAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ.c)
 * Callees:
 *     EvictAllReclaimedMemoryAllocation @ 0x140114350 (EvictAllReclaimedMemoryAllocation.c)
 *     EvictAllReclaimedSysmemAllocation @ 0x140114420 (EvictAllReclaimedSysmemAllocation.c)
 */

__int64 __fastcall EvictAllReclaimedAllocation(__int64 a1)
{
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    WdLogGlobalForLineNumber = 3286;
  }
  EvictAllReclaimedSysmemAllocation(a1);
  return EvictAllReclaimedMemoryAllocation(a1);
}
