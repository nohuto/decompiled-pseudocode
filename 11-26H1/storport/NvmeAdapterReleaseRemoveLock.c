/*
 * XREFs of NvmeAdapterReleaseRemoveLock @ 0x14005CBF8
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterReleaseRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
}
