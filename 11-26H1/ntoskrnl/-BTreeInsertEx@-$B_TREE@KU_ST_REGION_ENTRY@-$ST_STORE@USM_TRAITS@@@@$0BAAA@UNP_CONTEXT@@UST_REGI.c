/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14020F360
 * Callers:
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020E100 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB048 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 * Callees:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB048 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403EB2FC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14048A29C (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // r14
  int *v12; // rsi
  unsigned int v13; // ebp
  int v14; // ecx
  _DWORD *v15; // rbx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned int v25; // ecx
  int v26; // r10d
  int *v27; // rdx
  void **v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  void **v31; // rax
  bool v32; // cc
  struct NP_CONTEXT::NP_CTX *v33; // rcx
  __int64 v34; // rdx
  int v35; // r12d
  int v36; // eax
  int v37; // ecx
  int v38; // r12d
  int v39; // eax
  __int64 v40; // rcx
  void **v41; // rdx
  struct NP_CONTEXT::NP_CTX *v42; // rcx
  __int64 v43; // rax

  v4 = *a1;
  v8 = 0LL;
  if ( v4 )
    v8 = *(unsigned __int8 *)(v4 + 2);
  v9 = a2 + 28;
  v10 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, v9, a2) )
    return 3221225626LL;
  if ( v10 )
  {
    v11 = *(_QWORD *)a2 + 16LL * (unsigned int)(v10 - 1);
  }
  else
  {
    v43 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *a1 = v43;
    if ( !v43 )
      return 3221225626LL;
    v11 = *(_QWORD *)a2;
    *(_QWORD *)v11 = v43;
    *(_QWORD *)(v11 + 8) = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v12 = *(int **)v11;
  v13 = 255;
  v14 = **(_DWORD **)v11;
  if ( *(_BYTE *)(*(_QWORD *)v11 + 3LL) )
    v13 = 1020;
  if ( (unsigned __int16)v14 >= v13 )
  {
    v18 = *(_QWORD *)(v11 + 8) - (_QWORD)v12 - 16LL;
    v19 = v18 >> 2;
    v20 = v18 >> 4;
    if ( !HIBYTE(v14) )
      LODWORD(v19) = v20;
    if ( v12 == (int *)*a1 )
    {
      v24 = 0LL;
      v23 = 0LL;
      v22 = 0LL;
    }
    else
    {
      v21 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              v9,
              a4);
      v22 = *(_QWORD *)(v11 - 8);
      v23 = v21;
      v24 = v22 + 32LL * ((v21 & 1) == 0) - 16;
    }
    v25 = HIBYTE(*v12);
    v26 = (unsigned __int16)*v12;
    if ( v26 >= v13 )
    {
      if ( v23 && (_BYTE)v25 )
      {
        v40 = *(_QWORD *)(v11 - 16);
        v41 = (void **)(v24 - 8);
        if ( v24 <= v40 + 16 )
          v41 = (void **)(v40 + 8);
        v42 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
        if ( !a1 )
          v42 = 0LL;
        if ( **(_DWORD **)v42 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v42, v41);
      }
      v34 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
              a1,
              a2,
              v22,
              v24);
      if ( !v34 )
        return 3221225626LL;
      v37 = *v12;
      v11 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v22 = *(_QWORD *)(v11 - 8);
      if ( (int)v19 <= (unsigned __int16)*v12 )
      {
        v22 += 16LL;
      }
      else
      {
        v38 = v19 - (unsigned __int16)*v12;
        *(_QWORD *)(v11 - 8) = v22 + 16;
        v12 = (int *)v34;
        v39 = v38 - 1;
        if ( HIBYTE(v37) )
          v39 = v38;
        LODWORD(v19) = v39;
      }
      goto LABEL_25;
    }
    if ( (v23 & 1) == 0 )
    {
      if ( (int)v19 > v26 )
      {
        v35 = v19 - v26;
        *(_QWORD *)(v11 - 8) = v24;
        v12 = (int *)v23;
        v36 = v35 - 1;
        if ( (_BYTE)v25 )
          v36 = v35;
        LODWORD(v19) = v36;
        goto LABEL_25;
      }
      goto LABEL_24;
    }
    v27 = (int *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v19) = v26 + v19 - v13;
    if ( (_BYTE)v25 )
    {
      if ( (int)v19 <= 0 )
      {
        v12 = v27;
        LODWORD(v19) = (unsigned __int16)*v27 + (_DWORD)v19;
        goto LABEL_54;
      }
    }
    else if ( (int)v19 < 0 )
    {
      v12 = v27;
      LODWORD(v19) = (unsigned __int16)*v27 + v19 + 1;
      goto LABEL_54;
    }
    if ( v12 != v27 )
    {
LABEL_24:
      v22 = v24;
      goto LABEL_25;
    }
LABEL_54:
    *(_QWORD *)(v11 - 8) = v24;
LABEL_25:
    *(_QWORD *)v11 = v12;
    if ( *((_BYTE *)v12 + 3) )
    {
      v28 = (void **)(v22 - 8);
      *(_QWORD *)(v11 + 8) = &v12[(int)v19 + 4];
      v29 = *(_QWORD *)(v11 - 16);
      v30 = v29 + 16;
      v31 = (void **)(v29 + 8);
      v32 = v22 <= v30;
      v33 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
      if ( v32 )
        v28 = v31;
      if ( !a1 )
        v33 = 0LL;
      if ( **(_DWORD **)v33 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v33, v28);
    }
    else
    {
      *(_QWORD *)(v11 + 8) = &v12[4 * (int)v19 + 4];
    }
  }
  v15 = *(_DWORD **)(v11 + 8);
  v16 = *v12;
  if ( *((_BYTE *)v12 + 3) )
  {
    memmove(v15 + 1, v15, (size_t)v12 + 4LL * (unsigned __int16)v16 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v12 + 16 * ((unsigned __int16)v16 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v12;
  return 0LL;
}
