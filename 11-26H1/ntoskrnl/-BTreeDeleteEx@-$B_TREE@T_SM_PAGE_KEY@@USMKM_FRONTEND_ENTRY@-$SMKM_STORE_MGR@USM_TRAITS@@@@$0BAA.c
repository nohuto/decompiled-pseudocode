/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027F960
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027F390 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14027F890 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1404B06D8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1404859D0 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1404B06D8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v5; // rdi
  _DWORD *v6; // r14
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // esi
  __int64 v11; // rax
  size_t v12; // rbp
  _DWORD *v13; // r8
  _QWORD *i; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = (_DWORD *)*v5;
  v7 = (char *)v5[1];
  v8 = *(_DWORD *)*v5;
  if ( *(_BYTE *)(*v5 + 3) )
  {
    v9 = 8LL * (unsigned __int16)v8 + 8;
    v10 = 255;
    v11 = 8LL;
  }
  else
  {
    v10 = 127;
    v9 = 16LL * (unsigned __int16)v8;
    v11 = 16LL;
  }
  v25 = v10;
  v12 = (size_t)v6 + v9 - (_QWORD)v7;
  if ( v12 )
    memmove(v7, &v7[v11], v12);
  --*(_WORD *)v6;
  if ( *((_BYTE *)v6 + 3) )
    --a1[1];
  if ( (_DWORD *)*a1 == v6 )
  {
    if ( !(unsigned __int16)*v6 && !*((_BYTE *)v6 + 3) )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      *a1 = *((_QWORD *)v6 + 1);
      ExFreePoolWithTag(v6, 0);
    }
    return v2;
  }
  if ( (unsigned __int16)*v6 < v10 )
  {
    v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v7,
            a2);
    if ( !v17 )
      return (unsigned int)-1073741818;
    v18 = (unsigned __int16)*v6;
    if ( v18 >= v25 )
    {
      if ( (v17 & 1) == 0 )
        goto LABEL_9;
      v23 = v5[1];
      v24 = v18 - v25 + 1;
      if ( *((_BYTE *)v6 + 3) )
        v22 = v23 + 8 * v24;
      else
        v22 = v23 + 16 * v24;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v17);
      v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      if ( (v17 & 1) == 0 )
        goto LABEL_9;
      v19 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      *v5 = v19;
      v20 = (unsigned __int16)*(_DWORD *)v19;
      if ( *(_BYTE *)(v19 + 3) )
        v21 = 8 * v20 + 16;
      else
        v21 = 16 * (v20 + 1);
      v22 = v19 + v21 - v12;
    }
    v5[1] = v22;
  }
LABEL_9:
  v13 = (_DWORD *)v5[1];
  if ( v13 == (_DWORD *)(*v5 + 16) && *(_BYTE *)(*v5 + 3) )
  {
    for ( i = (_QWORD *)(*(_QWORD *)a2 + 16 * (*(unsigned int *)(a2 + 24) - 2LL));
          (unsigned __int64)i >= *(_QWORD *)a2;
          i -= 2 )
    {
      v16 = i[1];
      if ( v16 > *i + 16LL )
      {
        *(_DWORD *)(v16 - 16) = *v13;
        return v2;
      }
    }
  }
  return v2;
}
