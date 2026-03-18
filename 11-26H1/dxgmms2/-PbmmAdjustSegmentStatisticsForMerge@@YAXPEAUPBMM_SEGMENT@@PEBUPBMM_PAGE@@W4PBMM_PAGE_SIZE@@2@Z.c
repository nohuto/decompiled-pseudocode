/*
 * XREFs of ?PbmmAdjustSegmentStatisticsForMerge@@YAXPEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@W4PBMM_PAGE_SIZE@@2@Z @ 0x140052854
 * Callers:
 *     ?PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z @ 0x140053154 (-PbmmMergeAdjacentPages@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@2@Z.c)
 * Callees:
 *     ?PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140052B80 (-PbmmIsPreferredSegment@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z.c)
 */

unsigned __int8 __fastcall PbmmAdjustSegmentStatisticsForMerge(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v10; // r9
  unsigned __int8 result; // al
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9

  v4 = a1;
  v5 = a4;
  v6 = (*(_DWORD *)(a2 + 64) >> 3) & 0xF;
  v7 = a3;
  v8 = (unsigned int)v6;
  v10 = (unsigned int)(v6 - 1);
  if ( (*(_DWORD *)(a2 + 64) & 7) == 4 )
  {
    *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 1) + 48) -= 2LL;
    ++*(_QWORD *)(v4 + 8 * v6 + 48);
  }
  result = *(_DWORD *)(a2 + 64) & 7;
  if ( result >= 2u )
  {
    *(_QWORD *)(v4 + 8 * v10 + 176) -= 2LL;
    ++*(_QWORD *)(v4 + 8LL * (unsigned int)v6 + 176);
    v12 = (unsigned int)(1 << (v6 - 1));
    *(_QWORD *)(v4 + 8 * (v10 + 16 * v7) + 560) -= v12;
    *(_QWORD *)(v4 + 8 * (v10 + 16 * v5) + 560) -= v12;
    v13 = v8 + 16LL * ((*(_DWORD *)(a2 + 64) >> 7) & 0xF);
    *(_QWORD *)(v4 + 8 * v13 + 560) += (unsigned int)(2 * v12);
    result = PbmmIsPreferredSegment(
               *(struct _D3DDDI_SEGMENTPREFERENCE *)(*(_QWORD *)(a2 + 56) + 84LL),
               (*(_DWORD *)(v4 + 2864) & 0x1F) + 1);
    if ( !result )
    {
      *(_QWORD *)(v4 + 8 * v14 + 432) -= 2LL;
      ++*(_QWORD *)(v4 + 8 * v8 + 432);
    }
  }
  ++*(_QWORD *)(v4 + 8 * v8 + 2736);
  return result;
}
