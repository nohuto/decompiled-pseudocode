/*
 * XREFs of ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400FFC9C
 * Callers:
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     HandlePromotionCandidates @ 0x14011A818 (HandlePromotionCandidates.c)
 * Callees:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1400FFF24 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 */

unsigned __int64 __fastcall VIDMM_SEGMENT::GetLargestGap(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v11; // rcx
  unsigned __int64 LargestGap; // rdx
  unsigned __int64 v13; // rsi
  unsigned int v14; // r10d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax

  v6 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  v7 = *(_QWORD *)(((*(_DWORD *)(a1 + 64) & 0x20 | 0x40uLL) >> 2) + *(_QWORD *)a2);
  if ( (**(_DWORD **)(a2 + 368) & 0x20000) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 416);
    v7 = ~*(_QWORD *)(a1 + 408) & (*(_QWORD *)(a1 + 408) + v7);
  }
  v8 = *(_QWORD *)(a1 + 40);
  v9 = 0LL;
  if ( a3 != 7 )
  {
    if ( a3 == 3 )
    {
LABEL_5:
      a4 = 1;
      return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 256), v7, v6, a4, v9, v8);
    }
    if ( a3 == 4 )
    {
      v14 = dword_14008A338;
      if ( *(_DWORD *)(a1 + 108) != 1 )
        v14 = dword_14008A33C;
      if ( (*(_DWORD *)(a2 + 28) & 2) == 0 )
      {
        v15 = v8 / 0x64;
        if ( *(_BYTE *)(a1 + 457) )
        {
          v8 = (v15 * v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_5;
        }
        v9 = (v15 * (100 - v14) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      }
    }
    else
    {
      if ( a3 == 5 )
      {
        if ( *(_DWORD *)(a1 + 420) == 1 )
        {
          v16 = *(_QWORD *)(a1 + 440);
          if ( v16 )
          {
            if ( v16 >= v7 )
            {
              v9 = *(_QWORD *)(a1 + 424);
              v8 = *(_QWORD *)(a1 + 432);
            }
            else
            {
              a3 = 6;
            }
          }
          else
          {
            v8 = *(_QWORD *)(a1 + 48) + *(_QWORD *)(a1 + 56);
            v9 = v8 - v7;
          }
        }
        else
        {
          v9 = *(_QWORD *)(a1 + 48);
          v8 = v9 + *(_QWORD *)(a1 + 56);
        }
        a4 = 0;
      }
      if ( a3 != 6 )
        return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 256), v7, v6, a4, v9, v8);
      if ( *(_DWORD *)(a1 + 420) == 1 )
      {
        v11 = *(_QWORD *)(a1 + 424);
        if ( v11 - *(_QWORD *)(a1 + 48) < v7 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v11);
            WdLogGlobalForLineNumber = 4107;
          }
          return *(_QWORD *)(a1 + 424) - *(_QWORD *)(a1 + 48);
        }
        v8 = *(_QWORD *)(a1 + 432);
        v9 = v11 - v7;
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 48);
        v8 = v9 + *(_QWORD *)(a1 + 56);
      }
    }
LABEL_38:
    a4 = 0;
    return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 256), v7, v6, a4, v9, v8);
  }
  if ( *(_DWORD *)(a1 + 420) != 1 )
    goto LABEL_38;
  LargestGap = 0LL;
  v13 = *(_QWORD *)(a1 + 48) + *(_QWORD *)(a1 + 56);
  if ( v13 < v8 )
    LargestGap = VIDMM_LINEAR_POOL::GetLargestGap(
                   *(VIDMM_LINEAR_POOL **)(a1 + 256),
                   v7,
                   v6,
                   0,
                   v13,
                   *(_QWORD *)(a1 + 40));
  if ( LargestGap < v7 && v13 )
    return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 256), v7, v6, 0, 0LL, v13);
  return LargestGap;
}
