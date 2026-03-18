/*
 * XREFs of ?PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z @ 0x140053154
 * Callers:
 *     MergePages @ 0x140052BA8 (MergePages.c)
 * Callees:
 *     ?PbmmAdjustSegmentStatisticsForMerge@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@W4PBMM_PAGE_SIZE@@2@Z @ 0x140052854 (-PbmmAdjustSegmentStatisticsForMerge@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@W4PBMM_PAGE_SIZE@@2@Z.c)
 *     ?PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140053240 (-PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 */

void __fastcall PbmmMergeAdjacentPages(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_SEGMENT *a2,
        struct PBMM_PAGE *a3,
        struct PBMM_PAGE *a4)
{
  _OWORD *v4; // rax
  __int64 v6; // r10
  struct PBMM_PAGE *v7; // r11
  _QWORD *v10; // r9
  __int64 v11; // r8
  unsigned int v12; // r8d

  v4 = (_OWORD *)((char *)a4 + 32);
  v6 = *((_QWORD *)a4 + 4);
  v7 = a3;
  if ( *(struct PBMM_PAGE **)(v6 + 8) != (struct PBMM_PAGE *)((char *)a4 + 32)
    || (v10 = (_QWORD *)*((_QWORD *)a4 + 5), (_OWORD *)*v10 != v4) )
  {
    __fastfail(3u);
  }
  *v10 = v6;
  *(_QWORD *)(v6 + 8) = v10;
  *v4 = 0LL;
  *((_QWORD *)a4 + 6) = 0LL;
  if ( *((_QWORD *)a4 + 7) )
  {
    PbmmRemovePageFromPhysicalAlloc(a1, a4);
    *((_QWORD *)a4 + 7) = v11;
  }
  v12 = *((_DWORD *)v7 + 16) ^ ((unsigned __int8)*((_DWORD *)v7 + 16) ^ (unsigned __int8)(*((_DWORD *)v7 + 16) + 8)) & 0x78;
  *((_DWORD *)v7 + 16) = v12;
  PbmmAdjustSegmentStatisticsForMerge((__int64)a2, (__int64)v7, (v12 >> 7) & 0xF, (*((_DWORD *)a4 + 16) >> 7) & 0xF);
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 32), a4);
}
