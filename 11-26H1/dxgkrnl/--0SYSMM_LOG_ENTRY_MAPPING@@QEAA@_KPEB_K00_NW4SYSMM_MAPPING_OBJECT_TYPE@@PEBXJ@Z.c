/*
 * XREFs of ??0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z @ 0x140062C58
 * Callers:
 *     ?SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x140041524 (-SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC (-SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 *     SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4 (SmmUnmapContiguousRangeFromIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SYSMM_LOG_ENTRY_MAPPING::SYSMM_LOG_ENTRY_MAPPING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8,
        unsigned int a9)
{
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // edx
  ULONG v15; // edx

  *(_QWORD *)(a1 + 8) = a2;
  v10 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)a1 = a8;
  v11 = (a6 | v10 & 0xFFFFFFFE) ^ ((a6 | v10 & 0xFE) ^ (unsigned __int8)(4 * a7)) & 0x3C;
  *(_DWORD *)(a1 + 24) = v11;
  v12 = v11 & 0xFFFFF83F | ((dword_1401696D0 & 0x1F) << 6);
  *(_DWORD *)(a1 + 28) = a5;
  v13 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)~(a9 >> 20)) & 0x800;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 16) = a3;
    v14 = v13 & 0xFFFFFFFD;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a4;
    v14 = v13 | 2;
  }
  *(_DWORD *)(a1 + 24) = v14;
  v15 = (v14 >> 6) & 0x1F;
  if ( v15 )
    RtlCaptureStackBackTrace(1u, v15, (PVOID *)(a1 + 32), 0LL);
  return a1;
}
