/*
 * XREFs of StorChildAdapterPdoAcquireRemoveLock @ 0x14012EFB4
 * Callers:
 *     StorChildAdapterPdoPnpIrp @ 0x14012EFE0 (StorChildAdapterPdoPnpIrp.c)
 *     StorChildAdapterPdoPowerIrp @ 0x14012F484 (StorChildAdapterPdoPowerIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorChildAdapterPdoAcquireRemoveLock(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 64)) == 0 ? 0xC0000056 : 0;
}
