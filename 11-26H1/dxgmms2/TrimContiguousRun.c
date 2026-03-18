/*
 * XREFs of TrimContiguousRun @ 0x140053828
 * Callers:
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 * Callees:
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052E04 (-PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 *     SplitPageForContiguousRun @ 0x14005379C (SplitPageForContiguousRun.c)
 */

__int64 __fastcall TrimContiguousRun(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_SEGMENT *a2,
        unsigned int a3,
        unsigned int a4,
        struct PBMM_PAGE **a5,
        __int64 *a6)
{
  struct PBMM_PAGE *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
  struct PBMM_PAGE *v14; // rax
  struct PBMM_PAGE *v15; // rax
  struct PBMM_PAGE_LIST *PageListForPage; // rax

  while ( 1 )
  {
    v10 = *a5;
    v11 = *a6;
    if ( !a3 && !a4 )
      return 0LL;
    if ( v10 != (struct PBMM_PAGE *)v11 )
      break;
    v12 = SplitAndAddPages(a1, a2, *a5);
    if ( !v12 )
      return 3221225495LL;
    v13 = 1 << ((*((_DWORD *)v10 + 16) >> 3) & 0xF);
    if ( a3 >= v13 )
    {
      a3 -= v13;
      *a5 = (struct PBMM_PAGE *)v12;
    }
    if ( a4 < v13 )
      *a6 = v12;
    else
      a4 -= v13;
  }
  if ( a3 )
  {
    v14 = SplitPageForContiguousRun(a1, a2, *a5, (1 << ((*((_DWORD *)v10 + 16) >> 3) & 0xF)) - a3, 1);
    v10 = v14;
    if ( !v14 )
      return 3221225495LL;
    *a5 = v14;
  }
  if ( a4 )
  {
    v15 = SplitPageForContiguousRun(
            a1,
            a2,
            (struct PBMM_PAGE *)v11,
            (1 << ((*(_DWORD *)(v11 + 64) >> 3) & 0xF)) - a4,
            0);
    if ( !v15 )
    {
      if ( a3 )
      {
        PageListForPage = PbmmGetPageListForPage(a2, v10);
        PbmmRemovePageFromList(PageListForPage, (struct PBMM_PAGE ***)v10);
        MergePages(a1, a2, v10, 1);
      }
      return 3221225495LL;
    }
    *a6 = (__int64)v15;
  }
  return 0LL;
}
