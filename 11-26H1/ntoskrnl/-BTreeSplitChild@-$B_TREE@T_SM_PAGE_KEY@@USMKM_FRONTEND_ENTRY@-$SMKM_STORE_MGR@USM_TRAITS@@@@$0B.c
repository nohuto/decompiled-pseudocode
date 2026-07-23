/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1404AE178
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14027FE34 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14027FE34 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1404AE360 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rax
  int v10; // r13d
  int *v11; // rdx
  int v12; // eax
  int *v13; // rbp
  void *v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v22 = 0LL;
  v4 = 0LL;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
  v6 = *v5;
  v7 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v5 + 3),
         *(unsigned __int8 *)(*v5 + 2));
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return (_QWORD *)v4;
  *((_QWORD *)&v22 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  v10 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v11 = (int *)(v6 + 16 + 8 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v11 + 2) < v5[1] )
    {
      v11 += 2;
      ++v10;
    }
    v12 = *v11;
    v13 = 0LL;
  }
  else
  {
    v11 = 0LL;
    v13 = (int *)(v6 + 16 * (v9 + 1));
    v12 = *v13;
  }
  LODWORD(v22) = v12;
  v14 = v8 + 2;
  v15 = (unsigned __int16)*(_DWORD *)v6 - v10;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v8[1] = *(_QWORD *)(v6 + 8);
    memmove(v14, v11, 8LL * v15);
  }
  else
  {
    memmove(v14, v13 + 4, 16LL * --v15);
    v8[1] = *((_QWORD *)v13 + 1);
  }
  *(_WORD *)v8 = v15;
  if ( *a1 == v6 )
  {
    v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v16,
            0LL,
            (unsigned int)*(unsigned __int8 *)(v6 + 2) + 1);
    v20 = v19;
    if ( v19 )
    {
      v21 = v19 + 16;
      *(_QWORD *)(v19 + 8) = v6;
      *(_OWORD *)(v19 + 16) = v22;
      *(_WORD *)v19 = 1;
      *a1 = v19;
      memmove(v5 + 2, v5, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *v5 = v20;
      v5[1] = v21;
      ++*(_DWORD *)(a2 + 24);
      goto LABEL_9;
    }
LABEL_16:
    ExFreePoolWithTag(v8, 0);
    return (_QWORD *)v4;
  }
  --*(_DWORD *)(a2 + 24);
  v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          a1,
          (unsigned int ***)a2,
          &v22);
  ++*(_DWORD *)(a2 + 24);
  if ( v17 < 0 )
    goto LABEL_16;
LABEL_9:
  *(_WORD *)v6 = v10;
  if ( *(_BYTE *)(v6 + 3) )
    *(_QWORD *)(v6 + 8) = v8;
  return v8;
}
