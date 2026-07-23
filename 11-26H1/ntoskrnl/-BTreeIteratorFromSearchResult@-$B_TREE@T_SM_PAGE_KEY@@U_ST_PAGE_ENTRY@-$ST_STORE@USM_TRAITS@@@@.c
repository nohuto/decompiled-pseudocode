/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EF10
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeSearchResultInit@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1404CA89C (-BTreeSearchResultInit@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

_OWORD *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // edx
  _OWORD *result; // rax
  _DWORD **v7; // rcx
  char *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // r9
  unsigned __int64 v12; // rax
  void **v13; // rcx
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  __int64 v20; // r8
  unsigned int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  __int128 v26; // [rsp+20h] [rbp+0h] BYREF
  __int128 v27; // [rsp+30h] [rbp+10h]
  __int64 v28; // [rsp+40h] [rbp+20h]

  v5 = *(_DWORD *)(a3 + 24);
  if ( v5 == -1 || !v5 )
    result = (_OWORD *)(a3 + 8);
  else
    result = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v5 - 1));
  v7 = (_DWORD **)(a1 + 16);
  *(_OWORD *)a2 = *result;
  if ( !a1 )
    v7 = 0LL;
  if ( **v7 != -1 )
  {
    if ( *(_QWORD *)a2 )
    {
      v8 = *(char **)a1;
      if ( *(_QWORD *)a2 != *(_QWORD *)a1 )
      {
        if ( v5 == -1 )
        {
          v14 = 0;
          v28 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          if ( v8 )
            v14 = (unsigned __int8)v8[2];
          v15 = 16LL * v14;
          v16 = v15 + 15;
          if ( v15 + 15 < v15 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
          v18 = alloca(v17);
          v19 = alloca(v17);
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultInit(
            &v26,
            2LL);
          v21 = *(_DWORD *)(v20 + 16);
          *(_QWORD *)&v26 = &v26;
          *((_QWORD *)&v27 + 1) = __PAIR64__(v14, v22);
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            (char **)a1,
            v21,
            (__int64)&v26);
          v23 = 2LL * (v14 - 2);
          v24 = *((_QWORD *)&v26 + 2 * v14 - 3);
          v25 = *((_QWORD *)&v26 + v23);
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
            (char **)a1,
            (__int64 *)&v26);
          v11 = (void **)(v24 - 8);
          if ( v24 <= v25 + 16 )
            v11 = (void **)(v25 + 8);
        }
        else
        {
          v9 = *((_QWORD *)result - 1);
          v10 = *((_QWORD *)result - 2);
          v11 = (void **)(v9 - 8);
          v12 = v10 + 16;
          v13 = (void **)(v10 + 8);
          if ( v9 <= v12 )
            v11 = v13;
        }
        result = *(_OWORD **)(a1 + 16);
        if ( *(_DWORD *)result != -1 )
          result = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v11, 3u);
      }
    }
  }
  *(_QWORD *)(a2 + 8) -= 8LL;
  return result;
}
