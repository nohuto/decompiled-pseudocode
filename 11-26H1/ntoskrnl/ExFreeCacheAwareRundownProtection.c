/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1404B4AF0
 * Callers:
 *     PfpPartitionCleanup @ 0x1407CA108 (PfpPartitionCleanup.c)
 *     EtwpCleanupSiloState @ 0x14082B430 (EtwpCleanupSiloState.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x140919A0C (RawCleanupVcb.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
