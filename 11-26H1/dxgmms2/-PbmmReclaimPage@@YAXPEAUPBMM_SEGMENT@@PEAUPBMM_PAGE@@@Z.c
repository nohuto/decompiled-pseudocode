/*
 * XREFs of ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C
 * Callers:
 *     ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48 (-PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     EvictAllNonReservedPages @ 0x140051390 (EvictAllNonReservedPages.c)
 *     ReserveResidentPagesForPass @ 0x140051A20 (ReserveResidentPagesForPass.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 * Callees:
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052E04 (-PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 */

void __fastcall PbmmReclaimPage(struct PBMM_SEGMENT *a1, struct PBMM_PAGE *a2)
{
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE ***v3; // r9

  PageListForPage = PbmmGetPageListForPage(a1, a2);
  PbmmRemovePageFromList(PageListForPage, v3);
}
