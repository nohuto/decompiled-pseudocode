/*
 * XREFs of ReserveResourcesFromSegment @ 0x140051BBC
 * Callers:
 *     ReserveResourcesForOneAllocation @ 0x140051AC4 (ReserveResourcesForOneAllocation.c)
 * Callees:
 *     ?PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z @ 0x1400515AC (-PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGMENT@@W4PBMM_PAGE_SIZE@@IPEAPEAUPBMM_PAGE@@@Z @ 0x140052434 (-PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGM.c)
 *     ?PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@W4PBMM_PAGE_SIZE@@44IPEAPEAUPBMM_PAGE@@@Z @ 0x14005256C (-PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGM.c)
 *     ?PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140053240 (-PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 */

__int64 __fastcall ReserveResourcesFromSegment(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r12d
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12; // r8d
  __int64 v13; // r9
  int v14; // ecx
  int v15; // esi
  unsigned int i; // esi
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int OneVidMemPage; // eax
  int v21; // edi
  struct PBMM_PHYSICAL_ALLOC *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // r9
  _QWORD *v26; // rcx

  v6 = *(_DWORD *)(a4 + 60);
  if ( (*(_DWORD *)(a4 + 88) & 2) == 0 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a5 + 48);
      if ( v12 >= v6 )
        break;
      v13 = *(_QWORD *)(a5 + 40);
      if ( v13 == a4 + 32 || (*(_DWORD *)(v13 - 8) & 0xFFFFF) != v12 )
      {
        v15 = v6;
        if ( v13 != a4 + 32 )
          v15 = *(_DWORD *)(v13 - 8) & 0xFFFFF;
        for ( i = v15 - v12; i; i -= v21 )
        {
          if ( !_BitScanForward(&v18, v12 & *(_DWORD *)(a1 + 148)) )
            v18 = *(_DWORD *)(a1 + 144);
          _BitScanReverse(&v19, i);
          if ( v18 >= v19 )
            v18 = v19;
          if ( (*(_DWORD *)(a2 + 2864) & 0x1F) != 0 )
            OneVidMemPage = PbmmAllocateOneVidMemPage(a1, a4, a2);
          else
            OneVidMemPage = PbmmAllocateOneSysMemPage(a1, a4, a2, v18);
          v10 = OneVidMemPage;
          if ( OneVidMemPage < 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = OneVidMemPage;
              WdLogGlobalForLineNumber = 484;
            }
            return v10;
          }
          v21 = 1 << ((MEMORY[0x40] >> 3) & 0xF);
          PbmmCompleteReservePage(
            (struct PBMM_PHYSICAL_ALLOC *)a4,
            (struct PBMM_SEGMENT *)a2,
            *(_DWORD *)(a5 + 48),
            0LL);
          if ( *(_QWORD *)(v23 + 56) )
            PbmmRemovePageFromPhysicalAlloc(v22, (struct PBMM_PAGE *)v23);
          v24 = *(_QWORD *)(a5 + 40);
          v25 = (_QWORD *)(v23 + 16);
          v26 = *(_QWORD **)(v24 + 8);
          if ( *v26 != v24 )
            __fastfail(3u);
          *v25 = v24;
          v25[1] = v26;
          *v26 = v25;
          *(_QWORD *)(v24 + 8) = v25;
          *(_DWORD *)(a5 + 48) += v21;
          v12 = *(_DWORD *)(a5 + 48);
        }
      }
      else
      {
        v14 = (*(_DWORD *)(v13 + 48) >> 3) & 0xF;
        *(_QWORD *)(a5 + 40) = *(_QWORD *)v13;
        *(_DWORD *)(a5 + 48) = v12 + (1 << v14);
      }
    }
    return 0LL;
  }
  v9 = PbmmReserveContiguousPages(a1);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v9;
    WdLogGlobalForLineNumber = 420;
  }
  return v10;
}
