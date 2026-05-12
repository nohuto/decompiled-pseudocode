/*
 * XREFs of RaidDeleteResourceList @ 0x140183F14
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     RaidAdapterConfigureResources @ 0x14005AF28 (RaidAdapterConfigureResources.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 *     NvmeAdapterConfigureResources @ 0x1400D3CA4 (NvmeAdapterConfigureResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidDeleteResourceList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C526152u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x4C526152u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
