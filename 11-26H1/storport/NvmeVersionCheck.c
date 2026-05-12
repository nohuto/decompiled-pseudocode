/*
 * XREFs of NvmeVersionCheck @ 0x1400C6E18
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeControllerSupportsUUIDList @ 0x1400C6630 (NvmeControllerSupportsUUIDList.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeVersionCheck2 @ 0x1400C6E44 (NvmeVersionCheck2.c)
 *     NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400CF3F4 (NvmeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400F4AD0 (NvmeControllerGetReadyTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeVersionCheck(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  bool v4; // cf
  bool v5; // zf

  v3 = *(unsigned __int16 *)(a1 + 578);
  v4 = v3 < a2;
  v5 = v3 == a2;
  if ( v3 == a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 577) >= a3 )
      return 1;
    v4 = v3 < a2;
    v5 = v3 == a2;
  }
  return !v4 && !v5;
}
