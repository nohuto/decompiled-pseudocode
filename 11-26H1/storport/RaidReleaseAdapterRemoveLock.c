/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x14003F754
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
}
