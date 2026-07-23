/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020C608 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EF10 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14020EFE0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14027EAF0 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x140394E70 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC1D0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14042FA74 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14045A7F0 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x140527D08 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140534CDC (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r12
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // rbp
  unsigned __int64 *p_QuantumTarget; // rcx
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // r15d
  __int64 v12; // rcx
  _QWORD *v13; // r14
  char *v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rcx
  void **v17; // rcx
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // ebx
  unsigned int v23; // ebp
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r15
  int v27; // r9d
  int v28; // eax
  _QWORD *v29; // rcx
  __int64 v30; // rbp
  __int16 v31; // ax
  __int16 v32; // ax
  unsigned int v33; // r14d
  unsigned int v34; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 LeafSibling; // rax
  int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // [rsp+40h] [rbp-88h]
  unsigned int v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+50h] [rbp-78h]
  unsigned __int64 *v44; // [rsp+60h] [rbp-68h]
  _OWORD v45[6]; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+E0h] [rbp+18h]
  int v49; // [rsp+E8h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a1 + 24;
  p_QuantumTarget = 0LL;
  if ( (BYTE4(stru_140E27C48.InitialStack) & 0x10) != 0 )
    p_QuantumTarget = &stru_140E27C48.QuantumTarget;
  v43 = v5;
  v44 = p_QuantumTarget;
  v7 = a2[3] + a2[2] - 1;
  v42 = v7;
  v45[0] = 0LL;
  if ( (v4 & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v3,
      v5);
  *(_DWORD *)(v5 + 32) &= ~1u;
  if ( (*(_DWORD *)(v3 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      v3 + 64,
      v3 + 88);
  *(_DWORD *)(v3 + 120) &= ~1u;
  v8 = 0;
  v48 = 0;
  v49 = 0;
  while ( 1 )
  {
    v9 = v2[2];
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v3,
      v5);
    if ( *(_DWORD *)(v5 + 24) == -1 )
    {
      v11 = 0;
      v13 = (_QWORD *)(v5 + 8);
    }
    else
    {
      v11 = 1;
      if ( *(_QWORD *)v3 )
        v12 = *(unsigned __int8 *)(*(_QWORD *)v3 + 2LL);
      else
        v12 = 0LL;
      if ( *(_DWORD *)(v5 + 28) < (unsigned int)v12 && !(unsigned int)SmArrayGrow(v12, v10, v5 + 28, v5) )
        goto LABEL_35;
      v13 = *(_QWORD **)v5;
    }
    v14 = *(char **)v3;
    if ( *(_QWORD *)v3 )
    {
      while ( 1 )
      {
        v15 = -1;
        v16 = (unsigned __int16)*(_DWORD *)v14;
        if ( HIBYTE(*(_DWORD *)v14) )
        {
          if ( (unsigned __int16)*(_DWORD *)v14 )
          {
            do
            {
              if ( *(_DWORD *)&v14[8 * (((unsigned int)v16 + v15) >> 1) + 16] < v9 )
                v15 = ((unsigned int)v16 + v15) >> 1;
              else
                v16 = ((unsigned int)v16 + v15) >> 1;
            }
            while ( v15 + 1 != (_DWORD)v16 );
          }
        }
        else if ( (unsigned __int16)*(_DWORD *)v14 )
        {
          do
          {
            if ( *(_DWORD *)&v14[16 * (((unsigned int)v16 + v15) >> 1) + 16] > v9 )
              v16 = ((unsigned int)v16 + v15) >> 1;
            else
              v15 = ((unsigned int)v16 + v15) >> 1;
          }
          while ( v15 + 1 != (_DWORD)v16 );
        }
        if ( v14[3] )
          break;
        if ( v11 )
        {
          *v13 = v14;
          v13[1] = &v14[16 * (unsigned int)v16 + 16];
          v13 += 2;
        }
        if ( (_DWORD)v16 )
          v17 = (void **)&v14[16 * (unsigned int)(v16 - 1) + 24];
        else
          v17 = (void **)(v14 + 8);
        if ( **(_DWORD **)(v3 + 16) == -1 || v14[2] != 2 )
        {
          v14 = (char *)*v17;
        }
        else
        {
          v14 = (char *)NP_CONTEXT::NpLeafRefInternal(
                          (struct NP_CONTEXT::NP_CTX *)(v3 + 16),
                          v17,
                          2 * (*(_BYTE *)(v5 + 32) & 1u));
          if ( !v14 )
            goto LABEL_35;
        }
      }
      *v13 = v14;
      v13[1] = &v14[8 * v16 + 16];
      if ( v11 )
        *(_DWORD *)(v5 + 24) = (((__int64)v13 - *(_QWORD *)v5) >> 4) + 1;
    }
    else if ( !v11 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
    }
LABEL_35:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v3,
      v45,
      v5);
    v18 = *(_QWORD *)&v45[0];
    if ( !*(_QWORD *)&v45[0] )
      goto LABEL_61;
    v19 = *((_QWORD *)&v45[0] + 1) + 8LL;
    v20 = (unsigned __int16)**(_DWORD **)&v45[0] + 2LL;
    *((_QWORD *)&v45[0] + 1) = v19;
    if ( v19 >= *(_QWORD *)&v45[0] + 8 * v20 )
    {
      if ( **(_DWORD **)(a1 + 16) == -1 )
      {
        LeafSibling = *(_QWORD *)(*(_QWORD *)&v45[0] + 8LL);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        *(_QWORD *)&v45[0]);
        if ( LeafSibling == -1 )
        {
          v21 = -1LL;
          goto LABEL_38;
        }
      }
      if ( !LeafSibling )
      {
        v21 = 0LL;
        goto LABEL_38;
      }
      v19 = LeafSibling + 16;
      *(_QWORD *)&v45[0] = LeafSibling;
      *((_QWORD *)&v45[0] + 1) = LeafSibling + 16;
      v18 = LeafSibling;
    }
    v21 = v19;
LABEL_38:
    if ( !v21 )
      break;
    v22 = *(_DWORD *)v21;
    if ( v7 < *(_DWORD *)v21 )
      break;
    v23 = *(_DWORD *)(v21 + 4);
    v24 = v23 >> *(_DWORD *)(a1 + 456);
    _BitScanReverse((unsigned int *)&v25, v24);
    v26 = *(unsigned int *)(a1 + 472)
        + *(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & v23)
        + *(_QWORD *)(*(_QWORD *)(a1 + 192 + 8 * v25) + 16 * (v24 ^ (unsigned int)(1 << v25)));
    if ( *(_DWORD *)v26 == -1 )
    {
      do
      {
        v23 = *(_DWORD *)(v26 + 8);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v26);
        SmHpChunkFree(a1 + 192, v26);
        --*(_DWORD *)(a1 + 2056);
        v36 = v23 >> *(_DWORD *)(a1 + 456);
        _BitScanReverse((unsigned int *)&v37, v36);
        v26 = *(unsigned int *)(a1 + 472)
            + *(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & v23)
            + *(_QWORD *)(*(_QWORD *)(a1 + 192 + 8 * v37) + 16 * (v36 ^ (unsigned int)(1 << v37)));
      }
      while ( *(_DWORD *)v26 == -1 );
      v7 = v42;
      v18 = *(_QWORD *)&v45[0];
    }
    v41 = *(_DWORD *)(v21 + 4);
    if ( v41 != v23 )
    {
      *(_DWORD *)(v21 + 4) = v23;
      v41 = v23;
    }
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v26);
    if ( v44 )
      SmEtwLogStoreOp((_DWORD)v44, 1, v21, v27, *(_DWORD *)v26, a1, 0, 0);
    v28 = *(_DWORD *)(a1 + 48);
    v29 = (_QWORD *)(a1 + 24);
    if ( v28 == -1 || !v28 )
      v30 = a1 + 32;
    else
      v30 = *v29 + 16LL * (unsigned int)(v28 - 1);
    if ( *(_QWORD *)v30 == v18 )
    {
      *(_QWORD *)(v30 + 8) = v19;
      v5 = v43;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        a1,
        v29);
      if ( *(_DWORD *)(a1 + 48) == -1 )
      {
        *(_OWORD *)v30 = v45[0];
        v5 = v43;
      }
      else
      {
        v5 = a1 + 24;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          a1,
          *(unsigned int *)(v18 + 16),
          a1 + 24);
        v39 = *(_DWORD *)(a1 + 48);
        if ( v39 == -1 || !v39 )
          v40 = a1 + 32;
        else
          v40 = *(_QWORD *)v5 + 16LL * (unsigned int)(v39 - 1);
        *(_QWORD *)(v40 + 8) = v19;
      }
    }
    v3 = a1;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v45,
      a1);
    v45[0] = 0LL;
    if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
                a1,
                v5) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    if ( (*(_DWORD *)(a1 + 776) & 0x100000) == 0 )
      goto LABEL_100;
    v31 = *(_WORD *)(v26 + 6);
    if ( !v31 )
      NT_ASSERT("PageRecordEx->RefCount > 0");
    v2 = a2;
    v32 = v31 - 1;
    *(_WORD *)(v26 + 6) = v32;
    if ( !v32 )
    {
LABEL_100:
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                  a1 + 64,
                  v41,
                  a1 + 88) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v26, a1 + 88);
      SmHpChunkFree(a1 + 192, v26);
      v2 = a2;
      if ( (a2[4] & 1) != 0 )
      {
        v33 = v48;
        if ( !v48 )
          goto LABEL_57;
        if ( v22 - v8 != v48 )
        {
          SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(a1 + 792));
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 3200LL), &v49, v48);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 792));
          v33 = 0;
LABEL_57:
          v8 = v22;
          v49 = v22;
        }
        v48 = v33 + 1;
      }
    }
  }
  v3 = a1;
LABEL_61:
  if ( v48 )
  {
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(v3 + 792));
    SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(v3 + 792) + 3200LL), &v49, v48);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v3 + 792));
  }
  if ( (*(_BYTE *)(v3 + 2060) & 3) != 3 )
  {
    v34 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(v3, 0LL, 0LL);
    if ( v34 )
      ST_STORE<SM_TRAITS>::StQueueCompaction(v3, v34);
  }
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
           v45,
           v3);
}
