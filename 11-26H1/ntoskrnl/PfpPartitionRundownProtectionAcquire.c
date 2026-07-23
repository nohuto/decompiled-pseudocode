/*
 * XREFs of PfpPartitionRundownProtectionAcquire @ 0x1404AB540
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x1407CA138 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionRundownProtectionAcquire(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
