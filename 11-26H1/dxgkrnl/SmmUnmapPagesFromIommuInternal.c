/*
 * XREFs of SmmUnmapPagesFromIommuInternal @ 0x14006D4E4
 * Callers:
 *     ?SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x140041524 (-SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 *     SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4 (SmmUnmapContiguousRangeFromIommu.c)
 * Callees:
 *     SmmUnmapIommu @ 0x1400647DC (SmmUnmapIommu.c)
 *     SmmIoMmuUnmapStagingArray @ 0x14009BE10 (SmmIoMmuUnmapStagingArray.c)
 */

__int64 __fastcall SmmUnmapPagesFromIommuInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  if ( !a5 || (*(_DWORD *)(a1 + 28) & 1) != 0 )
    return SmmUnmapIommu(a1, a2, a3, a4);
  v6[1] = *(_QWORD *)(a1 + 176);
  v9 = 0LL;
  v6[0] = a3;
  v7 = a4;
  v8 = 256;
  return SmmIoMmuUnmapStagingArray(a1, v6);
}
