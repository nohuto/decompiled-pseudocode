/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EAD8C
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403EB8AC (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403EB2FC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403EB8AC (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14063FEC4 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // r13d
  int *v12; // rdx
  int v13; // eax
  _DWORD *v14; // rcx
  unsigned int v15; // r12d
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  union _NP_LEAF_PTR *v20; // rdx
  __int64 v22; // rax
  struct NP_CONTEXT::NP_CTX *v23; // rcx
  __int64 v24; // r12
  union _NP_LEAF_PTR *v25; // rdx
  int v26; // r8d
  __int128 v27; // [rsp+20h] [rbp-48h] BYREF
  struct NP_CONTEXT::NP_CTX *v28; // [rsp+78h] [rbp+10h]
  unsigned __int64 v29; // [rsp+78h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 24);
  v27 = 0LL;
  v4 = 0LL;
  v6 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
  v7 = *v6;
  v8 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v6 + 3),
         *(unsigned __int8 *)(*v6 + 2));
  v9 = v8;
  if ( !v8 )
    return v4;
  *((_QWORD *)&v27 + 1) = v8;
  v10 = (*(_DWORD *)v7 >> 1) & 0x7FFF;
  v11 = (*(_DWORD *)v7 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v7 + 3) )
  {
    v12 = (int *)(v7 + 16 + 4 * v10);
    if ( (*(_DWORD *)v7 & 1) != 0 && (unsigned __int64)(v12 + 1) < v6[1] )
    {
      ++v12;
      ++v11;
    }
    v13 = *v12;
    v14 = 0LL;
    v28 = 0LL;
  }
  else
  {
    v12 = 0LL;
    v14 = (_DWORD *)(v7 + 16 * (v10 + 1));
    v28 = (struct NP_CONTEXT::NP_CTX *)v14;
    v13 = *v14;
  }
  LODWORD(v27) = v13;
  v15 = (unsigned __int16)*(_DWORD *)v7 - v11;
  if ( *(_BYTE *)(v7 + 3) )
  {
    v29 = (unsigned __int64)(a1 + 2);
    if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v7 + 8);
    memmove((void *)(v9 + 16), v12, 4LL * v15);
  }
  else
  {
    memmove((void *)(v9 + 16), v14 + 4, 16LL * --v15);
    *(_QWORD *)(v9 + 8) = *((_QWORD *)v28 + 1);
    v29 = (unsigned __int64)(a1 + 2);
  }
  *(_WORD *)v9 = v15;
  if ( *a1 != v7 )
  {
    --*(_DWORD *)(a2 + 24);
    v16 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
            a1,
            a2,
            &v27);
    v17 = ++*(_DWORD *)(a2 + 24);
    if ( v16 >= 0 )
      goto LABEL_11;
LABEL_19:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v9);
    return v4;
  }
  v22 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
          a1,
          0LL,
          (unsigned int)*(unsigned __int8 *)(v7 + 2) + 1);
  v24 = v22;
  if ( !v22 )
    goto LABEL_19;
  v25 = (union _NP_LEAF_PTR *)(v22 + 8);
  v26 = 1;
  *(_QWORD *)(v22 + 8) = v7;
  *(_OWORD *)(v22 + 16) = v27;
  *(_WORD *)v22 = 1;
  *a1 = v22;
  if ( *(_BYTE *)(v7 + 3) && **(_DWORD **)(v29 & -(__int64)(a1 != 0LL)) != -1 )
  {
    *(_DWORD *)v25 |= 1u;
    NP_CONTEXT::NpGetResidentLeaf(v23, v25);
  }
  memmove(v6 + 2, v6, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v26));
  *v6 = v24;
  v6[1] = v24 + 16;
  v17 = ++*(_DWORD *)(a2 + 24);
LABEL_11:
  if ( *(_BYTE *)(v7 + 3) )
  {
    v18 = *(_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v17 - 2) + 8);
    v19 = v29;
    v20 = (union _NP_LEAF_PTR *)(v18 + 8);
    if ( **(_DWORD **)(v29 & -(__int64)(a1 != 0LL)) == -1 )
      goto LABEL_13;
    *(_DWORD *)v20 |= 1u;
    NP_CONTEXT::NpGetResidentLeaf((struct NP_CONTEXT::NP_CTX *)v29, v20);
  }
  v19 = v29;
LABEL_13:
  *(_WORD *)v7 = v11;
  if ( *(_BYTE *)(v7 + 3) && **(_DWORD **)(v19 & -(__int64)(a1 != 0LL)) == -1 )
    *(_QWORD *)(v7 + 8) = v9;
  return v9;
}
