/*
 * XREFs of ?PbmmSplitPage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAU1@@Z @ 0x140053274
 * Callers:
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?PbmmAdjustSegmentStatisticsForSplit@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x14005294C (-PbmmAdjustSegmentStatisticsForSplit@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z @ 0x140052E40 (-PbmmAllocatePage@@YAPEAUPBMM_PAGE@@PEAUPBMM_ALLOCATOR@@@Z.c)
 */

struct PBMM_PAGE *__fastcall PbmmSplitPage(struct PBMM_ALLOCATOR *a1, struct PBMM_SEGMENT *a2, struct PBMM_PAGE *a3)
{
  struct PBMM_PAGE *Page; // rbx
  __int64 v6; // rcx
  int v8; // edx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax

  Page = PbmmAllocatePage(a1);
  if ( !Page )
  {
    _InterlockedIncrement(&dword_14008A894);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 85;
    DxgkLogInternalTriageEvent(v6, 262145LL);
    return 0LL;
  }
  PbmmAdjustSegmentStatisticsForSplit(a2, a3);
  *((_DWORD *)a3 + 16) ^= ((unsigned __int8)*((_DWORD *)a3 + 16) ^ (unsigned __int8)(8 * (*((_DWORD *)a3 + 16) >> 3) - 8)) & 0x78;
  *(_OWORD *)Page = *(_OWORD *)a3;
  *((_OWORD *)Page + 1) = *((_OWORD *)a3 + 1);
  *((_OWORD *)Page + 2) = *((_OWORD *)a3 + 2);
  *((_OWORD *)Page + 3) = *((_OWORD *)a3 + 3);
  *((_QWORD *)Page + 8) = *((_QWORD *)a3 + 8);
  v8 = *((_DWORD *)Page + 17);
  *((_DWORD *)Page + 16) ^= (*((_DWORD *)Page + 16) ^ (*((_DWORD *)a3 + 16)
                                                     + (2048 << ((*((_DWORD *)Page + 16) >> 3) & 0xF)))) & 0x7FFFF800;
  v9 = (_QWORD *)((char *)a3 + 32);
  *((_DWORD *)Page + 17) = v8 ^ (v8 ^ (*((_DWORD *)a3 + 17) + (32 << ((*((_DWORD *)a3 + 16) >> 3) & 0xF)))) & 0xFFFE0;
  v10 = (_QWORD *)((char *)Page + 32);
  v11 = *((_QWORD *)a3 + 4);
  if ( *(struct PBMM_PAGE **)(v11 + 8) != (struct PBMM_PAGE *)((char *)a3 + 32) )
    goto LABEL_8;
  *v10 = v11;
  *((_QWORD *)Page + 5) = v9;
  *(_QWORD *)(v11 + 8) = v10;
  *v9 = v10;
  if ( *((_QWORD *)a3 + 7) )
  {
    v12 = (_QWORD *)((char *)a3 + 16);
    v13 = *((_QWORD *)a3 + 2);
    v14 = (_QWORD *)((char *)Page + 16);
    if ( *(struct PBMM_PAGE **)(v13 + 8) == (struct PBMM_PAGE *)((char *)a3 + 16) )
    {
      *v14 = v13;
      *((_QWORD *)Page + 3) = v12;
      *(_QWORD *)(v13 + 8) = v14;
      *v12 = v14;
      return Page;
    }
LABEL_8:
    __fastfail(3u);
  }
  return Page;
}
