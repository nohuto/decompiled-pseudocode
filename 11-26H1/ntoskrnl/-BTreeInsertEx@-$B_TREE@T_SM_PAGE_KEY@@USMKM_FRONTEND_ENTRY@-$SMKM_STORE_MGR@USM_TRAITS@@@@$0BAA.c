/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14027FE34
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14027EE40 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1404AE178 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1404859D0 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1404AE178 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1404AE360 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        unsigned int ***a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 *v10; // rsi
  unsigned int *v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // r12d
  unsigned int *v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  int v23; // edx
  int v24; // eax
  unsigned int *v25; // rax
  int v26; // ebp
  char v27; // al
  unsigned int *v28; // r8
  __int64 v29; // rax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *((_DWORD *)a2 + 6);
  if ( *((_DWORD *)a2 + 7) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, (char *)a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)&(*a2)[2 * (unsigned int)(v9 - 1)];
  }
  else
  {
    v29 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1LL,
            1LL);
    *a1 = v29;
    if ( !v29 )
      return (unsigned int)-1073741670;
    v10 = (__int64 *)*a2;
    *v10 = v29;
    v10[1] = *a1 + 16;
    ++*((_DWORD *)a2 + 6);
  }
  v11 = (unsigned int *)*v10;
  v12 = *(unsigned int *)*v10;
  v13 = (unsigned __int8)-(*(_BYTE *)(*v10 + 3) != 0) + 255;
  if ( (unsigned __int16)v12 >= v13 )
  {
    v16 = v10[1] - (_QWORD)v11 - 16;
    v17 = v16 >> 3;
    v18 = v16 >> 4;
    if ( !*(_BYTE *)(*v10 + 3) )
      LODWORD(v17) = v18;
    if ( v11 == (unsigned int *)*a1 )
    {
      v20 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              v12,
              a2);
      v20 = 32LL * ((v19 & 1) == 0) - 16 + *(v10 - 1);
    }
    v21 = (unsigned __int16)*v11;
    if ( v21 >= v13 )
    {
      v22 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
              a1,
              a2,
              v19,
              v20);
      if ( v22 )
      {
        v23 = v17;
        v10 = (__int64 *)&(*a2)[2 * (unsigned int)(*((_DWORD *)a2 + 6) - 1)];
        v24 = (unsigned __int16)*v11;
        if ( (int)v17 <= v24 )
        {
LABEL_18:
          *v10 = (__int64)v11;
          if ( *((_BYTE *)v11 + 3) )
            v25 = &v11[2 * v23 + 4];
          else
            v25 = &v11[4 * v23 + 4];
          v10[1] = (__int64)v25;
          LODWORD(v12) = *v11;
          goto LABEL_7;
        }
        v26 = v17 - v24;
        v27 = *((_BYTE *)v11 + 3);
        *(v10 - 1) += 16LL;
        v11 = (unsigned int *)v22;
LABEL_26:
        v23 = v26 - 1;
        if ( v27 )
          v23 = v26;
        goto LABEL_18;
      }
      return (unsigned int)-1073741670;
    }
    if ( (v19 & 1) == 0 )
    {
      v23 = v17;
      if ( (int)v17 <= v21 )
        goto LABEL_18;
      v26 = v17 - v21;
      v27 = *((_BYTE *)v11 + 3);
      v11 = (unsigned int *)v19;
      *(v10 - 1) = v20;
      goto LABEL_26;
    }
    v28 = (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
    v23 = v21 + v17 - v13;
    if ( *((_BYTE *)v11 + 3) )
    {
      if ( v23 <= 0 )
      {
LABEL_31:
        v11 = v28;
        v23 += (unsigned __int16)*v28;
LABEL_32:
        *(v10 - 1) = v20;
        goto LABEL_18;
      }
    }
    else if ( v23 < 0 )
    {
      ++v23;
      goto LABEL_31;
    }
    if ( v11 != v28 )
      goto LABEL_18;
    goto LABEL_32;
  }
LABEL_7:
  v14 = (unsigned int *)v10[1];
  if ( *((_BYTE *)v11 + 3) )
  {
    memmove(v14 + 2, v14, (size_t)v11 + 8LL * (unsigned __int16)v12 + 16 - (_QWORD)v14);
    *(_QWORD *)v14 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v14 + 4, v14, (size_t)v11 + 16 * ((unsigned __int16)v12 + 1LL) - (_QWORD)v14);
    *(_OWORD *)v14 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
