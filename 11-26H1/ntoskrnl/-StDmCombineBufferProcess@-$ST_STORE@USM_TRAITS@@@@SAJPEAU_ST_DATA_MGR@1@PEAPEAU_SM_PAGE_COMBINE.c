/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1403ECB64
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403ECE60 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1403ECF00 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x1403ED224 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(
        __int64 a1,
        unsigned __int16 **a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  unsigned __int16 *v8; // rdx
  int v9; // eax
  int v10; // ebx
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rbx
  int v13; // r14d
  unsigned __int16 *v14; // r14
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  PVOID *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  _QWORD v27[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+78h] [rbp-8h]
  unsigned __int16 *v31; // [rsp+B8h] [rbp+38h]

  v4 = a1 + 88;
  v26 = 0LL;
  v6 = *(_QWORD *)(a1 + 792);
  v8 = *a2;
  v25 = 0LL;
  LODWORD(v26) = 1;
  *(_OWORD *)P = 0LL;
  DWORD2(v25) = -1;
  if ( (*(_BYTE *)(v6 + 2469) & 4) != 0 )
  {
    v30 = 0LL;
    v27[1] = v8;
    v28 = 0LL;
    v27[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v29 = 0LL;
    v9 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v6, 5, (__int64)v27, 12);
    v10 = v9;
    if ( v9 )
    {
      if ( v9 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v10 = v30;
    }
  }
  else
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v6 + 2664, v8, 0LL, a4);
  }
  if ( v10 >= 0 )
  {
    v11 = *a2;
    v12 = v11 + 4;
    v13 = (*((_DWORD *)v11 + 2) >> 4) | (*(_DWORD *)v11 << *(_DWORD *)(a1 + 804));
    if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (char **)(a1 + 64),
        (__int64 *)v4);
    *(_DWORD *)(v4 + 32) &= ~1u;
    **(_DWORD **)(a1 + 760) = v13;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                v4,
                a1 + 64,
                *(unsigned int *)(a1 + 768)) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    v14 = (unsigned __int16 *)((char *)v11 + v11[3]);
    v31 = v14;
    while ( v12 < v14 )
    {
      if ( *((_BYTE *)v12 + 7) < 0x10u )
      {
        *(_DWORD *)v12 >>= 4;
        do
        {
          v15 = *(_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                             a1 + 64,
                             v4);
          v16 = v15 >> *(_DWORD *)(a1 + 456);
          _BitScanReverse((unsigned int *)&v17, v16);
          v18 = *(unsigned int *)(a1 + 472)
              + *(_DWORD *)(a1 + 464) * (v15 & *(_DWORD *)(a1 + 460))
              + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)));
        }
        while ( (*(_DWORD *)(a1 + 800) & *(_DWORD *)v18) != *(_DWORD *)v12 );
        v14 = v31;
        if ( *(_WORD *)(v18 + 6) <= 1u )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)&v12[4 * *((unsigned __int8 *)v12 + 7) + 4] << *(_DWORD *)(a1 + 804)) | (*(_DWORD *)&v12[4 * *((unsigned __int8 *)v12 + 7) + 6] >> 4);
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      (char **)(a1 + 64),
                      *(_DWORD *)(a1 + 768),
                      (__int64)P) >= 0 )
          {
            if ( DWORD2(v25) == -1 || !DWORD2(v25) )
              v19 = &P[1];
            else
              v19 = (PVOID *)((char *)P[0] + 16 * (unsigned int)(DWORD2(v25) - 1));
            v20 = v19[1];
            v21 = (unsigned int)(*v20 >> *(_DWORD *)(a1 + 456));
            _BitScanReverse((unsigned int *)&v22, v21);
            if ( *(_WORD *)(*(unsigned int *)(a1 + 472)
                          + (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & *v20))
                          + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22)))
                          + 6LL) != 0xFFFF )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v18, v4);
          }
        }
      }
      v12 += 4 * *((unsigned __int8 *)v12 + 6) + 4;
    }
    v10 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    (char **)(a1 + 64),
    (__int64 *)P);
  if ( DWORD2(v25) != -1 && P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v10;
}
