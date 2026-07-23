/*
 * XREFs of ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020E100
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14020F360 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
        char **a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  char **v5; // rsi
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _QWORD *v9; // r14
  char *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // r14d
  unsigned int v14; // ebp
  __int64 v15; // r11
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rcx
  void **v20; // rcx
  char *v21; // rbx
  int v22; // ecx
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r10
  unsigned int v29; // r9d
  __int64 v30; // r11
  __int64 v31; // rax
  char **v32; // r9
  unsigned int v33; // r8d
  __int64 v34; // rax
  int v36; // edx
  unsigned int v37; // ebp
  __int64 v38; // r11
  unsigned int v39; // r8d
  unsigned int v40; // r10d
  __int64 v41; // r8
  __int64 v42; // rcx
  unsigned int v43; // edi
  unsigned __int64 v44; // rbx
  __int64 Pool3; // rax
  void *v46; // rsi
  unsigned int v47; // r14d
  int v48; // [rsp+30h] [rbp-78h]
  unsigned int v49; // [rsp+34h] [rbp-74h]
  unsigned int v50; // [rsp+38h] [rbp-70h]
  _QWORD *v51; // [rsp+48h] [rbp-60h]
  unsigned int v55; // [rsp+C8h] [rbp+20h]

  v3 = *a2;
  v4 = a3;
  v55 = *a2;
  v5 = a1;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1,
    a3);
  if ( *(_DWORD *)(v4 + 24) == -1 )
  {
    v6 = 0;
    v9 = (_QWORD *)(v4 + 8);
    v48 = 0;
  }
  else
  {
    v6 = 1;
    v48 = 1;
    v7 = 0;
    if ( *v5 )
      v7 = (unsigned __int8)(*v5)[2];
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 < v7 )
    {
      v43 = 2 * v8;
      if ( 2 * v8 < 8 )
        v43 = 8;
      if ( v7 >= v43 )
      {
        v43 = v7 + 8;
        if ( v7 + 8 < v7 )
          return 3221225626LL;
      }
      v44 = 16LL * v43;
      if ( v44 > 0xFFFFFFFF )
        return 3221225626LL;
      Pool3 = ExAllocatePool3(64LL, (unsigned int)v44, 1916890483LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
      v46 = (void *)Pool3;
      if ( !Pool3 )
        return 3221225626LL;
      v47 = 16 * *(_DWORD *)(v4 + 28);
      memset_0((void *)(Pool3 + v47), 0, (unsigned int)v44 - v47);
      if ( v47 )
      {
        memmove(v46, *(const void **)v4, v47);
        ExFreePoolWithTag(*(PVOID *)v4, 0);
      }
      *(_QWORD *)v4 = v46;
      v6 = 1;
      v5 = a1;
      *(_DWORD *)(v4 + 28) = v43;
    }
    v9 = *(_QWORD **)v4;
  }
  v10 = *v5;
  v51 = v9;
  if ( *v5 )
  {
    while ( 1 )
    {
      v11 = -1;
      v12 = (unsigned __int16)*(_DWORD *)v10;
      if ( HIBYTE(*(_DWORD *)v10) )
        break;
      if ( (unsigned __int16)*(_DWORD *)v10 )
      {
        v36 = *((_DWORD *)v5 + 98);
        v37 = v3 >> v36;
        v50 = *((_DWORD *)v5 + 99);
        do
        {
          _BitScanReverse((unsigned int *)&v38, v37);
          v39 = *(_DWORD *)&v10[16 * ((v12 + v11) >> 1) + 16];
          v40 = *((_DWORD *)v5 + 100) * (v50 & v39);
          v41 = v39 >> v36;
          _BitScanReverse((unsigned int *)&v42, v41);
          if ( *(_DWORD *)(*(_QWORD *)&a1[v42 + 16][16 * (v41 ^ (unsigned int)(1 << v42))]
                         + v40
                         + *((unsigned int *)v5 + 102)) > *(_DWORD *)(*(_QWORD *)&a1[v38 + 16][16
                                                                                             * (v37 ^ (unsigned __int64)(unsigned int)(1 << v38))]
                                                                    + *((_DWORD *)v5 + 100) * (v55 & v50)
                                                                    + *((unsigned int *)v5 + 102)) )
            v12 = (v12 + v11) >> 1;
          else
            v11 = (v12 + v11) >> 1;
          v36 = *((_DWORD *)v5 + 98);
        }
        while ( v11 + 1 != v12 );
LABEL_13:
        v3 = v55;
        v5 = a1;
        v4 = a3;
        v9 = v51;
      }
LABEL_14:
      if ( v10[3] )
      {
        *v9 = v10;
        v21 = &v10[4 * v12 + 16];
        v9[1] = v21;
        if ( v48 )
          *(_DWORD *)(v4 + 24) = (((__int64)v9 - *(_QWORD *)v4) >> 4) + 1;
        if ( v12 >= (unsigned __int16)*(_DWORD *)v10 )
        {
          v32 = a1;
        }
        else
        {
          v22 = *((_DWORD *)v5 + 98);
          v23 = *((_DWORD *)v5 + 99);
          v24 = *(_DWORD *)v21;
          v25 = *((_DWORD *)v5 + 100);
          v26 = *((unsigned int *)v5 + 102);
          v27 = v24 >> v22;
          v28 = v55 >> v22;
          _BitScanReverse(&v29, v27);
          _BitScanReverse((unsigned int *)&v30, v28);
          v31 = v29;
          LOBYTE(v22) = v29;
          v32 = a1;
          v33 = *(_DWORD *)(*(_QWORD *)&a1[v31 + 16][16 * (v27 ^ (unsigned int)(1 << v22))] + v25 * (v24 & v23) + v26);
          v34 = *(_QWORD *)&a1[v30 + 16][16 * (v28 ^ (unsigned int)(1 << v30))] + v25 * (v55 & v23);
          if ( v33 >= *(_DWORD *)(v34 + v26) && v33 <= *(_DWORD *)(v34 + v26) )
            return 3221225812LL;
        }
        return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
                 v32,
                 v4,
                 a2);
      }
      if ( v48 )
      {
        *v9 = v10;
        v9[1] = &v10[16 * v12 + 16];
        v9 += 2;
        v51 = v9;
      }
      if ( v12 )
        v20 = (void **)&v10[16 * v12 + 8];
      else
        v20 = (void **)(v10 + 8);
      if ( *(_DWORD *)v5[2] == -1 || v10[2] != 2 )
      {
        v10 = (char *)*v20;
      }
      else
      {
        v10 = (char *)NP_CONTEXT::NpLeafRefInternal(
                        (struct NP_CONTEXT::NP_CTX *)(v5 + 2),
                        v20,
                        2 * (*(_BYTE *)(v4 + 32) & 1u));
        if ( !v10 )
          return 3221225478LL;
      }
    }
    if ( !(unsigned __int16)*(_DWORD *)v10 )
      goto LABEL_14;
    v13 = *((_DWORD *)v5 + 98);
    v14 = v3 >> v13;
    v49 = *((_DWORD *)v5 + 99);
    do
    {
      _BitScanReverse((unsigned int *)&v15, v14);
      v16 = *(_DWORD *)&v10[4 * ((v12 + v11) >> 1) + 16];
      v17 = *((_DWORD *)v5 + 100) * (v49 & v16);
      v18 = v16 >> v13;
      _BitScanReverse((unsigned int *)&v19, v18);
      if ( *(_DWORD *)(*(_QWORD *)&a1[v19 + 16][16 * (v18 ^ (unsigned int)(1 << v19))]
                     + v17
                     + *((unsigned int *)v5 + 102)) >= *(_DWORD *)(*(_QWORD *)&a1[v15 + 16][16
                                                                                          * (v14 ^ (unsigned __int64)(unsigned int)(1 << v15))]
                                                                 + *((_DWORD *)v5 + 100) * (v55 & v49)
                                                                 + *((unsigned int *)v5 + 102)) )
        v12 = (v12 + v11) >> 1;
      else
        v11 = (v12 + v11) >> 1;
    }
    while ( v11 + 1 != v12 );
    goto LABEL_13;
  }
  v32 = a1;
  if ( v6 )
    return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
             v32,
             v4,
             a2);
  *v9 = 0LL;
  v9[1] = 0LL;
  return B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
           a1,
           v4,
           a2);
}
