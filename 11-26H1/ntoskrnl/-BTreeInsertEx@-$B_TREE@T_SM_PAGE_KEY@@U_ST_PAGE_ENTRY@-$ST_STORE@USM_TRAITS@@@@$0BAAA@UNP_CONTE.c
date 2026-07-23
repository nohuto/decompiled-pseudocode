/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140211938
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB360 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 * Callees:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403EB2FC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EB360 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC40C (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 *v10; // r14
  _DWORD *v11; // rsi
  unsigned int v12; // r12d
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  char v26; // cl
  int v27; // eax
  _DWORD *v28; // rdx
  void **v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  void **v32; // rax
  struct NP_CONTEXT::NP_CTX *v33; // rcx
  __int64 v34; // rdx
  void **v35; // rdx
  struct NP_CONTEXT::NP_CTX *v36; // rcx
  __int64 v37; // rax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v37 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *a1 = v37;
    if ( !v37 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v37;
    v10[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  v12 = (unsigned __int8)-(*(_BYTE *)(*v10 + 3) != 0) + 255;
  if ( (unsigned __int16)*(_DWORD *)*v10 >= v12 )
  {
    v16 = v10[1] - (_QWORD)v11 - 16;
    v17 = v16 >> 3;
    v18 = v16 >> 4;
    if ( !*(_BYTE *)(*v10 + 3) )
      LODWORD(v17) = v18;
    if ( v11 == (_DWORD *)*a1 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v19 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              a1,
              a2);
      v20 = *(v10 - 1);
      v21 = v19;
      v22 = v20 + 32LL * ((v19 & 1) == 0) - 16;
    }
    v23 = (unsigned __int16)*v11;
    if ( v23 >= v12 )
    {
      if ( v21 && *((_BYTE *)v11 + 3) )
      {
        v34 = *(v10 - 2);
        v35 = (void **)(v22 <= v34 + 16 ? v34 + 8 : v22 - 8);
        v22 = (unsigned __int64)(a1 + 2);
        v36 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
        if ( **(_DWORD **)v36 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v36, v35);
      }
      v21 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
              a1,
              a2,
              v22);
      if ( v21 )
      {
        v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        v24 = (unsigned __int16)*v11;
        v20 = *(v10 - 1);
        if ( (int)v17 > v24 )
        {
          v25 = v17 - v24;
          v26 = *((_BYTE *)v11 + 3);
          *(v10 - 1) = v20 + 16;
LABEL_22:
          v27 = v25 - 1;
          v11 = (_DWORD *)v21;
          if ( v26 )
            v27 = v25;
          LODWORD(v17) = v27;
          goto LABEL_32;
        }
        v20 += 16LL;
        goto LABEL_32;
      }
      return (unsigned int)-1073741670;
    }
    if ( (v21 & 1) == 0 )
    {
      if ( (int)v17 > v23 )
      {
        v26 = *((_BYTE *)v11 + 3);
        v25 = v17 - v23;
        *(v10 - 1) = v22;
        goto LABEL_22;
      }
      v20 = v22;
LABEL_32:
      *v10 = (__int64)v11;
      if ( *((_BYTE *)v11 + 3) )
      {
        v29 = (void **)(v20 - 8);
        v10[1] = (__int64)&v11[2 * (int)v17 + 4];
        v30 = *(v10 - 2);
        v31 = v30 + 16;
        v32 = (void **)(v30 + 8);
        if ( v20 <= v31 )
          v29 = v32;
        v33 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
        if ( **(_DWORD **)v33 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v33, v29);
      }
      else
      {
        v10[1] = (__int64)&v11[4 * (int)v17 + 4];
      }
      goto LABEL_7;
    }
    v28 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v17) = v23 + v17 - v12;
    if ( *((_BYTE *)v11 + 3) )
    {
      if ( (int)v17 <= 0 )
      {
LABEL_28:
        v11 = v28;
        LODWORD(v17) = (unsigned __int16)*v28 + (_DWORD)v17;
        goto LABEL_29;
      }
    }
    else if ( (int)v17 < 0 )
    {
      LODWORD(v17) = v17 + 1;
      goto LABEL_28;
    }
    if ( v11 != v28 )
    {
      v20 = v22;
      goto LABEL_32;
    }
LABEL_29:
    *(v10 - 1) = v22;
    goto LABEL_32;
  }
LABEL_7:
  v13 = (_QWORD *)v10[1];
  v14 = *v11;
  if ( *((_BYTE *)v11 + 3) )
  {
    memmove(v13 + 1, v13, (size_t)v11 + 8LL * (unsigned __int16)v14 + 16 - (_QWORD)v13);
    *v13 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v13 + 2, v13, (size_t)v11 + 16 * ((unsigned __int16)v14 + 1LL) - (_QWORD)v13);
    *(_OWORD *)v13 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
