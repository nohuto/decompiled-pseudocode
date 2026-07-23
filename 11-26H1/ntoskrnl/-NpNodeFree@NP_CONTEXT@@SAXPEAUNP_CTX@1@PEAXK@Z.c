/*
 * XREFs of ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x1403EC6E8
 * Callers:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x14052684C (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 *     ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14063FFE8 (-NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall NP_CONTEXT::NpNodeFree(struct NP_CONTEXT::NP_CTX *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax

  if ( a3
    && (v3 = *(_QWORD *)a1,
        v4 = *(_QWORD **)(v3 + 72),
        --*(_DWORD *)(v3 + 40),
        *v4 < (unsigned __int64)*(unsigned int *)(v3 + 4)) )
  {
    *a2 = *v4 + 1LL;
    **(_QWORD **)(v3 + 72) = a2;
    *(_QWORD *)(v3 + 72) = a2;
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
