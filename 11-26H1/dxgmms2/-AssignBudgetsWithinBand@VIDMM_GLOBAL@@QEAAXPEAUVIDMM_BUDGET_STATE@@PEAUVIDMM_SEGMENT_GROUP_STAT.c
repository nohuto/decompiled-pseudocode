/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1400C6B78
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400C6448 (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400C6FFC (-AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        unsigned __int8 a4,
        unsigned __int64 a5)
{
  __int64 v6; // rdi
  unsigned int v7; // r12d
  int *v8; // r9
  int *v9; // r10
  int *v10; // r11
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r13
  unsigned int *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  int *v22; // rdx
  int **v23; // r11
  __int64 v24; // r14
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdx
  int **v27; // rax
  int *v28; // rcx
  int **v29; // rax
  unsigned __int64 v30; // rcx
  int *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // r10
  __int64 v34; // rdx
  __int64 v35; // r11
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 *v42; // rdx
  unsigned __int64 v43; // rax
  int *v44; // rsi
  int *v45; // rdi
  VIDMM_GLOBAL *v46; // r14
  unsigned __int64 *v47; // rdx
  __int64 v48; // r10
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  int *v52; // rdx
  int **v53; // rcx
  int *v54; // rdx
  __int64 v55; // rax
  int *v56; // rcx
  unsigned __int64 v57; // [rsp+38h] [rbp-49h]
  struct VIDMM_BUDGET_STATE *v58; // [rsp+40h] [rbp-41h]
  unsigned __int64 v59; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v60[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v61; // [rsp+60h] [rbp-21h]
  VIDMM_GLOBAL *v62; // [rsp+68h] [rbp-19h]
  __int128 v63; // [rsp+70h] [rbp-11h]
  __int64 v64; // [rsp+80h] [rbp-1h]

  v58 = a2;
  v6 = a4;
  v62 = a1;
  v7 = a3[a4 + 81];
  if ( v7 )
  {
    v8 = &a3[4 * a4 + 36];
    v64 = 0LL;
    v63 = 0LL;
    v9 = *(int **)v8;
    v10 = *(int **)v8;
    if ( *(int **)v8 != v8 )
    {
      v11 = *a3;
      v12 = 304LL * *(unsigned __int16 *)a2;
      do
      {
        v13 = *((_QWORD *)v10 - 8);
        v14 = *((unsigned __int8 *)v10 + 104);
        v10 = *(int **)v10;
        v15 = v13 + 8 * v11;
        v16 = *((_QWORD *)&v63 + v14);
        if ( v16 <= *(_QWORD *)(v15 + v12 + 192) )
          v16 = *(_QWORD *)(v15 + v12 + 192);
        *((_QWORD *)&v63 + v14) = v16;
      }
      while ( v10 != v8 );
    }
    v17 = a5;
    v18 = dword_1400604E0;
    v59 = -1LL;
    v60[0] = -1LL;
    v60[1] = -1LL;
    v19 = 3LL;
    while ( 1 )
    {
      v20 = 0LL;
      v21 = v17 / v7;
      v57 = v21;
      if ( v9 == v8 )
        break;
      do
      {
        v22 = v9;
        v23 = (int **)v9;
        v9 = *(int **)v9;
        v24 = (unsigned int)dword_1400604E0[*((unsigned __int8 *)v22 + 104)];
        v61 = v24;
        v25 = v21 * v24;
        v26 = *(_QWORD *)(*((_QWORD *)v22 - 8) + 8 * (*a3 + 38LL * *(unsigned __int16 *)v58) + 192);
        if ( v26 <= v25 )
        {
          v7 -= v61;
          v20 += v25 - v26;
          v17 -= v26;
          if ( *((int ***)v9 + 1) != v23 )
            goto LABEL_13;
          v27 = (int **)v23[1];
          if ( *v27 != (int *)v23 )
            goto LABEL_13;
          *v27 = v9;
          v28 = &a3[4 * v6 + 48];
          *((_QWORD *)v9 + 1) = v27;
          v29 = (int **)*((_QWORD *)v28 + 1);
          if ( *v29 != v28 )
            goto LABEL_13;
          *v23 = v28;
          v23[1] = (int *)v29;
          *v29 = (int *)v23;
          *((_QWORD *)v28 + 1) = v23;
        }
        v21 = v57;
      }
      while ( v9 != v8 );
      if ( !v20 )
        break;
      v33 = dword_1400604E0;
      v34 = 0LL;
      v35 = 3LL;
      do
      {
        v36 = *(_QWORD *)((char *)&v63 + v34);
        v34 += 8LL;
        v37 = *v33++;
        v38 = v57 * v37;
        if ( v36 >= v38 )
          v36 = v38;
        *(struct VIDMM_BUDGET_STATE **)((char *)&v58 + v34) = (struct VIDMM_BUDGET_STATE *)(v20 + v36);
        --v35;
      }
      while ( v35 );
      v9 = *(int **)v8;
      if ( *(int **)v8 == v8 )
        goto LABEL_27;
    }
    v47 = &v59;
    v48 = 3LL;
    do
    {
      v49 = *v18++;
      v50 = v21 * v49;
      v51 = *v47;
      if ( *v47 >= v50 )
        v51 = v50;
      *v47++ = v51;
      v21 = v57;
      --v48;
    }
    while ( v48 );
    if ( *(int **)v8 != v8 )
    {
      v52 = &a3[4 * v6 + 48];
      v53 = (int **)*((_QWORD *)v52 + 1);
      if ( *(int **)(*(_QWORD *)v52 + 8LL) != v52
        || *v53 != v52
        || *(int **)(*(_QWORD *)v8 + 8LL) != v8
        || **((int ***)v8 + 1) != v8
        || (*v53 = v8,
            *((_QWORD *)v52 + 1) = *((_QWORD *)v8 + 1),
            **((_QWORD **)v8 + 1) = v52,
            v54 = &a3[4 * v6 + 36],
            *((_QWORD *)v8 + 1) = v53,
            v55 = *(_QWORD *)v54,
            *(int **)(*(_QWORD *)v54 + 8LL) != v54)
        || *v53 != v54 )
      {
LABEL_13:
        __fastfail(3u);
      }
      *v53 = (int *)v55;
      *(_QWORD *)(v55 + 8) = v53;
      v56 = &a3[4 * v6 + 36];
      *((_QWORD *)v8 + 1) = v56;
      *(_QWORD *)v56 = v56;
    }
LABEL_27:
    v39 = v60;
    v40 = 2LL;
    do
    {
      v41 = *(v39 - 1);
      if ( v41 > *v39 )
        *v39 = v41;
      ++v39;
      --v40;
    }
    while ( v40 );
    v42 = &v59;
    do
    {
      v43 = *v42;
      if ( *v42 >= *((_QWORD *)a3 + 4) )
        v43 = *((_QWORD *)a3 + 4);
      *(unsigned __int64 *)((char *)v42++ + (_QWORD)a3 + 24 * ((unsigned __int8)v6 + 2LL) - (_QWORD)&v59) = v43;
      --v19;
    }
    while ( v19 );
    v44 = &a3[4 * (unsigned __int8)v6 + 48];
    v45 = *(int **)v44;
    if ( *(int **)v44 != v44 )
    {
      v46 = v62;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v46,
          v58,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v45 - 18),
          v60[*((unsigned __int8 *)v45 + 104) - 1]);
        v45 = *(int **)v45;
      }
      while ( v45 != v44 );
    }
  }
  else
  {
    v30 = a5;
    if ( a5 >= *((_QWORD *)a3 + 4) )
      v30 = *((_QWORD *)a3 + 4);
    v31 = &a3[6 * a4 + 12];
    v32 = 3LL;
    do
    {
      *(_QWORD *)v31 = v30;
      v31 += 2;
      --v32;
    }
    while ( v32 );
  }
}
