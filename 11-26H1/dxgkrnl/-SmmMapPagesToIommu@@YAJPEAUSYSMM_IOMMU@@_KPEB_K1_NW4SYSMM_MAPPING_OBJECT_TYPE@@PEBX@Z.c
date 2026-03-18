/*
 * XREFs of ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x14004099C (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x14006AEE8 (SmmMapPagedObjectToIommu.c)
 *     ?SysMmMapPagesToIommu@@YAJPEAUSYSMM_ADAPTER@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x14009C720 (-SysMmMapPagesToIommu@@YAJPEAUSYSMM_ADAPTER@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x14009D188 (SmmMapLockedPagesToIommu.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z @ 0x140062C58 (--0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z.c)
 *     SmmMapPagesToIommuInternal @ 0x14006A87C (SmmMapPagesToIommuInternal.c)
 */

__int64 __fastcall SmmMapPagesToIommu(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6, __int64 a7)
{
  unsigned int v11; // edi
  void *v12; // rax

  v11 = SmmMapPagesToIommuInternal(a1, a2, a3, a4, a5);
  v12 = operator new(0x20uLL, (struct DXGK_LOG *)(a1 + 192), 0, 8 * dword_1401696D0);
  if ( v12 )
    SYSMM_LOG_ENTRY_MAPPING::SYSMM_LOG_ENTRY_MAPPING(v12, a2, a3, 0LL, a4, a5, a6, a7, v11);
  return v11;
}
