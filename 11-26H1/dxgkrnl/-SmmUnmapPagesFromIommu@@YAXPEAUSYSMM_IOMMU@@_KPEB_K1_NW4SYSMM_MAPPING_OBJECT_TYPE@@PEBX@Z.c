/*
 * XREFs of ?SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x140041524
 * Callers:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140040B5C (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x14006BC64 (SmmUnmapPagedObjectFromIommu.c)
 *     ?SysMmUnmapPagesFromIommu@@YAXPEAUSYSMM_ADAPTER@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x14009C860 (-SysMmUnmapPagesFromIommu@@YAXPEAUSYSMM_ADAPTER@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x14009D240 (SmmUnmapLockedPagesFromIommu.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z @ 0x140062C58 (--0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z.c)
 *     SmmUnmapPagesFromIommuInternal @ 0x14006D4E4 (SmmUnmapPagesFromIommuInternal.c)
 */

__int64 __fastcall SmmUnmapPagesFromIommu(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6, __int64 a7)
{
  int v9; // r14d
  void *v11; // rax

  v9 = a1;
  v11 = operator new(0x20uLL, (struct DXGK_LOG *)(a1 + 192), 1u, 8 * dword_1401696D0);
  if ( v11 )
    SYSMM_LOG_ENTRY_MAPPING::SYSMM_LOG_ENTRY_MAPPING(v11, a2, a3, 0LL, a4, a5, a6, a7, 0);
  return SmmUnmapPagesFromIommuInternal(v9, a2, a3, a4, a5);
}
