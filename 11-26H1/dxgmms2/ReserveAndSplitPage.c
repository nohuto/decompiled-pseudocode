/*
 * XREFs of ReserveAndSplitPage @ 0x1400526A8
 * Callers:
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     TryReserveOnePageFromLocation @ 0x140052764 (TryReserveOnePageFromLocation.c)
 * Callees:
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052D58 (-PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z @ 0x140052D84 (-PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z @ 0x140053274 (-PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z.c)
 */

struct PBMM_PAGE *__fastcall ReserveAndSplitPage(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_SEGMENT *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 v8; // rcx
  struct PBMM_PAGE *OnePageFromList; // rbx
  const struct PBMM_PAGE *v10; // rax
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE *v13; // r9

  v8 = a3 + 24 * (a4 + 16LL * a6);
  if ( *(_DWORD *)(v8 + 16) )
  {
    OnePageFromList = PbmmGetOnePageFromList((struct PBMM_PAGE_LIST *)v8);
  }
  else
  {
    OnePageFromList = (struct PBMM_PAGE *)ReserveAndSplitPage((_DWORD)a1, (_DWORD)a2, a3, a4 + 1, a5, a6);
    if ( !OnePageFromList )
      return 0LL;
  }
  v10 = PbmmSplitPage(a1, a2, OnePageFromList);
  if ( !v10 )
  {
    MergePages(a1, a2, OnePageFromList);
    return 0LL;
  }
  PageListForPage = PbmmGetPageListForPage(a2, v10);
  PbmmAddPageToList(PageListForPage, v13);
  return OnePageFromList;
}
