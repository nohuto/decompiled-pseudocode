/*
 * XREFs of ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140392B50
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140393E24 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindNextEntry(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  int **v4; // rbx
  int *v5; // r9
  unsigned __int64 result; // rax
  int v7; // r10d
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a2 + 24);
  if ( !v2 )
    return 0LL;
  v4 = (int **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
  v5 = *v4;
  result = (unsigned __int64)(v4[1] + 2);
  v4[1] = (int *)result;
  v7 = *v5;
  if ( result >= (unsigned __int64)&v5[2 * (unsigned __int16)*v5 + 4] )
  {
    v8 = 2LL;
    if ( (_WORD)v7 )
      v8 = 2LL * (unsigned __int16)v7;
    v4[1] = &v5[v8 + 2];
    result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSiblingEx(a1);
    if ( result )
    {
      if ( result == -1LL )
      {
        return -1LL;
      }
      else
      {
        result += 16LL;
        v4[1] = (int *)result;
      }
    }
  }
  return result;
}
