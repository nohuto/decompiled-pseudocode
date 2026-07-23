/*
 * XREFs of ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14045A7F0
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406416A8 (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140393E24 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeSearchResultInit@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1404CA89C (-BTreeSearchResultInit@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
        char **a1)
{
  __int64 LeafSibling; // rbx
  char *v2; // rax
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  void **v14; // rsi
  unsigned __int64 v15; // rcx
  void **v16; // rax
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  __int128 v19; // [rsp+20h] [rbp+0h] BYREF
  __int128 v20; // [rsp+30h] [rbp+10h]
  __int64 v21; // [rsp+40h] [rbp+20h]

  v21 = 0LL;
  LeafSibling = 0LL;
  v2 = *a1;
  v19 = 0LL;
  v20 = 0LL;
  if ( v2 )
  {
    v4 = (unsigned __int8)v2[2];
    if ( v4 == 1 )
      return LeafSibling;
  }
  else
  {
    v4 = 0;
  }
  v5 = 16LL * v4;
  v6 = v5 + 15;
  if ( v5 + 15 < v5 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = alloca(v7);
  v9 = alloca(v7);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultInit(
    &v19,
    2LL);
  v11 = *(_DWORD *)(v10 + 16);
  *(_QWORD *)&v19 = &v19;
  DWORD2(v20) = 0;
  HIDWORD(v20) = v4;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1,
    v11,
    (__int64)&v19);
  v12 = *((_QWORD *)&v19 + 2 * v4 - 3);
  v13 = *((_QWORD *)&v19 + 2 * v4 - 4);
  v14 = (void **)(v12 - 8);
  v15 = v13 + 16;
  v16 = (void **)(v13 + 8);
  if ( v12 <= v15 )
    v14 = v16;
  LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSiblingEx(
                  (__int64)a1,
                  (__int64 *)&v19);
  if ( v14 )
  {
    v17 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
    if ( **(_DWORD **)v17 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v17, v14);
  }
  return LeafSibling;
}
