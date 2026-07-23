/*
 * XREFs of ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x1406421E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x14063FD1C (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  const void *v7; // rdx
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h]

  v3 = *a1;
  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)(v3 + 96) )
  {
    v6 = v3 - 1624;
    v7 = *(const void **)(v3 - 1624);
    if ( !v7 )
      return result;
  }
  else
  {
    v6 = v3 - 1552;
    v7 = *(const void **)(v3 - 1552);
    if ( !v7 )
      return result;
  }
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
           v6,
           v7,
           &v8,
           a2,
           a3);
}
