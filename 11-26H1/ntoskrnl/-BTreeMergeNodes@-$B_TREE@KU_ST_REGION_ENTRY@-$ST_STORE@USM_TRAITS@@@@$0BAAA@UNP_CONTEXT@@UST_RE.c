/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EBE7C
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020ECD0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020ECD0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14063FEF8 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  int v9; // r8d
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r12
  bool v15; // zf
  _DWORD **v16; // rbx
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // rcx

  v6 = a3;
  v7 = 2LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v9 = a3 & 1;
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v7 - 8);
  if ( v9 )
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v7);
  v11 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = v11;
  if ( !v9 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v7);
    v11 = a3;
  }
  v13 = (unsigned __int16)*(_DWORD *)v12;
  if ( v12 == v11 )
  {
    v10 -= 16LL;
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v7 - 8) = v10;
  }
  if ( *(_BYTE *)(v12 + 3) )
  {
    v14 = a1 + 16;
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v6 + 8);
    memmove((void *)(v12 + 16 + 4 * v13), (const void *)(v6 + 16), 4LL * (unsigned __int16)*(_DWORD *)v6);
  }
  else
  {
    v19 = v13;
    LODWORD(v13) = v13 + 1;
    v19 *= 2LL;
    *(_DWORD *)(v12 + 8 * v19 + 16) = *(_DWORD *)v10;
    *(_QWORD *)(v12 + 8 * v19 + 24) = *(_QWORD *)(v6 + 8);
    memmove(
      (void *)(v12 + 16 * ((unsigned int)v13 + 1LL)),
      (const void *)(v6 + 16),
      16LL * (unsigned __int16)*(_DWORD *)v6);
    v14 = a1 + 16;
  }
  v15 = *(_BYTE *)(v12 + 3) == 0;
  *(_WORD *)v12 = *(_WORD *)v6 + v13;
  if ( !v15 )
  {
    v16 = (_DWORD **)(v14 & -(__int64)(a1 != 0));
    if ( **v16 != -1 )
      NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(v14 & -(__int64)(a1 != 0)), (void **)(v10 + 8));
    if ( **v16 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(v14 & -(__int64)(a1 != 0)), (void **)(v10 + 8));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    v6);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2,
             v17);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
