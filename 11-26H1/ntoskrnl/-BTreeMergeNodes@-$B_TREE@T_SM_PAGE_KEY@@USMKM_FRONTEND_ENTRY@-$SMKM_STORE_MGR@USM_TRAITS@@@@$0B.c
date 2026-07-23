/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1404B06D8
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027F960 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027F960 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // rax
  size_t v12; // r8
  void *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v5 = (_QWORD *)a3;
  v6 = 2LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v7 = *(_QWORD *)a2;
  if ( (a3 & 1) != 0 )
    v5 = *(_QWORD **)(*(_QWORD *)a2 + 8 * v6);
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v6);
    v8 = a3;
  }
  v10 = (unsigned __int16)*(_DWORD *)v9;
  v11 = *(_DWORD **)(v7 + 8 * v6 - 8);
  if ( v9 == v8 )
  {
    v11 -= 4;
    *(_QWORD *)(v7 + 8 * v6 - 8) = v11;
  }
  if ( *(_BYTE *)(v9 + 3) )
  {
    *(_QWORD *)(v9 + 8) = v5[1];
    v12 = 8LL * (unsigned __int16)*(_DWORD *)v5;
    v13 = (void *)(v9 + 8 * (v10 + 2));
  }
  else
  {
    v15 = 2 * v10;
    LODWORD(v10) = v10 + 1;
    *(_DWORD *)(v9 + 8 * v15 + 16) = *v11;
    *(_QWORD *)(v9 + 8 * v15 + 24) = v5[1];
    v12 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v13 = (void *)(v9 + 16 * ((unsigned int)v10 + 1LL));
  }
  memmove(v13, v5 + 2, v12);
  *(_WORD *)v9 = *(_WORD *)v5 + v10;
  ExFreePoolWithTag(v5, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
