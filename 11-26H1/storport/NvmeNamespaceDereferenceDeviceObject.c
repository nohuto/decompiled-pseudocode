/*
 * XREFs of NvmeNamespaceDereferenceDeviceObject @ 0x1401033C0
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 */

__int64 __fastcall NvmeNamespaceDereferenceDeviceObject(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeNamespace; // rax

  NvmeNamespace = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeNamespace(a1);
  ExReleaseRundownProtectionCacheAware(NvmeNamespace[15]);
  return 0LL;
}
