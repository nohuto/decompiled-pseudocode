/*
 * XREFs of PfpPartitionRundownProtectionRelease @ 0x140447AD8
 * Callers:
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x140447B00 (ExReleaseRundownProtectionCacheAware.c)
 */

void __fastcall PfpPartitionRundownProtectionRelease(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
