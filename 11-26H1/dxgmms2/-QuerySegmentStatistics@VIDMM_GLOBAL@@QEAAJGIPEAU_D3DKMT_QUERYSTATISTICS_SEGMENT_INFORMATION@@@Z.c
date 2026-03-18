/*
 * XREFs of ?QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x140122900
 * Callers:
 *     VidMmQuerySegmentStatistics @ 0x140042020 (VidMmQuerySegmentStatistics.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a4)
{
  unsigned int v7; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  int v22; // eax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rcx

  v7 = *((_DWORD *)this + 1738);
  if ( a2 >= v7 )
  {
    WdLogSingleEntry2(3LL, a2, v7);
    WdLogGlobalForLineNumber = 478;
    return 3221225485LL;
  }
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 136LL) )
    return 3221225485LL;
  if ( (*((_BYTE *)this + 41065) & 0x20) != 0 )
  {
    memset((char *)a4 + 40, 0, 0x70uLL);
    v9 = *((_QWORD *)a4 + 13);
    *(_QWORD *)a4 = 0x10000000LL;
    *((_QWORD *)a4 + 1) = 0LL;
    *((_QWORD *)a4 + 2) = 0LL;
    *((_QWORD *)a4 + 3) = 0LL;
    *((_QWORD *)a4 + 4) = 0LL;
    if ( a3 )
      v10 = v9 & 0xFFFFFFFFFFFFFE02uLL | 4;
    else
      v10 = v9 & 0xFFFFFFFFFFFFFE02uLL | 0x149;
    *((_QWORD *)a4 + 13) = v10;
  }
  else
  {
    _mm_lfence();
    v11 = *((_QWORD *)this + 5040);
    v12 = (_QWORD *)((char *)a4 + 48);
    v13 = 5LL;
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8LL * a2) + 1752LL) + 8LL * a3);
    *(_QWORD *)a4 = *(_QWORD *)(v14 + 80);
    *((_QWORD *)a4 + 1) = *(_QWORD *)(v14 + 88);
    *((_QWORD *)a4 + 2) = *(_QWORD *)(v14 + 96);
    *((_QWORD *)a4 + 3) = *(_QWORD *)(v14 + 344);
    *((_DWORD *)a4 + 8) = *(_DWORD *)(v14 + 352);
    *((_DWORD *)a4 + 9) = *(_DWORD *)(v14 + 356);
    do
    {
      *v12 = *(_QWORD *)((char *)v12 + v14 + 344 - (_QWORD)a4 - 32);
      ++v12;
      --v13;
    }
    while ( v13 );
    v15 = 0LL;
    if ( (*(_DWORD *)(v14 + 64) & 1) != 0 || (v16 = 0, *(_DWORD *)(v14 + 108) != 1) )
      v16 = 1;
    *((_DWORD *)a4 + 10) = v16;
    *((_QWORD *)a4 + 11) = *(_QWORD *)(v14 + 248);
    v17 = ((unsigned __int64)*(unsigned int *)(v14 + 64) >> 7) ^ (*((_QWORD *)a4 + 12) ^ ((unsigned __int64)*(unsigned int *)(v14 + 64) >> 7)) & 0xFFFFFFFFFFFFFFFEuLL;
    *((_QWORD *)a4 + 12) = v17;
    v18 = ((unsigned __int64)*(unsigned int *)(v14 + 64) >> 7) ^ (((unsigned __int64)*(unsigned int *)(v14 + 64) >> 7) ^ v17) & 0xFFFFFFFFFFFFFFFDuLL;
    *((_QWORD *)a4 + 12) = v18;
    *((_QWORD *)a4 + 12) = ((unsigned __int64)*(unsigned int *)(v14 + 64) >> 7) ^ (((unsigned __int64)*(unsigned int *)(v14 + 64) >> 7) ^ v18) & 0xFFFFFFFFFFFFFFFBuLL;
    if ( *(_DWORD *)(v14 + 108) != 1 || (v19 = 0LL, (*(_DWORD *)(v14 + 64) & 0x40) != 0) )
      v19 = 1LL;
    v20 = v19 | *((_QWORD *)a4 + 13) & 0xFFFFFFFFFFFFFFFEuLL;
    *((_QWORD *)a4 + 13) = v20;
    v21 = ((unsigned __int64)*(unsigned int *)(v14 + 64) >> 20) ^ (v20 ^ ((unsigned __int64)*(unsigned int *)(v14 + 64) >> 20)) & 0xFFFFFFFFFFFFFFFDuLL;
    *((_QWORD *)a4 + 13) = v21;
    if ( *(_DWORD *)(v14 + 108) == 1 && (v22 = *(_DWORD *)(v14 + 64), (v22 & 4) == 0) )
    {
      if ( (v22 & 0x6000) != 0
        && *(unsigned int *)(v14 + 132) * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v14 + 512) + 68LL) >= *(_QWORD *)(v14 + 40) )
      {
        v15 = 1LL;
      }
    }
    else
    {
      v15 = 1LL;
    }
    v23 = (v15 << 8) | v21 & 0xFFFFFFFFFFFFFEFFuLL;
    *((_QWORD *)a4 + 13) = v23;
    v24 = ((__int64)*(int *)(v14 + 104) << 6) ^ (v23 ^ ((__int64)*(int *)(v14 + 104) << 6)) & 0xFFFFFFFFFFFFFF3FuLL;
    *((_QWORD *)a4 + 13) = v24;
    v25 = *(_DWORD *)(v14 + 64);
    if ( (v25 & 1) != 0 )
    {
      v26 = v24 & 0xFFFFFFFFFFFFFFC3uLL;
    }
    else if ( (v25 & 0x1000) != 0 )
    {
      v26 = v24 & 0xFFFFFFFFFFFFFFC3uLL | 8;
    }
    else
    {
      v26 = v24 & 0xFFFFFFFFFFFFFFC3uLL | 4;
    }
    *((_QWORD *)a4 + 13) = v26;
  }
  return 0LL;
}
