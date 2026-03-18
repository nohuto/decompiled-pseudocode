/*
 * XREFs of SplitAndAddPages @ 0x140053704
 * Callers:
 *     SplitPageForContiguousRun @ 0x14005379C (SplitPageForContiguousRun.c)
 *     TrimContiguousRun @ 0x140053828 (TrimContiguousRun.c)
 * Callees:
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052D58 (-PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052E04 (-PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z @ 0x140053274 (-PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z.c)
 */

__int64 __fastcall SplitAndAddPages(struct PBMM_ALLOCATOR *a1, struct PBMM_SEGMENT *a2, struct PBMM_PAGE *a3)
{
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE_LIST *v8; // rax
  struct PBMM_PAGE_LIST *v9; // r9
  struct PBMM_PAGE *v10; // r10
  __int64 v11; // r10

  PageListForPage = PbmmGetPageListForPage(a2, a3);
  PbmmRemovePageFromList(PageListForPage, (struct PBMM_PAGE ***)a3);
  if ( PbmmSplitPage(a1, a2, a3) )
  {
    v8 = PbmmGetPageListForPage(a2, a3);
    PbmmAddPageToList(v8, a3);
    PbmmAddPageToList(v9, v10);
    return v11;
  }
  else
  {
    MergePages(a1, a2, a3, 1);
    return 0LL;
  }
}
