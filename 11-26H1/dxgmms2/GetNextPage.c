/*
 * XREFs of GetNextPage @ 0x1400534DC
 * Callers:
 *     FindContiguousPageRun @ 0x1400533D8 (FindContiguousPageRun.c)
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextPage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8

  v2 = *(_QWORD *)(a2 + 48);
  v3 = *(_QWORD *)(a2 + 32);
  if ( v3 == v2 + 8 )
  {
    v4 = v2 + 32;
    if ( v4 == *(_QWORD *)(a1 + 2880) + 32LL * *(_QWORD *)(a1 + 2872) )
      return 0LL;
    v3 = *(_QWORD *)(v4 + 8);
  }
  return v3 - 32;
}
