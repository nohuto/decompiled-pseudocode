/*
 * XREFs of ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1401100A4
 * Callers:
 *     VidMmQueryProcessSegmentStatistics @ 0x14003E200 (VidMmQueryProcessSegmentStatistics.c)
 * Callees:
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x140110248 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a5)
{
  unsigned __int16 v6; // bx
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  int IsActive; // eax
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rcx

  v6 = a3;
  v7 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 1738) )
  {
    WdLogSingleEntry2(3LL, a2, *((unsigned int *)this + 1738));
    WdLogGlobalForLineNumber = 615;
    return 3221225485LL;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2);
  if ( a3 >= *(_DWORD *)(v8 + 136) )
    return 3221225485LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)a4 + 4) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
  if ( !v10 )
    return 3221225485LL;
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 304 * v7) + 184LL * v6;
  if ( !v11 )
    return 3221225485LL;
  v12 = 5LL;
  v13 = *(_QWORD **)(*(_QWORD *)(v8 + 1752) + 8LL * v6);
  v14 = (_QWORD *)((char *)a5 + 48);
  *((_DWORD *)a5 + 8) = *(_DWORD *)(v11 + 56);
  v15 = v11 - (_QWORD)a5;
  *((_QWORD *)a5 + 16) = *(_QWORD *)(v11 + 152);
  *((_DWORD *)a5 + 30) = *(_DWORD *)(v11 + 144);
  *((_QWORD *)a5 + 17) = *(_QWORD *)(v11 + 160);
  do
  {
    *v14 = *(_QWORD *)((char *)v14 + v15 + 24);
    *((_DWORD *)v14 - 2) = *(_DWORD *)((char *)v14 + v15 + 16);
    v14 += 2;
    --v12;
  }
  while ( v12 );
  if ( (*((_DWORD *)a4 + 34) & 1) != 0 )
  {
    v16 = v13[28];
    v9 = v13[29];
  }
  else
  {
    v21 = *((unsigned int *)a4 + 35);
    v22 = v13 + 5;
    if ( (_DWORD)v21 )
      v16 = 100LL * *v22 / v21;
    else
      v16 = 0LL;
    v23 = *((unsigned int *)a4 + 36);
    if ( (_DWORD)v23 )
      v9 = 100LL * *v22 / v23;
  }
  *((_QWORD *)a5 + 1) = v16;
  *((_QWORD *)a5 + 2) = v9;
  IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v11 + 168));
  *(_QWORD *)(v18 + 144) = IsActive;
  *(_QWORD *)v18 = *(_QWORD *)(v19 + 16);
  *(_DWORD *)(v18 + 24) = *(_DWORD *)(v19 + 180);
  return 0LL;
}
