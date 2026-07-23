/*
 * XREFs of ?BTreeInsert@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020F9A0
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403EB8AC (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsert(
        char **a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int *v4; // r14
  __int64 v5; // rdi
  char **v6; // r13
  int v7; // edx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  char *v10; // rbx
  unsigned int v11; // r11d
  void **v12; // rcx
  unsigned int v13; // eax
  int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r10
  unsigned int v19; // ebp
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rcx
  char *v24; // r8
  unsigned int v25; // ebp
  int v26; // ecx
  unsigned int v27; // esi
  int v28; // ebx
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // r9
  __int64 v33; // r11
  unsigned int v34; // r8d
  __int64 v35; // rax
  int v37; // edx
  unsigned int v38; // r8d
  __int64 v39; // r13
  unsigned int v40; // r14d
  __int64 v41; // r10
  unsigned int v42; // ebp
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned int v45; // r9d
  __int64 v46; // rcx
  int v47; // [rsp+20h] [rbp-78h]
  unsigned int v48; // [rsp+24h] [rbp-74h]
  int v49; // [rsp+24h] [rbp-74h]
  unsigned int v50; // [rsp+28h] [rbp-70h]
  char v51; // [rsp+2Ch] [rbp-6Ch]
  __int64 v52; // [rsp+30h] [rbp-68h]
  _QWORD *v53; // [rsp+38h] [rbp-60h]
  __int64 v54; // [rsp+40h] [rbp-58h]
  unsigned int v58; // [rsp+B8h] [rbp+20h]

  v3 = *a2;
  v4 = a2;
  v58 = *a2;
  v5 = a3;
  v6 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v5 + 24) == -1 )
  {
    v7 = 0;
    v9 = (_QWORD *)(v5 + 8);
    v47 = 0;
  }
  else
  {
    v7 = 1;
    v47 = 1;
    v8 = 0LL;
    if ( *v6 )
      v8 = (unsigned __int8)(*v6)[2];
    if ( *(_DWORD *)(v5 + 28) < (unsigned int)v8 )
    {
      if ( !(unsigned int)SmArrayGrow(v8, 1LL, v5 + 28, v5) )
        return 3221225626LL;
      v7 = 1;
    }
    v9 = *(_QWORD **)v5;
  }
  v10 = *v6;
  v53 = v9;
  if ( !*v6 )
  {
    if ( !v7 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
             v6,
             v5,
             v4);
  }
  while ( 1 )
  {
    v11 = -1;
    v13 = (unsigned __int16)*(_DWORD *)v10;
    if ( HIBYTE(*(_DWORD *)v10) )
    {
      if ( (unsigned __int16)*(_DWORD *)v10 )
      {
        v14 = *((_DWORD *)v6 + 82);
        v15 = v3 >> v14;
        v16 = *((_DWORD *)v6 + 83);
        v17 = *((unsigned int *)v6 + 86);
        v48 = v16;
        v52 = *((_DWORD *)a1 + 84) * (v3 & v16);
        do
        {
          _BitScanReverse((unsigned int *)&v18, v15);
          v19 = *(_DWORD *)&v10[4 * ((v13 + v11) >> 1) + 16];
          v20 = v19 >> v14;
          _BitScanReverse((unsigned int *)&v21, v20);
          v22 = *(_DWORD *)(*(_QWORD *)&a1[v21 + 8][16 * (v20 ^ (unsigned int)(1 << v21))]
                          + *((_DWORD *)a1 + 84) * (v48 & v19)
                          + v17
                          + 8);
          v23 = *(_QWORD *)&a1[v18 + 8][16 * (v15 ^ (unsigned __int64)(unsigned int)(1 << v18))];
          if ( v22 >= *(_DWORD *)(v23 + v52 + v17 + 8) && (v22 > *(_DWORD *)(v23 + v52 + v17 + 8) || v19 >= v58) )
            v13 = (v13 + v11) >> 1;
          else
            v11 = (v13 + v11) >> 1;
        }
        while ( v11 + 1 != v13 );
LABEL_11:
        v6 = a1;
        v9 = v53;
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      v37 = *((_DWORD *)v6 + 82);
      v38 = *((_DWORD *)v6 + 83);
      v39 = *((unsigned int *)v6 + 86);
      v40 = v3 >> v37;
      v51 = v37;
      v50 = v38;
      v49 = *((_DWORD *)a1 + 84);
      v54 = v49 * (v3 & v38);
      do
      {
        _BitScanReverse((unsigned int *)&v41, v40);
        v42 = *(_DWORD *)&v10[16 * ((v13 + v11) >> 1) + 16];
        v43 = v42 >> v37;
        _BitScanReverse((unsigned int *)&v44, v43);
        v45 = *(_DWORD *)(*(_QWORD *)&a1[v44 + 8][16 * (v43 ^ (unsigned int)(1 << v44))] + v49 * (v50 & v42) + v39 + 8);
        v46 = *(_QWORD *)&a1[v41 + 8][16 * (v40 ^ (unsigned __int64)(unsigned int)(1 << v41))];
        if ( v45 >= *(_DWORD *)(v46 + v54 + v39 + 8) && (v45 > *(_DWORD *)(v46 + v54 + v39 + 8) || v42 > v58) )
          v13 = (v13 + v11) >> 1;
        else
          v11 = (v13 + v11) >> 1;
        LOBYTE(v37) = v51;
      }
      while ( v11 + 1 != v13 );
      goto LABEL_11;
    }
    if ( v10[3] )
      break;
    if ( v47 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v13 + 16];
      v9 += 2;
      v53 = v9;
    }
    if ( v13 )
      v12 = (void **)&v10[16 * v13 + 8];
    else
      v12 = (void **)(v10 + 8);
    if ( *(_DWORD *)v6[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v12;
    }
    else
    {
      v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(v6 + 2),
                      v12,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v10 )
        return 3221225478LL;
    }
    v3 = v58;
  }
  v5 = a3;
  *v9 = v10;
  v24 = &v10[4 * v13 + 16];
  v9[1] = v24;
  if ( v47 )
    *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
  if ( v13 < (unsigned __int16)*(_DWORD *)v10 )
  {
    v25 = *(_DWORD *)v24;
    v26 = *((_DWORD *)v6 + 82);
    v27 = *((_DWORD *)v6 + 83);
    v28 = *((_DWORD *)v6 + 84);
    v29 = *((unsigned int *)v6 + 86);
    v30 = (unsigned int)(*(_DWORD *)v24 >> v26);
    v31 = v58 >> v26;
    _BitScanReverse((unsigned int *)&v32, v30);
    _BitScanReverse((unsigned int *)&v33, v31);
    v34 = *(_DWORD *)(*(_QWORD *)&v6[v32 + 8][16 * (v30 ^ (unsigned int)(1 << v32))] + v28 * (v27 & v25) + v29 + 8);
    v35 = *(_QWORD *)&v6[v33 + 8][16 * (v31 ^ (unsigned int)(1 << v33))] + v28 * (v58 & v27);
    if ( v34 >= *(_DWORD *)(v35 + v29 + 8) && v34 <= *(_DWORD *)(v35 + v29 + 8) && v25 >= v58 && v25 <= v58 )
      return 3221225812LL;
    v5 = a3;
  }
  v4 = a2;
  return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
           v6,
           v5,
           v4);
}
