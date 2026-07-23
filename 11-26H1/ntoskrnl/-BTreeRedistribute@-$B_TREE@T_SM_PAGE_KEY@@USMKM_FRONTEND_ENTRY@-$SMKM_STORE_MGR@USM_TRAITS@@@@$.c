/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1404859D0
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14027F960 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14027FE34 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r15d
  _DWORD *v4; // r14
  __int64 v5; // r9
  _DWORD *v6; // rdx
  unsigned int v7; // r8d
  __int64 *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // r9
  _DWORD *v12; // r12
  unsigned int v13; // edx
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  _DWORD *v17; // r8
  _DWORD *v18; // rbx
  unsigned int v19; // edi
  _DWORD *v20; // rsi
  unsigned int v21; // ebp
  __int64 v22; // r13
  __int64 v23; // rax
  bool v24; // zf
  int v25; // r10d
  _DWORD *v26; // rbp
  _DWORD *v27; // r13
  char *v28; // r13
  char *v29; // rbp
  unsigned int v30; // r8d
  __int64 v32; // r13
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v37; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h]

  v36 = a1;
  v2 = 1LL;
  v3 = 16;
  v4 = *(_DWORD **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1) - 8);
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *(_DWORD **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1) - 16);
  v7 = (unsigned __int8)-(*(_BYTE *)(v5 + 3) != 0) + 255;
  if ( v4 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v4 -= 4;
    v8 = (__int64 *)(v4 - 2);
    if ( v4 <= v6 + 4 )
      v8 = (__int64 *)(v6 + 2);
    v9 = &v37;
    v36 = (_DWORD *)v5;
  }
  else
  {
    v37 = (_DWORD *)v5;
    v8 = (__int64 *)(v4 + 2);
    v9 = &v36;
    v2 = 0LL;
  }
  v10 = *v8;
  *v9 = v10;
  v11 = v37;
  v39 = v10 | v2;
  v12 = v36;
  v13 = (unsigned __int16)*v37;
  v14 = (unsigned __int16)*v36;
  v15 = v14 + v13;
  if ( v14 + v13 >= v7 && v15 < 2 * v7 - 1 )
  {
    v16 = v15 >> 1;
    v17 = v37;
    if ( v13 > v14 )
    {
      v21 = 0;
      v19 = v13 - v16;
      v18 = v37;
      v20 = v36;
    }
    else
    {
      v18 = v36;
      v19 = v16 - v13;
      v20 = v37;
      v21 = (unsigned __int16)*v37;
    }
    LODWORD(v36) = v21;
    v22 = v21;
    v23 = v14 < v13 ? v16 : 0;
    v24 = *((_BYTE *)v18 + 3) == 0;
    v25 = v23;
    v38 = v23;
    if ( v24 )
    {
      v32 = 4LL * v21;
      v17 = v37;
      v26 = &v18[4 * v23];
      v27 = &v20[v32];
    }
    else
    {
      v3 = 8;
      v26 = &v18[2 * v23];
      v27 = &v20[2 * v22];
    }
    v28 = (char *)(v27 + 4);
    v29 = (char *)(v26 + 4);
    if ( v18 == v17 )
    {
      memmove(&v28[v3 * v19], v28, v3 * (unsigned __int16)*v20);
      v11 = v37;
      v25 = v38;
    }
    if ( *((_BYTE *)v18 + 3) )
    {
      v30 = v19;
    }
    else
    {
      v33 = *v4;
      if ( v18 == v11 )
      {
        v35 = 2LL * (v19 - 1);
        v20[2 * v35 + 4] = v33;
        *(_QWORD *)&v20[2 * v35 + 6] = *((_QWORD *)v20 + 1);
      }
      else
      {
        v34 = 2LL * (unsigned int)v36;
        v20[2 * v34 + 4] = v33;
        *(_QWORD *)&v20[2 * v34 + 6] = *((_QWORD *)v18 + 1);
        v28 += v3;
      }
      if ( v18 == v11 )
      {
        *v4 = v18[4 * v25 + 4];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v18[4 * v25 + 6];
        v29 += v3;
      }
      else
      {
        *v4 = v18[4 * v19];
        *((_QWORD *)v18 + 1) = *(_QWORD *)&v18[4 * v19 + 2];
      }
      v30 = v19 - 1;
    }
    memmove(v28, v29, v3 * v30);
    *(_WORD *)v20 += v19;
    *(_WORD *)v18 -= v19;
    if ( v18 == v12 )
      memmove(v29, &v29[v3 * v19], v3 * (unsigned __int16)*v18);
    if ( *((_BYTE *)v12 + 3) )
      *v4 = v12[4];
  }
  return v39;
}
