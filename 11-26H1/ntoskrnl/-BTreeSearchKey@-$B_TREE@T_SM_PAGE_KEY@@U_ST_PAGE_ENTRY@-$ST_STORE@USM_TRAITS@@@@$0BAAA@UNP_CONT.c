/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EF10 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14020EFE0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14045A7F0 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  char *v10; // r9
  unsigned int v11; // edx
  unsigned int v12; // ecx
  void **v13; // rcx
  char *v14; // r10

  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v7 = 0;
    v9 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v7 = 1;
    if ( *a1 )
      v8 = (unsigned __int8)(*a1)[2];
    else
      v8 = 0LL;
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, v6, a3 + 28, a3) )
      return 3221225626LL;
    v9 = *(_QWORD **)a3;
  }
  v10 = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v11 = -1;
      v12 = (unsigned __int16)*(_DWORD *)v10;
      if ( HIBYTE(*(_DWORD *)v10) )
      {
        if ( (unsigned __int16)*(_DWORD *)v10 )
        {
          do
          {
            if ( *(_DWORD *)&v10[8 * ((v12 + v11) >> 1) + 16] >= a2 )
              v12 = (v12 + v11) >> 1;
            else
              v11 = (v12 + v11) >> 1;
          }
          while ( v11 + 1 != v12 );
        }
      }
      else if ( (unsigned __int16)*(_DWORD *)v10 )
      {
        do
        {
          if ( *(_DWORD *)&v10[16 * ((v12 + v11) >> 1) + 16] > a2 )
            v12 = (v12 + v11) >> 1;
          else
            v11 = (v12 + v11) >> 1;
        }
        while ( v11 + 1 != v12 );
      }
      if ( v10[3] )
        break;
      if ( v7 )
      {
        *v9 = v10;
        v9[1] = &v10[16 * v12 + 16];
        v9 += 2;
      }
      if ( v12 )
        v13 = (void **)&v10[16 * v12 + 8];
      else
        v13 = (void **)(v10 + 8);
      if ( *(_DWORD *)a1[2] == -1 || v10[2] != 2 )
      {
        v10 = (char *)*v13;
      }
      else
      {
        v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                        (struct NP_CONTEXT::NP_CTX *)(a1 + 2),
                        v13,
                        2 * (*(_BYTE *)(a3 + 32) & 1u));
        if ( !v10 )
          return 3221225478LL;
      }
    }
    *v9 = v10;
    v14 = &v10[8 * v12 + 16];
    v9[1] = v14;
    if ( v7 )
      *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
    if ( v12 < (unsigned __int16)*(_DWORD *)v10 && *(_DWORD *)v14 == a2 )
      return 0LL;
  }
  else if ( !v7 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
  }
  return 3221226021LL;
}
