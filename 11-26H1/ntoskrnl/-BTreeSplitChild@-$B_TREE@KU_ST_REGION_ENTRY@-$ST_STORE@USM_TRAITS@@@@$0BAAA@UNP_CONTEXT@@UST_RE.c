/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB048
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14020F360 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14020F360 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403EB2FC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EC010 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14063FEC4 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
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
  _DWORD *v13; // rcx
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r9
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  union _NP_LEAF_PTR *v21; // rdx
  __int64 v23; // rax
  struct NP_CONTEXT::NP_CTX *v24; // rcx
  __int64 v25; // r12
  union _NP_LEAF_PTR *v26; // rdx
  int v27; // r8d
  __int128 v28; // [rsp+20h] [rbp-48h] BYREF
  struct NP_CONTEXT::NP_CTX *v29; // [rsp+78h] [rbp+10h]
  unsigned __int64 v30; // [rsp+78h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 24);
  v28 = 0LL;
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
  *((_QWORD *)&v28 + 1) = v8;
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
    v14 = *v12;
    v13 = 0LL;
    v29 = 0LL;
  }
  else
  {
    v12 = 0LL;
    v13 = (_DWORD *)(v7 + 16 * (v10 + 1));
    v29 = (struct NP_CONTEXT::NP_CTX *)v13;
    v14 = *v13;
  }
  LODWORD(v28) = v14;
  v15 = (unsigned __int16)*(_DWORD *)v7 - v11;
  if ( *(_BYTE *)(v7 + 3) )
  {
    v30 = (unsigned __int64)(a1 + 2);
    if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v7 + 8);
    memmove((void *)(v9 + 16), v12, 4LL * v15);
  }
  else
  {
    memmove((void *)(v9 + 16), v13 + 4, 16LL * --v15);
    *(_QWORD *)(v9 + 8) = *((_QWORD *)v29 + 1);
    v30 = (unsigned __int64)(a1 + 2);
  }
  *(_WORD *)v9 = v15;
  if ( *a1 != v7 )
  {
    --*(_DWORD *)(a2 + 24);
    v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
            a1,
            a2,
            &v28,
            v16);
    v18 = ++*(_DWORD *)(a2 + 24);
    if ( v17 >= 0 )
      goto LABEL_10;
LABEL_20:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v9);
    return v4;
  }
  v23 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
          a1,
          0LL,
          (unsigned int)*(unsigned __int8 *)(v7 + 2) + 1);
  v25 = v23;
  if ( !v23 )
    goto LABEL_20;
  v26 = (union _NP_LEAF_PTR *)(v23 + 8);
  v27 = 1;
  *(_QWORD *)(v23 + 8) = v7;
  *(_OWORD *)(v23 + 16) = v28;
  *(_WORD *)v23 = 1;
  *a1 = v23;
  if ( *(_BYTE *)(v7 + 3) && **(_DWORD **)(v30 & -(__int64)(a1 != 0LL)) != -1 )
  {
    *(_DWORD *)v26 |= 1u;
    NP_CONTEXT::NpGetResidentLeaf(v24, v26);
  }
  memmove(v6 + 2, v6, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v27));
  *v6 = v25;
  v6[1] = v25 + 16;
  v18 = ++*(_DWORD *)(a2 + 24);
LABEL_10:
  if ( *(_BYTE *)(v7 + 3) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v18 - 2) + 8);
    v20 = v30;
    v21 = (union _NP_LEAF_PTR *)(v19 + 8);
    if ( **(_DWORD **)(v30 & -(__int64)(a1 != 0LL)) == -1 )
      goto LABEL_12;
    *(_DWORD *)v21 |= 1u;
    NP_CONTEXT::NpGetResidentLeaf((struct NP_CONTEXT::NP_CTX *)v30, v21);
  }
  v20 = v30;
LABEL_12:
  *(_WORD *)v7 = v11;
  if ( *(_BYTE *)(v7 + 3) && **(_DWORD **)(v20 & -(__int64)(a1 != 0LL)) == -1 )
    *(_QWORD *)(v7 + 8) = v9;
  return v9;
}
