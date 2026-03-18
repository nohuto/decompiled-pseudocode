/*
 * XREFs of ?QuerySegmentUsageStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1400A91CC
 * Callers:
 *     VidMmQuerySegmentUsageStatistics @ 0x14004D860 (VidMmQuerySegmentUsageStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentUsageStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_MEMORY_USAGE *a4)
{
  unsigned int v4; // r11d
  __int64 result; // rax
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = *((_DWORD *)this + 1738);
  if ( a2 >= v4 )
  {
    WdLogSingleEntry2(3LL, a2, v4);
    WdLogGlobalForLineNumber = 776;
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 136LL);
  if ( a3 >= v6 )
  {
    WdLogSingleEntry2(3LL, a3, v6);
    WdLogGlobalForLineNumber = 786;
    return 3221225485LL;
  }
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 1752LL) + 8LL * a3);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = *(_QWORD *)(v7 + 88);
  *(_QWORD *)a4 = v9;
  *((_QWORD *)a4 + 3) = v8 - v9;
  if ( (*(_DWORD *)(v7 + 64) & 0x1000) != 0 )
    v10 = -1LL;
  else
    v10 = *(_QWORD *)(v7 + 40) - v8;
  *((_QWORD *)a4 + 1) = v10;
  result = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  return result;
}
