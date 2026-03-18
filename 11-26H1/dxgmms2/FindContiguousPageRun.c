/*
 * XREFs of FindContiguousPageRun @ 0x1400533D8
 * Callers:
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 * Callees:
 *     GetNextPage @ 0x1400534DC (GetNextPage.c)
 *     IsPageContiguousCandidate @ 0x14005351C (IsPageContiguousCandidate.c)
 */

__int64 __fastcall FindContiguousPageRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 *a8,
        unsigned int *a9)
{
  __int64 v11; // r8
  __int64 NextPage; // r8
  unsigned int v13; // edx
  unsigned int v14; // r10d
  __int64 v15; // r11

  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 2880) + 8LL) - 32LL;
LABEL_2:
  while ( v11 )
  {
    if ( (unsigned __int8)IsPageContiguousCandidate(v11) )
    {
      v13 = 0;
      if ( !a4
        || (v13 = (1 << ((*(_DWORD *)(NextPage + 64) >> 3) & 0xF)) % a4) == 0
        || (v13 = a4 - v13, v13 < 1 << ((*(_DWORD *)(NextPage + 64) >> 3) & 0xF)) )
      {
        *a9 = v13;
        while ( NextPage )
        {
          if ( !(unsigned __int8)IsPageContiguousCandidate(NextPage) )
            goto LABEL_2;
          if ( 1 << ((*(_DWORD *)(v11 + 64) >> 3) & 0xF) >= v14 )
          {
            *a7 = v15;
            *a8 = v11;
            return 0LL;
          }
          NextPage = GetNextPage(a2, v11);
        }
        return 3223191808LL;
      }
    }
    v11 = GetNextPage(a2, NextPage);
  }
  return 3223191808LL;
}
