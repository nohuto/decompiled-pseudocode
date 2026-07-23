/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1403947C0 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140394DA0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1403ECB64 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x1403ED224 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1404743C4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140641974 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  char **v5; // r13
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _QWORD *v9; // r14
  char *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // r14d
  unsigned int v14; // ebp
  unsigned int v15; // ecx
  __int64 v16; // r13
  __int64 v17; // r11
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rcx
  void **v22; // rcx
  char *v23; // rbx
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // edi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // r11
  unsigned int v32; // r9d
  __int64 v33; // rcx
  int v35; // edx
  unsigned int v36; // ebp
  __int64 v37; // r11
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // edi
  unsigned __int64 v43; // rbx
  char *Pool3; // rbp
  unsigned int v45; // r14d
  unsigned int v46; // [rsp+30h] [rbp-78h]
  unsigned int v47; // [rsp+34h] [rbp-74h]
  __int64 v48; // [rsp+40h] [rbp-68h]
  _QWORD *v49; // [rsp+48h] [rbp-60h]
  int v53; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  v4 = a3;
  v5 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v4 + 24) == -1 )
  {
    v6 = 0;
    v9 = (_QWORD *)(v4 + 8);
    v53 = 0;
  }
  else
  {
    v6 = 1;
    v53 = 1;
    v7 = 0;
    if ( *v5 )
      v7 = (unsigned __int8)(*v5)[2];
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 < v7 )
    {
      v42 = 2 * v8;
      if ( 2 * v8 < 8 )
        v42 = 8;
      if ( v7 >= v42 )
      {
        v42 = v7 + 8;
        if ( v7 + 8 < v7 )
          return 3221225626LL;
      }
      v43 = 16LL * v42;
      if ( v43 > 0xFFFFFFFF )
        return 3221225626LL;
      Pool3 = (char *)ExAllocatePool3(
                        64LL,
                        (unsigned int)v43,
                        1916890483LL,
                        &stru_140E27C48.Header.WaitListHead.Blink,
                        1);
      if ( !Pool3 )
        return 3221225626LL;
      v45 = 16 * *(_DWORD *)(v4 + 28);
      memset_0(&Pool3[v45], 0, (unsigned int)v43 - v45);
      if ( v45 )
      {
        memmove(Pool3, *(const void **)v4, v45);
        ExFreePoolWithTag(*(PVOID *)v4, 0);
      }
      *(_QWORD *)v4 = Pool3;
      v6 = 1;
      v3 = a2;
      *(_DWORD *)(v4 + 28) = v42;
    }
    v9 = *(_QWORD **)v4;
  }
  v10 = *v5;
  v49 = v9;
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
        goto LABEL_15;
      v13 = *((_DWORD *)v5 + 98);
      v14 = v3 >> v13;
      v15 = *((_DWORD *)v5 + 99);
      v16 = *((unsigned int *)v5 + 102);
      v46 = v15;
      v48 = *((_DWORD *)a1 + 100) * (a2 & v15);
      do
      {
        _BitScanReverse((unsigned int *)&v17, v14);
        v18 = *(_DWORD *)&v10[4 * ((v12 + v11) >> 1) + 16];
        v19 = *((_DWORD *)a1 + 100) * (v46 & v18);
        v20 = v18 >> v13;
        _BitScanReverse((unsigned int *)&v21, v20);
        if ( *(_DWORD *)(*(_QWORD *)&a1[v21 + 16][16 * (v20 ^ (unsigned int)(1 << v21))] + v19 + v16) < *(_DWORD *)(*(_QWORD *)&a1[v17 + 16][16 * (v14 ^ (unsigned __int64)(unsigned int)(1 << v17))] + v48 + v16) )
          v11 = (v12 + v11) >> 1;
        else
          v12 = (v12 + v11) >> 1;
      }
      while ( v11 + 1 != v12 );
      v5 = a1;
      goto LABEL_14;
    }
    if ( (unsigned __int16)*(_DWORD *)v10 )
    {
      v35 = *((_DWORD *)v5 + 98);
      v36 = v3 >> v35;
      v47 = *((_DWORD *)v5 + 99);
      do
      {
        _BitScanReverse((unsigned int *)&v37, v36);
        v38 = *(_DWORD *)&v10[16 * ((v12 + v11) >> 1) + 16];
        v39 = *((_DWORD *)v5 + 100) * (v47 & v38);
        v40 = v38 >> v35;
        _BitScanReverse((unsigned int *)&v41, v40);
        if ( *(_DWORD *)(*(_QWORD *)&v5[v41 + 16][16 * (v40 ^ (unsigned int)(1 << v41))]
                       + v39
                       + *((unsigned int *)v5 + 102)) > *(_DWORD *)(*(_QWORD *)&v5[v37 + 16][16
                                                                                           * (v36 ^ (unsigned __int64)(unsigned int)(1 << v37))]
                                                                  + *((_DWORD *)v5 + 100) * (a2 & v47)
                                                                  + *((unsigned int *)v5 + 102)) )
          v12 = (v12 + v11) >> 1;
        else
          v11 = (v12 + v11) >> 1;
        v35 = *((_DWORD *)v5 + 98);
      }
      while ( v11 + 1 != v12 );
LABEL_14:
      v4 = a3;
      v9 = v49;
    }
LABEL_15:
    if ( v10[3] )
      break;
    if ( v53 )
    {
      *v9 = v10;
      v9[1] = &v10[16 * v12 + 16];
      v9 += 2;
      v49 = v9;
    }
    if ( v12 )
      v22 = (void **)&v10[16 * v12 + 8];
    else
      v22 = (void **)(v10 + 8);
    if ( *(_DWORD *)v5[2] == -1 || v10[2] != 2 )
    {
      v10 = (char *)*v22;
      v3 = a2;
    }
    else
    {
      v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(v5 + 2),
                      v22,
                      2 * (*(_BYTE *)(v4 + 32) & 1u));
      if ( !v10 )
        return 3221225478LL;
      v3 = a2;
    }
  }
  *v9 = v10;
  v23 = &v10[4 * v12 + 16];
  v9[1] = v23;
  if ( v53 )
    *(_DWORD *)(v4 + 24) = (((__int64)v9 - *(_QWORD *)v4) >> 4) + 1;
  if ( v12 < (unsigned __int16)*(_DWORD *)v10 )
  {
    v24 = *((_DWORD *)v5 + 98);
    v25 = *(_DWORD *)v23;
    v26 = *((_DWORD *)v5 + 100);
    v27 = *((unsigned int *)v5 + 102);
    v28 = v25 >> v24;
    v29 = a2 >> v24;
    _BitScanReverse((unsigned int *)&v30, v28);
    _BitScanReverse((unsigned int *)&v31, v29);
    v32 = *(_DWORD *)(*(_QWORD *)&v5[v30 + 16][16 * (v28 ^ (unsigned int)(1 << v30))]
                    + v26 * (v25 & *((_DWORD *)v5 + 99))
                    + v27);
    v33 = *(_QWORD *)&v5[v31 + 16][16 * (v29 ^ (unsigned int)(1 << v31))] + v26 * (a2 & *((_DWORD *)v5 + 99));
    if ( v32 >= *(_DWORD *)(v33 + v27) && v32 <= *(_DWORD *)(v33 + v27) )
      return 0LL;
  }
  return 3221226021LL;
}
