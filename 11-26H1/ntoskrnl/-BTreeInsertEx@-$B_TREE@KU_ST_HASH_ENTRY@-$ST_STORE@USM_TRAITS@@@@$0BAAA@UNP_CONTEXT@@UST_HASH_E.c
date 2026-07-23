/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403EB8AC
 * Callers:
 *     ?BTreeInsert@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020F9A0 (-BTreeInsert@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENT.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EAD8C (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EAD8C (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1403EB2FC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC734 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  _QWORD *v12; // r14
  _DWORD *v13; // rsi
  unsigned int v14; // r12d
  _DWORD *v15; // rdi
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  char v28; // cl
  int v29; // eax
  void **v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  void **v33; // rax
  struct NP_CONTEXT::NP_CTX *v34; // rcx
  __int64 v35; // rdx
  void **v36; // rdx
  struct NP_CONTEXT::NP_CTX *v37; // rcx
  _DWORD *v38; // rdx
  _BYTE *v39; // rax

  v4 = *a1;
  v5 = 0;
  v9 = 0LL;
  if ( v4 )
    v9 = *(unsigned __int8 *)(v4 + 2);
  v10 = *(_DWORD *)(a2 + 24);
  v11 = a2 + 28;
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v9 && !(unsigned int)SmArrayGrow(v9, a2, v11, a2) )
    return (unsigned int)-1073741670;
  if ( v10 )
  {
    v12 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v10 - 1));
  }
  else
  {
    v39 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            1u,
            1);
    *a1 = (__int64)v39;
    if ( !v39 )
      return (unsigned int)-1073741670;
    v12 = *(_QWORD **)a2;
    *v12 = v39;
    v12[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v13 = (_DWORD *)*v12;
  v14 = *(_BYTE *)(*v12 + 3LL) != 0 ? 1020 : 255;
  if ( (unsigned __int16)*(_DWORD *)*v12 >= v14 )
  {
    v18 = v12[1] - (_QWORD)v13 - 16LL;
    v19 = v18 >> 2;
    v20 = v18 >> 4;
    if ( !*(_BYTE *)(*v12 + 3LL) )
      LODWORD(v19) = v20;
    if ( v13 == (_DWORD *)*a1 )
    {
      v24 = 0LL;
      v23 = 0LL;
      v22 = 0LL;
    }
    else
    {
      v21 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              v11,
              a4);
      v22 = *(v12 - 1);
      v23 = v21;
      v24 = v22 + 32LL * ((v21 & 1) == 0) - 16;
    }
    v25 = (unsigned __int16)*v13;
    if ( v25 >= v14 )
    {
      if ( v23 && *((_BYTE *)v13 + 3) )
      {
        v35 = *(v12 - 2);
        v36 = (void **)(v24 <= v35 + 16 ? v35 + 8 : v24 - 8);
        v37 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
        if ( **(_DWORD **)v37 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v37, v36);
      }
      v23 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
              a1,
              a2);
      if ( v23 )
      {
        v12 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        v26 = (unsigned __int16)*v13;
        v22 = *(v12 - 1);
        if ( (int)v19 > v26 )
        {
          v27 = v19 - v26;
          v28 = *((_BYTE *)v13 + 3);
          *(v12 - 1) = v22 + 16;
LABEL_22:
          v29 = v27 - 1;
          v13 = (_DWORD *)v23;
          if ( v28 )
            v29 = v27;
          LODWORD(v19) = v29;
          goto LABEL_28;
        }
        v22 += 16LL;
        goto LABEL_28;
      }
      return (unsigned int)-1073741670;
    }
    if ( (v23 & 1) == 0 )
    {
      if ( (int)v19 > v25 )
      {
        v28 = *((_BYTE *)v13 + 3);
        v27 = v19 - v25;
        *(v12 - 1) = v24;
        goto LABEL_22;
      }
      v22 = v24;
LABEL_28:
      *v12 = v13;
      if ( *((_BYTE *)v13 + 3) )
      {
        v30 = (void **)(v22 - 8);
        v12[1] = &v13[(int)v19 + 4];
        v31 = *(v12 - 2);
        v32 = v31 + 16;
        v33 = (void **)(v31 + 8);
        if ( v22 <= v32 )
          v30 = v33;
        v34 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
        if ( **(_DWORD **)v34 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v34, v30);
      }
      else
      {
        v12[1] = &v13[4 * (int)v19 + 4];
      }
      goto LABEL_9;
    }
    v38 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v19) = v25 + v19 - v14;
    if ( *((_BYTE *)v13 + 3) )
    {
      if ( (int)v19 <= 0 )
      {
LABEL_45:
        v13 = v38;
        LODWORD(v19) = (unsigned __int16)*v38 + (_DWORD)v19;
        goto LABEL_46;
      }
    }
    else if ( (int)v19 < 0 )
    {
      LODWORD(v19) = v19 + 1;
      goto LABEL_45;
    }
    if ( v13 != v38 )
    {
      v22 = v24;
      goto LABEL_28;
    }
LABEL_46:
    *(v12 - 1) = v24;
    goto LABEL_28;
  }
LABEL_9:
  v15 = (_DWORD *)v12[1];
  v16 = *v13;
  if ( *((_BYTE *)v13 + 3) )
  {
    memmove(v15 + 1, v15, (size_t)v13 + 4LL * (unsigned __int16)v16 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v13 + 16 * ((unsigned __int16)v16 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v13;
  return v5;
}
