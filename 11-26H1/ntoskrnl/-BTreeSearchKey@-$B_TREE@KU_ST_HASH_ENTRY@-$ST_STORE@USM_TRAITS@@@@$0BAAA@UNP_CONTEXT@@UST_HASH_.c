/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020FE40
 * Callers:
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD_EX@1@@Z @ 0x140210840 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140462248 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  char **v5; // r13
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _QWORD *v9; // rsi
  char *v10; // rbx
  unsigned int v11; // r11d
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  __int64 v16; // r13
  __int64 v17; // r10
  unsigned int v18; // ebp
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  void **v23; // rcx
  char *v24; // r8
  unsigned int v25; // ebp
  int v26; // ecx
  int v27; // ebx
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // r11
  unsigned int v33; // r8d
  __int64 v34; // rax
  unsigned int v36; // esi
  unsigned __int64 v37; // rbx
  char *Pool3; // rbp
  unsigned int v39; // r15d
  int v40; // edx
  unsigned int v41; // r8d
  __int64 v42; // r13
  unsigned int v43; // r15d
  __int64 v44; // r10
  unsigned int v45; // ebp
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned int v48; // r9d
  __int64 v49; // rcx
  unsigned int v50; // [rsp+30h] [rbp-78h]
  int v51; // [rsp+30h] [rbp-78h]
  unsigned int v52; // [rsp+34h] [rbp-74h]
  char v53; // [rsp+38h] [rbp-70h]
  __int64 v54; // [rsp+40h] [rbp-68h]
  _QWORD *v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+50h] [rbp-58h]
  int v60; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  v4 = a3;
  v5 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v4 + 24) == -1 )
  {
    v6 = 0;
    v9 = (_QWORD *)(v4 + 8);
    v60 = 0;
  }
  else
  {
    v6 = 1;
    v60 = 1;
    v7 = 0;
    if ( *v5 )
      v7 = (unsigned __int8)(*v5)[2];
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 < v7 )
    {
      v36 = 2 * v8;
      if ( 2 * v8 < 8 )
        v36 = 8;
      if ( v7 >= v36 )
      {
        v36 = v7 + 8;
        if ( v7 + 8 < v7 )
          return 3221225626LL;
      }
      v37 = 16LL * v36;
      if ( v37 > 0xFFFFFFFF )
        return 3221225626LL;
      Pool3 = (char *)ExAllocatePool3(
                        64LL,
                        (unsigned int)v37,
                        1916890483LL,
                        &stru_140E27C48.Header.WaitListHead.Blink,
                        1);
      if ( !Pool3 )
        return 3221225626LL;
      v39 = 16 * *(_DWORD *)(v4 + 28);
      memset_0(&Pool3[v39], 0, (unsigned int)v37 - v39);
      if ( v39 )
      {
        memmove(Pool3, *(const void **)v4, v39);
        ExFreePoolWithTag(*(PVOID *)v4, 0);
      }
      *(_QWORD *)v4 = Pool3;
      v6 = 1;
      v3 = a2;
      *(_DWORD *)(v4 + 28) = v36;
    }
    v9 = *(_QWORD **)v4;
  }
  v10 = *v5;
  v55 = v9;
  if ( !*v5 )
  {
    if ( !v6 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return 3221226021LL;
  }
  while ( 1 )
  {
    v11 = -1;
    v12 = (unsigned __int16)*(_DWORD *)v10;
    if ( HIBYTE(*(_DWORD *)v10) )
    {
      if ( !(unsigned __int16)*(_DWORD *)v10 )
        goto LABEL_14;
      v13 = *((_DWORD *)v5 + 82);
      v14 = v3 >> v13;
      v15 = *((_DWORD *)v5 + 83);
      v16 = *((unsigned int *)v5 + 86);
      v50 = v15;
      v54 = *((_DWORD *)a1 + 84) * (v3 & v15);
      do
      {
        _BitScanReverse((unsigned int *)&v17, v14);
        v18 = *(_DWORD *)&v10[4 * ((v12 + v11) >> 1) + 16];
        v19 = v18 >> v13;
        _BitScanReverse((unsigned int *)&v20, v19);
        v21 = *(_DWORD *)(*(_QWORD *)&a1[v20 + 8][16 * (v19 ^ (unsigned int)(1 << v20))]
                        + *((_DWORD *)a1 + 84) * (v50 & v18)
                        + v16
                        + 8);
        v22 = *(_QWORD *)&a1[v17 + 8][16 * (v14 ^ (unsigned __int64)(unsigned int)(1 << v17))];
        if ( v21 >= *(_DWORD *)(v22 + v54 + v16 + 8) && (v21 > *(_DWORD *)(v22 + v54 + v16 + 8) || v18 >= a2) )
          v12 = (v12 + v11) >> 1;
        else
          v11 = (v12 + v11) >> 1;
      }
      while ( v11 + 1 != v12 );
      goto LABEL_13;
    }
    if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      v40 = *((_DWORD *)v5 + 82);
      v41 = *((_DWORD *)v5 + 83);
      v42 = *((unsigned int *)v5 + 86);
      v43 = v3 >> v40;
      v53 = v40;
      v52 = v41;
      v51 = *((_DWORD *)a1 + 84);
      v56 = v51 * (v3 & v41);
      do
      {
        _BitScanReverse((unsigned int *)&v44, v43);
        v45 = *(_DWORD *)&v10[16 * ((v12 + v11) >> 1) + 16];
        v46 = v45 >> v40;
        _BitScanReverse((unsigned int *)&v47, v46);
        v48 = *(_DWORD *)(*(_QWORD *)&a1[v47 + 8][16 * (v46 ^ (unsigned int)(1 << v47))] + v51 * (v52 & v45) + v42 + 8);
        v49 = *(_QWORD *)&a1[v44 + 8][16 * (v43 ^ (unsigned __int64)(unsigned int)(1 << v44))];
        if ( v48 >= *(_DWORD *)(v49 + v56 + v42 + 8) && (v48 > *(_DWORD *)(v49 + v56 + v42 + 8) || v45 > a2) )
          v12 = (v12 + v11) >> 1;
        else
          v11 = (v12 + v11) >> 1;
        LOBYTE(v40) = v53;
      }
      while ( v11 + 1 != v12 );
LABEL_13:
      v5 = a1;
      v4 = a3;
      v9 = v55;
    }
LABEL_14:
    if ( v10[3] )
      break;
    if ( v60 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v12 + 16];
      v9 += 2;
      v55 = v9;
    }
    if ( v12 )
      v23 = (void **)&v10[16 * v12 + 8];
    else
      v23 = (void **)(v10 + 8);
    if ( *(_DWORD *)v5[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v23;
      v3 = a2;
    }
    else
    {
      v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(v5 + 2),
                      v23,
                      2 * (*(_BYTE *)(v4 + 32) & 1u));
      if ( !v10 )
        return 3221225478LL;
      v3 = a2;
    }
  }
  *v9 = v10;
  v24 = &v10[4 * v12 + 16];
  v9[1] = v24;
  if ( v60 )
    *(_DWORD *)(v4 + 24) = (((__int64)v9 - *(_QWORD *)v4) >> 4) + 1;
  if ( v12 < (unsigned __int16)*(_DWORD *)v10 )
  {
    v25 = *(_DWORD *)v24;
    v26 = *((_DWORD *)v5 + 82);
    v27 = *((_DWORD *)v5 + 84);
    v28 = *((unsigned int *)v5 + 86);
    v29 = (unsigned int)(*(_DWORD *)v24 >> v26);
    v30 = a2 >> v26;
    _BitScanReverse((unsigned int *)&v31, v29);
    _BitScanReverse((unsigned int *)&v32, v30);
    v33 = *(_DWORD *)(*(_QWORD *)&v5[v31 + 8][16 * (v29 ^ (unsigned int)(1 << v31))]
                    + v27 * (v25 & *((_DWORD *)v5 + 83))
                    + v28
                    + 8);
    v34 = *(_QWORD *)&v5[v32 + 8][16 * (v30 ^ (unsigned int)(1 << v32))] + v27 * (a2 & *((_DWORD *)v5 + 83));
    if ( v33 >= *(_DWORD *)(v34 + v28 + 8) && v33 <= *(_DWORD *)(v34 + v28 + 8) && v25 >= a2 && v25 <= a2 )
      return 0LL;
  }
  return 3221226021LL;
}
