/*
 * XREFs of PfpPartitionRundownProtectionAcquire @ 0x1404B2034
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x1407C70D8 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x140A53E50 (PfpPartitionFindByHandle.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x1402F0540 (ExAcquireRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionRundownProtectionAcquire(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
