/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1404BB310
 * Callers:
 *     PfpPartitionCleanup @ 0x1407C70A8 (PfpPartitionCleanup.c)
 *     EtwpCleanupSiloState @ 0x1408251F0 (EtwpCleanupSiloState.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140A36A0C (RawCleanupVcb.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
