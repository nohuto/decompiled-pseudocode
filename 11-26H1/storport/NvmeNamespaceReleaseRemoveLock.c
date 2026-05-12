/*
 * XREFs of NvmeNamespaceReleaseRemoveLock @ 0x14004EB30
 * Callers:
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0 (NvmeNamespaceSurpriseRemovalIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceReleaseRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
}
