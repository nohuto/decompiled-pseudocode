/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400C65A8
 * Callers:
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400C60A4 (-RecalculateBudget@VIDMM_GLOBAL@@QEAA_NXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1400C6A24 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400C6A48 (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_BUDGET_STATE *a3)
{
  int v3; // r15d
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct _RTL_BALANCED_NODE *v11; // rax
  _QWORD *Children; // rbx
  __int64 v13; // r14
  struct _KTHREAD **v14; // rbx
  _QWORD *v15; // rdi
  VIDMM_PROCESS *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r10
  __int64 v21; // r9
  _QWORD *v22; // rdi
  __int64 v23; // r11
  __int64 v24; // rcx
  int v25; // ebp
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  struct _RTL_BALANCED_NODE *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rsi
  _QWORD **v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // r14
  _QWORD **v36; // rcx
  _QWORD *v37; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  int v40; // edx
  __int64 v41; // rax
  _BYTE v42[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v43; // [rsp+80h] [rbp+8h]
  __int64 v44; // [rsp+88h] [rbp+10h]
  struct VIDMM_PHYSICAL_ADAPTER *v45; // [rsp+98h] [rbp+20h]

  *(_WORD *)a2 = (_WORD)a3;
  v3 = 0;
  v44 = (unsigned __int16)a3;
  v45 = *(struct VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5040) + 8LL * (unsigned __int16)a3);
  v43 = (*((_BYTE *)v45 + 558) & 1) + 1LL;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * *(unsigned __int16 *)a2);
    if ( (*(_BYTE *)(v8 + v7 + 632) & 1) != 0 )
    {
      v11 = VIDMM_PARTITION::_PartitionTree;
      Children = 0LL;
      while ( v11 )
      {
        Children = v11->Children;
        v11 = v11->Children[0];
      }
      while ( Children )
      {
        v31 = 3LL;
        v32 = 344LL * *(unsigned __int16 *)a2
            + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + Children[5] + 24);
        do
        {
          memset((void *)(v32 + 240), 0, 0x60uLL);
          --v31;
        }
        while ( v31 );
        v33 = (_QWORD **)Children[1];
        v34 = Children;
        if ( v33 )
        {
          Children = (_QWORD *)Children[1];
          for ( i = *v33; i; i = (_QWORD *)*i )
            Children = i;
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v34 )
              break;
            v34 = Children;
          }
        }
      }
    }
    else
    {
      v9 = 3LL;
      v10 = v8 + 344LL * v3;
      do
      {
        memset((void *)(v10 + 904), 0, 0x60uLL);
        --v9;
      }
      while ( v9 );
    }
    ++v3;
    ++v6;
    v7 += 24LL;
  }
  while ( v6 < v43 );
  v13 = v44;
  v14 = (struct _KTHREAD **)*((_QWORD *)this + 5158);
  if ( v14 != (struct _KTHREAD **)((char *)this + 41264) )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)((char *)*(v14 - 4) + 304 * v44 + 8);
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v42, v14 + 13);
      v15[23] = v15[17];
      v15[24] = v15[18];
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
      v15[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v15);
      v16 = *(v14 - 3);
      v17 = *((_QWORD *)v16 + 9);
      if ( v17 )
      {
        if ( v16 != g_pVidMmSystemProcess )
          break;
      }
LABEL_27:
      v14 = (struct _KTHREAD **)*v14;
      if ( v14 == (struct _KTHREAD **)((char *)this + 41264) )
        goto LABEL_28;
    }
    if ( (*(_DWORD *)(v17 + 408) & 4) != 0 )
    {
      *((_BYTE *)v14 + 138) = 0;
    }
    else
    {
      v40 = *(_DWORD *)(v17 + 416);
      if ( (v40 & 1) == 0 )
      {
        v41 = *(_QWORD *)(v17 + 64);
        if ( !v41 || *(_DWORD *)(v41 + 140) )
        {
          *((_BYTE *)v14 + 138) = 2;
          *((_BYTE *)v14 + 136) = ((v40 & 2) != 0) + 1;
          goto LABEL_17;
        }
      }
      *((_BYTE *)v14 + 138) = 1;
    }
    *((_BYTE *)v14 + 136) = 0;
LABEL_17:
    v18 = *v15;
    if ( *v15 )
    {
      if ( *(_QWORD **)(v18 + 8) != v15 || (v19 = (_QWORD *)v15[1], (_QWORD *)*v19 != v15) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v15 = 0LL;
      v15[1] = 0LL;
    }
    v20 = 0LL;
    v21 = 0LL;
    v22 = v15 + 7;
    v23 = 2LL;
    do
    {
      v24 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v44);
      if ( (*(_BYTE *)(v20 + v24 + 632) & 1) != 0 )
        a3 = (struct VIDMM_BUDGET_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                     + *(_QWORD *)(*((_QWORD *)*(v14 - 3) + 42) + 40LL)
                                                     + 24)
                                         + 344 * v44);
      else
        a3 = (struct VIDMM_BUDGET_STATE *)(v24 + v21 + 664);
      *((_QWORD *)a3 + *((unsigned __int8 *)v14 + 138) + 30) += v22[16];
      if ( *v22 )
      {
        *((_QWORD *)a3 + *((unsigned __int8 *)v14 + 138) + 36) += *v22;
        ++*((_DWORD *)a3 + *((unsigned __int8 *)v14 + 138) + 78);
      }
      v21 += 344LL;
      ++v22;
      v20 += 24LL;
      --v23;
    }
    while ( v23 );
    goto LABEL_27;
  }
LABEL_28:
  v25 = 0;
  if ( v43 )
  {
    v26 = 0LL;
    v27 = 0LL;
    do
    {
      v28 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v13);
      if ( (*(_BYTE *)(v27 + v28 + 632) & 1) != 0 )
      {
        v29 = VIDMM_PARTITION::_PartitionTree;
        v30 = 0LL;
        while ( v29 )
        {
          v30 = v29->Children;
          v29 = v29->Children[0];
        }
        if ( v30 )
        {
          v35 = 344 * v13;
          do
          {
            VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
              this,
              v45,
              a3,
              (struct VIDMM_SEGMENT_GROUP_STATE *)(v35
                                                 + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                             + v30[5]
                                                             + 24)));
            v36 = (_QWORD **)v30[1];
            v37 = v30;
            if ( v36 )
            {
              v30 = (_QWORD *)v30[1];
              for ( j = *v36; j; j = (_QWORD *)*j )
                v30 = j;
            }
            else
            {
              while ( 1 )
              {
                v30 = (_QWORD *)(v30[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v30 || (_QWORD *)*v30 == v37 )
                  break;
                v37 = v30;
              }
            }
          }
          while ( v30 );
          v13 = v44;
        }
      }
      else
      {
        VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
          this,
          v45,
          a3,
          (struct VIDMM_SEGMENT_GROUP_STATE *)(v28 + 664 + 344LL * v25));
      }
      ++v25;
      ++v26;
      v27 += 24LL;
    }
    while ( v26 < v43 );
  }
}
