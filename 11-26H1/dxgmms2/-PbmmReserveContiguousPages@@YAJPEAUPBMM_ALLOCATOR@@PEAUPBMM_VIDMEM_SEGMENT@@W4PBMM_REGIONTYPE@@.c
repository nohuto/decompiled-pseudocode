/*
 * XREFs of ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C
 * Callers:
 *     ReserveResourcesFromSegment @ 0x140051BBC (ReserveResourcesFromSegment.c)
 * Callees:
 *     ?PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z @ 0x1400515AC (-PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 *     ?PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052E04 (-PbmmRemovePageFromList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140053240 (-PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 *     FindContiguousPageRun @ 0x1400533D8 (FindContiguousPageRun.c)
 *     GetNextPage @ 0x1400534DC (GetNextPage.c)
 *     TrimContiguousRun @ 0x140053828 (TrimContiguousRun.c)
 */

__int64 __fastcall PbmmReserveContiguousPages(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_SEGMENT *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // ebx
  __int64 result; // rax
  unsigned int v10; // r9d
  __int64 v11; // r13
  const struct PBMM_PAGE *NextPage; // r9
  __int64 v13; // r15
  __int64 v14; // r14
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  struct PBMM_PAGE ***v16; // r9
  struct PBMM_PAGE *v17; // rdx
  struct PBMM_PHYSICAL_ALLOC *v18; // rcx
  __int64 v19; // r9
  __int64 **v20; // rcx
  __int64 *v21; // rax
  int v22; // ebx
  __int64 v23; // r9
  int v24; // [rsp+20h] [rbp-40h]
  __int64 v25[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+40h] BYREF
  struct PBMM_PAGE *v27; // [rsp+A8h] [rbp+48h] BYREF

  v26 = a3;
  v5 = *(_DWORD *)(a4 + 60);
  if ( *(_DWORD *)(a4 + 68) == v5 )
  {
    *(_DWORD *)(a5 + 48) = v5;
    return 0LL;
  }
  v10 = *(_DWORD *)(a4 + 64);
  v27 = 0LL;
  v25[0] = 0LL;
  v26 = 0;
  result = FindContiguousPageRun((__int64)a1, (__int64)a2, a3, v10, v24, a4, &v27, v25, &v26);
  if ( (int)result >= 0 )
  {
    v11 = v25[0];
    NextPage = v27;
    if ( !v26
      && **(_DWORD **)(v25[0] + 48)
       + ((*(_DWORD *)(v25[0] + 68) >> 5) & 0x7FFF)
       + (1 << ((*(_DWORD *)(v25[0] + 64) >> 3) & 0xF))
       - (**((_DWORD **)v27 + 6)
        + ((*((_DWORD *)v27 + 17) >> 5) & 0x7FFF)) == v5 )
    {
LABEL_10:
      v13 = a5;
      v14 = a4 + 32;
      while ( 1 )
      {
        PageListForPage = PbmmGetPageListForPage(a2, NextPage);
        PbmmRemovePageFromList(PageListForPage, v16);
        if ( *(_QWORD *)(v19 + 56) )
          PbmmRemovePageFromPhysicalAlloc(v18, v17);
        v20 = *(__int64 ***)(a4 + 40);
        v21 = (__int64 *)(v19 + 16);
        if ( *v20 != (__int64 *)v14 )
          __fastfail(3u);
        *(_QWORD *)(v19 + 24) = v20;
        *v21 = v14;
        *v20 = v21;
        *(_QWORD *)(a4 + 40) = v21;
        v22 = 1 << ((*(_DWORD *)(v19 + 64) >> 3) & 0xF);
        PbmmCompleteReservePage((struct PBMM_PHYSICAL_ALLOC *)a4, a2, *(_DWORD *)(v13 + 48), (struct PBMM_PAGE *)v19);
        *(_DWORD *)(v13 + 48) += v22;
        if ( v23 == v11 )
          break;
        NextPage = (const struct PBMM_PAGE *)GetNextPage((__int64)a2, v23);
      }
      return 0LL;
    }
    result = TrimContiguousRun(a1, a2, (__int64)&v27, (__int64)v25);
    if ( (int)result >= 0 )
    {
      NextPage = v27;
      v11 = v25[0];
      goto LABEL_10;
    }
  }
  return result;
}
