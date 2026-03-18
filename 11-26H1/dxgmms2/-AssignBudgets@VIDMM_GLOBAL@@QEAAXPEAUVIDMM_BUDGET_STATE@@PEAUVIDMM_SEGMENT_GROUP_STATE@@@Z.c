/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400C6448
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400C6224 (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1400C6B78 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400C6EF8 (-AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3)
{
  int v6; // r8d
  char *v7; // rdx
  char *v8; // rcx
  char *v9; // r9
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r8
  unsigned __int64 *v13; // rsi
  unsigned __int64 *v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int8 i; // bp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax

  if ( *((_BYTE *)a3 + 136) )
  {
    v12 = 0LL;
    v13 = (unsigned __int64 *)((char *)a3 + 240);
    v14 = (unsigned __int64 *)((char *)a3 + 240);
    v15 = 3LL;
    do
    {
      v16 = v14[3];
      v17 = *v14++;
      if ( v16 >= v17 )
        v16 = v17;
      v12 += v16;
      --v15;
    }
    while ( v15 );
    v18 = *((_QWORD *)a3 + 2) - v12;
    for ( i = 0; i < 3u; ++i )
    {
      v20 = v13[3];
      v21 = *v13;
      if ( *v13 > v20 )
      {
        v24 = v21 - v20;
        v23 = v20 + v18;
        if ( v24 >= v18 )
          v24 = v18;
        v18 -= v24;
      }
      else
      {
        v22 = v18 + v21;
        if ( v20 <= v22 )
          v20 = v22;
        v23 = v20;
      }
      LOBYTE(v15) = i;
      VIDMM_GLOBAL::AssignBudgetsWithinBand(this, a2, a3, v15, v23);
      ++v13;
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignMaximumBudgets(this, a2, a3);
  }
  v6 = 0;
  v7 = (char *)a3 + 192;
  do
  {
    v8 = *(char **)v7;
    v9 = (char *)a3 + 16 * v6 + 192;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v9 || (v10 = *(_QWORD *)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
LABEL_11:
      __fastfail(3u);
    *(_QWORD *)v7 = v10;
    *(_QWORD *)(v10 + 8) = v9;
    while ( v8 != v9 )
    {
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      v8 = *(char **)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v9 )
        goto LABEL_11;
      v11 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
        goto LABEL_11;
      *(_QWORD *)v7 = v11;
      *(_QWORD *)(v11 + 8) = (char *)a3 + 16 * v6 + 192;
    }
    ++v6;
    v7 += 16;
  }
  while ( v6 < 3 );
}
