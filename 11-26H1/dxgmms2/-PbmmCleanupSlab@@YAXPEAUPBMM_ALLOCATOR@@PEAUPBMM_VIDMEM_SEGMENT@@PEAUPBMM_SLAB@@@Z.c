/*
 * XREFs of ?PbmmCleanupSlab@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@PEAUPBMM_SLAB@@@Z @ 0x140053EF4
 * Callers:
 *     CreateSlabArray @ 0x140053978 (CreateSlabArray.c)
 *     DestroyVidMemSegment @ 0x140053AF4 (DestroyVidMemSegment.c)
 * Callees:
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052E04 (-PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall PbmmCleanupSlab(struct PBMM_ALLOCATOR *a1, struct PBMM_VIDMEM_SEGMENT *a2, struct PBMM_SLAB *a3)
{
  char *v3; // rax
  struct PBMM_SEGMENT *v4; // r10
  char *v5; // r9
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE ***v7; // r9
  __int64 v8; // r11
  PVOID v9; // rdx

  v3 = (char *)a3 + 8;
  v4 = a2;
  v5 = (char *)*((_QWORD *)a3 + 1);
  if ( v5 != *((char **)a3 + 2) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v3 = (char *)WdLogSingleEntry5(0LL, 270LL, 78LL, a1, a2, a3);
    WdLogGlobalForLineNumber = 213;
  }
  if ( v5 != v3 )
  {
    PageListForPage = PbmmGetPageListForPage(v4, (const struct PBMM_PAGE *)(v5 - 32));
    PbmmRemovePageFromList(PageListForPage, v7);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v8 + 32), v9);
  }
}
