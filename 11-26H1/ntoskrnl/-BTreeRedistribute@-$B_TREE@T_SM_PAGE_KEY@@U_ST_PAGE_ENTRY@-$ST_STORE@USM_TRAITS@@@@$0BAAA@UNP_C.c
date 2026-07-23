/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC40C
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140211938 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC1D0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r8
  __int64 v5; // r8
  unsigned int v6; // r15d
  __int64 v7; // r11
  _DWORD *v8; // r14
  unsigned int v9; // edi
  void **v10; // r9
  void **v11; // rbx
  unsigned __int64 result; // rax
  _DWORD *v13; // r9
  _DWORD *v14; // r12
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // edx
  _DWORD *v19; // r10
  _DWORD *v20; // rbx
  unsigned int v21; // edi
  _DWORD *v22; // rsi
  unsigned int v23; // ebp
  __int64 v24; // r13
  __int64 v25; // rax
  bool v26; // zf
  int v27; // r8d
  _DWORD *v28; // rbp
  _DWORD *v29; // r13
  char *v30; // r13
  char *v31; // rbp
  unsigned int v32; // r8d
  __int64 v33; // r13
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rcx
  struct NP_CONTEXT::NP_CTX *v37; // rcx
  _DWORD *v38; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v39; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp+18h]
  __int64 v41; // [rsp+88h] [rbp+20h]

  v2 = *a2;
  v3 = 1LL;
  v4 = (unsigned int)(*((_DWORD *)a2 + 6) - 1);
  v39 = 0LL;
  v5 = 2 * v4;
  v38 = 0LL;
  v6 = 16;
  v7 = *(_QWORD *)(v2 + 8 * v5 - 16);
  v8 = *(_DWORD **)(v2 + 8 * v5 - 8);
  v9 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)(v2 + 8 * v5) + 3LL) != 0) + 255;
  if ( v8 == (_DWORD *)(v7 + 16 * ((unsigned __int16)*(_DWORD *)v7 + 1LL)) )
  {
    v8 -= 4;
    v10 = (void **)(v8 - 2);
    if ( (unsigned __int64)v8 <= v7 + 16 )
      v10 = (void **)(v7 + 8);
    v11 = (void **)&v39;
    v38 = *(_DWORD **)(v2 + 8 * v5);
  }
  else
  {
    v39 = *(_DWORD **)(v2 + 8 * v5);
    v10 = (void **)(v8 + 2);
    v11 = (void **)&v38;
    v3 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v7 + 2) != 2 )
  {
    result = (unsigned __int64)*v10;
    *v11 = *v10;
  }
  else
  {
    v37 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v37 == -1 )
      result = (unsigned __int64)*v10;
    else
      result = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v37, v10, 0);
    *v11 = (void *)result;
    if ( !result )
      return result;
  }
  v13 = v39;
  v40 = result | v3;
  v14 = v38;
  v15 = (unsigned __int16)*v39;
  v16 = (unsigned __int16)*v38;
  v17 = v15 + v16;
  if ( v15 + v16 < v9 || v17 >= 2 * v9 - 1 )
    return v40;
  v18 = v17 >> 1;
  v19 = v39;
  if ( v15 > v16 )
  {
    v23 = 0;
    v21 = v15 - v18;
    v20 = v39;
    v22 = v38;
  }
  else
  {
    v20 = v38;
    v21 = v18 - v15;
    v22 = v39;
    v23 = (unsigned __int16)*v39;
  }
  LODWORD(v38) = v23;
  v24 = v23;
  v25 = v16 < v15 ? v18 : 0;
  v26 = *((_BYTE *)v20 + 3) == 0;
  v27 = v25;
  v41 = v25;
  if ( v26 )
  {
    v33 = 4LL * v23;
    v19 = v39;
    v28 = &v20[4 * v25];
    v29 = &v22[v33];
  }
  else
  {
    v6 = 8;
    v28 = &v20[2 * v25];
    v29 = &v22[2 * v24];
  }
  v30 = (char *)(v29 + 4);
  v31 = (char *)(v28 + 4);
  if ( v20 == v19 )
  {
    memmove(&v30[v6 * v21], v30, v6 * (unsigned __int16)*v22);
    v13 = v39;
    v27 = v41;
  }
  if ( *((_BYTE *)v20 + 3) )
  {
    v32 = v21;
  }
  else
  {
    v34 = *v8;
    if ( v20 == v13 )
    {
      v36 = 2LL * (v21 - 1);
      v22[2 * v36 + 4] = v34;
      *(_QWORD *)&v22[2 * v36 + 6] = *((_QWORD *)v22 + 1);
    }
    else
    {
      v35 = 2LL * (unsigned int)v38;
      v22[2 * v35 + 4] = v34;
      *(_QWORD *)&v22[2 * v35 + 6] = *((_QWORD *)v20 + 1);
      v30 += v6;
    }
    if ( v20 == v13 )
    {
      *v8 = v20[4 * v27 + 4];
      *((_QWORD *)v22 + 1) = *(_QWORD *)&v20[4 * v27 + 6];
      v31 += v6;
    }
    else
    {
      *v8 = v20[4 * v21];
      *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v21 + 2];
    }
    v32 = v21 - 1;
  }
  memmove(v30, v31, v6 * v32);
  *(_WORD *)v22 += v21;
  *(_WORD *)v20 -= v21;
  if ( v20 == v14 )
    memmove(v31, &v31[v6 * v21], v6 * (unsigned __int16)*v20);
  result = v40;
  if ( *((_BYTE *)v14 + 3) )
    *v8 = v14[4];
  return result;
}
