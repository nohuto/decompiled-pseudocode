/*
 * XREFs of ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0
 * Callers:
 *     ?SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x140041524 (-SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC (-SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmAssignDomain @ 0x14009BB18 (SmmAssignDomain.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 *     SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4 (SmmUnmapContiguousRangeFromIommu.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140193E3C (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285CDC (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x14009D814 (-AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z.c)
 */

__int64 __fastcall operator new(int a1, struct DXGK_LOG *a2, unsigned int a3, int a4)
{
  __int64 v4; // rax
  struct DXGK_LOG_ENTRY *LogEntry; // rax

  if ( !*(_QWORD *)a2 )
    return 0LL;
  v4 = *((_QWORD *)a2 + 3);
  if ( !_bittest64(&v4, a3) )
    return 0LL;
  LogEntry = DXGK_LOG::AllocateLogEntry(a2, a3, a1 + a4 + 24);
  return ((unsigned __int64)LogEntry + 24) & -(__int64)(LogEntry != 0LL);
}
