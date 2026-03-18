/*
 * XREFs of PfpPartitionRundownProtectionRelease @ 0x14044F9A8
 * Callers:
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x14044F9D0 (ExReleaseRundownProtectionCacheAware.c)
 */

void __fastcall PfpPartitionRundownProtectionRelease(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
