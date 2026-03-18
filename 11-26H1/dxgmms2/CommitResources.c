/*
 * XREFs of CommitResources @ 0x1400510F4
 * Callers:
 *     ?PbmmCommitResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x140051564 (-PbmmCommitResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z.c)
 * Callees:
 *     EvictAllNonReservedPages @ 0x140051390 (EvictAllNonReservedPages.c)
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 *     TrimSystemMemoryResources @ 0x140051DE4 (TrimSystemMemoryResources.c)
 *     ?PbmmIncrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052AEC (-PbmmIncrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4 (-PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 *     ?VidMmPbmmAddCommittedBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0870 (-VidMmPbmmAddCommittedBytesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@II@Z.c)
 */

__int64 __fastcall CommitResources(struct PBMM_ALLOCATOR *a1, __int64 a2, _QWORD **a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r14
  char v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v12; // eax
  int PageResident; // eax
  unsigned int v14; // r14d
  unsigned int v15; // eax
  int v16; // r10d
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  unsigned int v20; // r9d
  _QWORD *v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 result; // rax

  while ( *a3 )
  {
    v5 = (__int64)(*a3 - 3);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( !v6 )
        break;
      v7 = *(_QWORD *)(v6 + 56);
      v8 = 0;
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*(_DWORD *)(v6 + 68) & 0x1F));
      v10 = *(_DWORD *)(v6 + 64);
      v11 = 1 << ((v10 >> 3) & 0xF);
      if ( v7 == v5 )
      {
        v12 = v10 & 7;
        if ( v12 == 2 || v12 == 3 )
          v8 = 1;
      }
      else if ( v7 )
      {
        EvictOnePage(
          a1,
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*(_DWORD *)(v6 + 68) & 0x1F)),
          *(_QWORD *)(v6 + 56),
          *(_QWORD *)(v5 + 16));
        if ( (*(_DWORD *)(v7 + 88) & 2) != 0 )
          EvictAllNonReservedPages(a1);
      }
      if ( (*(_DWORD *)(v9 + 2864) & 0x1F) == 0 )
        TrimSystemMemoryResources(a1, v5, v9, v11);
      if ( !v8 )
      {
        PageResident = PbmmMakePageResident(a1, (struct PBMM_PHYSICAL_ALLOC *)v5, (struct PBMM_PAGE *)v6);
        v14 = PageResident;
        if ( PageResident < 0 )
        {
          WdLogSingleEntry1(3LL, PageResident);
          result = v14;
          WdLogGlobalForLineNumber = 853;
          return result;
        }
        v15 = *(_DWORD *)(v6 + 64) & 0xFFFFFFF8 | 4;
        v16 = v15 ^ (*(_DWORD *)(v6 + 8) << 11);
        *(_QWORD *)(v6 + 56) = v5;
        v17 = v15 ^ v16 & 0x7FFFF800;
        *(_DWORD *)(v6 + 64) = v17;
        if ( (*(_DWORD *)(v5 + 88) & 2) != 0 )
        {
          v18 = v17 >> 3;
        }
        else
        {
          _BitScanReverse(&v19, *(_DWORD *)(v5 + 60) - ((v17 >> 11) & 0xFFFFF));
          _BitScanReverse(&v18, ((v17 >> 11) & *((_DWORD *)a1 + 37) & 0xFFFFF) + (1 << *((_DWORD *)a1 + 36)));
          if ( v19 < v18 )
            LOWORD(v18) = v19;
        }
        v20 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)((_WORD)v18 << 7)) & 0x780;
        *(_DWORD *)(v6 + 64) = v20;
        PbmmIncrementResidentPfns(v5, v9, v18 & 0xF, (v20 >> 3) & 0xF, v11);
      }
      v21 = *(_QWORD **)(v5 + 16);
      if ( v21 )
        *(_QWORD *)(v5 + 16) = *v21;
      *(_DWORD *)(v6 + 68) &= ~0x200000u;
      v22 = *(_DWORD *)(v6 + 64);
      *(_OWORD *)v6 = 0LL;
      v23 = v22 & 0xFFFFFFF8 | 4;
      *(_DWORD *)(v6 + 64) = v23;
      *(_DWORD *)(v5 + 76) -= v11;
      *(_QWORD *)(v9 + 40) -= v11;
      --*(_QWORD *)(v9 + 8 * ((v23 >> 3) & 0xF) + 304);
      v24 = *(_DWORD *)(v6 + 64);
      *(_DWORD *)(v5 + 72) += v11;
      *(_QWORD *)(v9 + 24) += v11;
      ++*(_QWORD *)(v9 + 8LL * ((v24 >> 3) & 0xF) + 48);
      VidMmPbmmAddCommittedBytesCB(
        **(struct VIDMM_PHYSICAL_ADAPTER ***)(v9 + 8),
        *(struct VIDMM_PHYSICAL_ALLOC **)(v5 + 48),
        *(_DWORD *)(v9 + 2864) & 0x1F,
        v11);
      if ( (*(_DWORD *)(v5 + 88) & 2) == 0 )
        MergePages(a1, (struct PBMM_SEGMENT *)v9, (struct PBMM_PAGE *)v6);
    }
    if ( *a3 )
      *a3 = (_QWORD *)**a3;
  }
  return 0LL;
}
