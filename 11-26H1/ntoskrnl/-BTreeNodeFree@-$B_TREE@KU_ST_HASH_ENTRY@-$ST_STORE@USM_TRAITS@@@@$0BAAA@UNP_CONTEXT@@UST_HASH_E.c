/*
 * XREFs of ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403ECA14
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403ECA14 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403ECA14 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(
        __int64 a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *v4; // r13
  unsigned __int8 *v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rdx
  unsigned __int64 *v8; // rax
  _DWORD **v9; // r12
  _DWORD *v10; // r15
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int8 *v14; // [rsp+68h] [rbp+10h]
  __int64 *v15; // [rsp+70h] [rbp+18h]

  if ( !a2[3] )
  {
    v4 = a2 + 16;
    v5 = a2 + 16;
    v6 = (unsigned __int64)&a2[16 * (unsigned __int16)*(_DWORD *)a2 + 16];
    if ( (unsigned __int64)(a2 + 16) <= v6 )
    {
      v7 = a2 + 8;
      v8 = (unsigned __int64 *)(v4 - 8);
      v14 = v4 - 8;
      v9 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
      do
      {
        v10 = *v9;
        v11 = v8;
        if ( v5 <= v4 )
          v11 = (unsigned __int64 *)v7;
        if ( *v10 == -1 || a2[2] != 2 )
        {
          v12 = *v11;
        }
        else
        {
          if ( (*(_DWORD *)v11 & 1) != 0 )
          {
            v12 = *v11 & 0xFFFFFFFFFFFFF000uLL;
            v15 = (__int64 *)((v12 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
            v13 = *v15;
            if ( *v15 && (v13 & 2) == 0 )
            {
              guard_dispatch_icall_no_overrides(v9, v13);
              *(_DWORD *)v15 |= 2u;
              --v10[12];
            }
          }
          else
          {
            --v10[11];
            guard_dispatch_icall_no_overrides(v9, *v11);
            v12 = 0LL;
          }
          v8 = (unsigned __int64 *)v14;
        }
        if ( v12 )
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(a1);
          v8 = (unsigned __int64 *)v14;
        }
        v8 += 2;
        v7 = a2 + 8;
        v5 += 16;
        v14 = (unsigned __int8 *)v8;
      }
      while ( (unsigned __int64)v5 <= v6 );
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    a2);
}
