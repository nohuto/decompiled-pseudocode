/*
 * XREFs of MergePages @ 0x140052BA8
 * Callers:
 *     ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48 (-PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     CancelResources @ 0x140050F84 (CancelResources.c)
 *     CommitResources @ 0x1400510F4 (CommitResources.c)
 *     EvictAllNonReservedPages @ 0x140051390 (EvictAllNonReservedPages.c)
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 *     TrimContiguousRun @ 0x140053828 (TrimContiguousRun.c)
 * Callees:
 *     ?PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052D58 (-PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z @ 0x140053154 (-PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z.c)
 *     ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C (-PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z.c)
 */

void __fastcall MergePages(struct PBMM_ALLOCATOR *a1, struct PBMM_SEGMENT *a2, struct PBMM_PAGE *a3, char a4)
{
  unsigned int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // edx
  char *v12; // rax
  __int64 v13; // r8
  unsigned int v14; // eax
  struct PBMM_PAGE *v15; // rsi
  struct PBMM_PAGE *v16; // r11
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned int v20; // r9d
  int v21; // ecx
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE *v23; // r10

  while ( 1 )
  {
    v8 = *((_DWORD *)a3 + 17);
    if ( (v8 & 0x1F) == 0 )
      break;
    v9 = *((_QWORD *)a3 + 7);
    if ( v9 && (*(_DWORD *)(v9 + 88) & 2) != 0 )
      goto LABEL_19;
    v10 = (*((_DWORD *)a3 + 16) >> 3) & 0xF;
    v11 = v8 >> 5;
    if ( v10 == *((_DWORD *)a1 + 36) )
      goto LABEL_19;
    v12 = (char *)a3 + 40;
    if ( ((unsigned __int16)v11 & (unsigned __int16)((2 << v10) - 1) & 0x7FFF) == 0 )
      v12 = (char *)a3 + 32;
    v13 = *(_QWORD *)v12 - 32LL;
    if ( ((*(_DWORD *)(*(_QWORD *)v12 + 32LL) >> 3) & 0xF) != v10 )
      goto LABEL_19;
    v14 = *(_DWORD *)(v13 + 68);
    if ( (v14 & 0x200000) != 0 )
      goto LABEL_19;
    v15 = a3;
    v16 = (struct PBMM_PAGE *)v13;
    if ( (v11 & 0x7FFF) >= ((v14 >> 5) & 0x7FFF) )
    {
      v15 = (struct PBMM_PAGE *)v13;
      v16 = a3;
    }
    v17 = *((_DWORD *)v15 + 16);
    v18 = *((_DWORD *)v16 + 16);
    if ( (((unsigned __int8)v18 ^ *((_BYTE *)v15 + 64)) & 7) != 0
      || (v19 = *((_QWORD *)v15 + 7), v19 != *((_QWORD *)v16 + 7))
      || v19
      && ((v20 = v17 >> 11, v21 = (v17 >> 3) & 0xF, (v20 & 0xFFFFF) + (1 << v21) != ((v18 >> 11) & 0xFFFFF))
       || (v20 & ((1 << (v21 + 1)) - 1) & 0xFFFFF) != 0) )
    {
LABEL_19:
      if ( !a4 )
        return;
      goto LABEL_20;
    }
    if ( a4 )
      PbmmReclaimPage(a2, (struct PBMM_PAGE *)v13);
    PbmmMergeAdjacentPages(a1, a2, v15, v16);
    a3 = v15;
  }
  if ( a4 )
  {
    if ( (*((_DWORD *)a3 + 16) & 7) != 0 )
    {
LABEL_20:
      PageListForPage = PbmmGetPageListForPage(a2, a3);
      PbmmAddPageToList(PageListForPage, v23);
      return;
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 32), a3);
    --*((_QWORD *)a2 + 359);
  }
}
