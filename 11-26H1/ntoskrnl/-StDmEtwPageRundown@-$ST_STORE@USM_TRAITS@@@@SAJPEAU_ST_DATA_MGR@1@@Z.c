/*
 * XREFs of ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406416A8
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140642168 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14020EFE0 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14045A7F0 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14047B6F0 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1404EB6A8 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     SmEtwLogStoreOp @ 0x140527D08 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwPageRundown(struct B_TREE_NODE_HDR **a1)
{
  REGHANDLE *v2; // r12
  unsigned int v3; // edi
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 LeafSibling; // rax
  ULONGLONG v8; // r15
  __int16 v9; // bx
  _DWORD *v10; // rax
  __int64 v11; // r9
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v13 = 0LL;
  v2 = (REGHANDLE *)((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)(SBYTE4(stru_140E27C48.InitialStack) < 0));
  if ( v2 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
      (__int64)&v13,
      a1);
    v4 = *((_QWORD *)&v13 + 1);
    v3 = 0;
    v5 = v13;
    while ( 1 )
    {
      if ( !v5 )
      {
LABEL_16:
        *(_QWORD *)&v13 = v5;
        goto LABEL_17;
      }
      v4 += 8LL;
      v6 = (unsigned __int16)*(_DWORD *)v5 + 2LL;
      *((_QWORD *)&v13 + 1) = v4;
      if ( v4 >= v5 + 8 * v6 )
      {
        if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
        {
          LeafSibling = *(_QWORD *)(v5 + 8);
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling((char **)a1);
          if ( LeafSibling == -1 )
          {
            v8 = -1LL;
            goto LABEL_14;
          }
        }
        if ( !LeafSibling )
        {
          v8 = 0LL;
          goto LABEL_14;
        }
        v4 = LeafSibling + 16;
        v5 = LeafSibling;
        *((_QWORD *)&v13 + 1) = LeafSibling + 16;
      }
      v8 = v4;
LABEL_14:
      if ( !v8 )
        goto LABEL_16;
      v9 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(a1, v8)[1] & 0xFFF;
      v10 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(a1, v8);
      SmEtwLogStoreOp(v2, 2u, v8, v11, *v10, (char)a1, v9, 0);
    }
  }
  v3 = -1073741637;
LABEL_17:
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    (__int64 *)&v13,
    (char **)a1);
  return v3;
}
