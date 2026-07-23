/*
 * XREFs of ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1404EB6A8
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406416A8 (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
        __int64 a1,
        struct B_TREE_NODE_HDR **a2)
{
  struct B_TREE_NODE_HDR *v2; // r8
  void **v5; // rdx

  v2 = *a2;
  *(_OWORD *)a1 = 0LL;
  if ( v2 )
  {
    do
    {
      while ( 1 )
      {
        v5 = (void **)((char *)v2 + 8);
        if ( *((_BYTE *)v2 + 3) )
        {
          *(_QWORD *)a1 = v2;
          *(_QWORD *)(a1 + 8) = v5;
          return (__int64)v2;
        }
        if ( *(_DWORD *)a2[2] != -1 && *((_BYTE *)v2 + 2) == 2 )
          break;
        v2 = (struct B_TREE_NODE_HDR *)*v5;
      }
      v2 = NP_CONTEXT::NpLeafRefInternal(a2 + 2, v5, 2);
    }
    while ( v2 );
    return -1LL;
  }
  return (__int64)v2;
}
