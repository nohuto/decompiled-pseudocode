/*
 * XREFs of ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14027F890
 * Callers:
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x14027E230 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14027E700 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1403EA860 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14050741C (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027F960 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB6C0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  int v5; // ecx
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  int v11; // eax
  __int128 v12; // xmm0

  v3 = a1 + 288;
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 == -1 || !v5 )
  {
    v8 = a2 + 8;
    v7 = (_QWORD *)(a2 + 8);
  }
  else
  {
    v7 = (_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)a2 + 16LL * (unsigned int)(v5 - 1);
  }
  v9 = *a3;
  if ( *(_QWORD *)v8 == *a3 )
  {
    *(_QWORD *)(v8 + 8) = a3[1];
  }
  else if ( v5 == -1 )
  {
    v12 = *(_OWORD *)a3;
    *v7 = 0LL;
    *(_OWORD *)v8 = v12;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = 0;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v3,
      *(unsigned int *)(v9 + 16),
      a2);
    v11 = *(_DWORD *)(a2 + 24);
    if ( v11 != -1 && v11 )
      v7 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v11 - 1));
    v7[1] = a3[1];
  }
  return B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
           v3,
           a2);
}
