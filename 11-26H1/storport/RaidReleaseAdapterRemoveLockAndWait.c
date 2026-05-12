/*
 * XREFs of RaidReleaseAdapterRemoveLockAndWait @ 0x14006DC48
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLockAndWait(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
}
