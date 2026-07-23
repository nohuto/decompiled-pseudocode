/*
 * XREFs of ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1403ECF00 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020ECD0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020FE40 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402104F0 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordRemove(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rbp
  int v11; // eax
  __int64 v12; // rax
  int v13; // edx
  __int16 v14; // cx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  _WORD *v20; // r9
  unsigned __int64 v21; // r8
  __int64 result; // rax
  __int64 v23; // r11
  unsigned int v24; // ecx

  v6 = ((_DWORD)a2 - *(_DWORD *)(a1 + 472) - ((unsigned int)a2 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v7 = *(_DWORD *)(a1 + 112);
  if ( v7 == -1 || !v7 )
    v8 = a1 + 96;
  else
    v8 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v7 - 1);
  if ( **(_DWORD **)(v8 + 8) != v6 )
    NT_ASSERT("RegionEntry->PageRecordId == PageRecordId");
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      a1 + 128,
      a1 + 152);
  *(_DWORD *)(a1 + 184) &= ~1u;
  v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
         a1 + 64,
         a3,
         a3);
  v10 = (_QWORD *)(a1 + 152);
  if ( v9 < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  if ( (*(_DWORD *)(a1 + 776) & 0x100000) != 0 )
  {
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
                a1 + 128,
                v6,
                a1 + 152) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    v11 = *(_DWORD *)(a1 + 176);
    if ( v11 == -1 || !v11 )
      v12 = a1 + 160;
    else
      v12 = *v10 + 16LL * (unsigned int)(v11 - 1);
    if ( **(_DWORD **)(v12 + 8) != v6 )
      NT_ASSERT("HashEntry->PageRecordId == PageRecordId");
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
                a1 + 128,
                v10) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
  v13 = *(_DWORD *)(a1 + 816);
  v14 = *(_WORD *)(a2 + 4);
  if ( (v14 & 0xFFF) != 0 )
  {
    v15 = v14 & 0xFFF;
  }
  else
  {
    v15 = 4096;
    v13 = 0;
  }
  v16 = *(_QWORD *)(a1 + 1368);
  v17 = v15 + 15 + v13;
  v18 = (unsigned int)(*(_DWORD *)a2 >> *(_DWORD *)(a1 + 804));
  v19 = *(unsigned __int16 *)(v16 + 2 * v18);
  v20 = (_WORD *)(v16 + 2 * v18);
  v17 >>= 4;
  v21 = (unsigned __int16)v19;
  v19 >>= 13;
  LOWORD(v21) = v21 & 0x1FFF;
  *v20 -= v17;
  result = *(_DWORD *)(a1 + 8 * v19 + 1996) - v17;
  v23 = 2 * (v19 + 89);
  *(_DWORD *)(a1 + 8 * v19 + 1996) = result;
  if ( *(_DWORD *)(a1 + 16 * (v19 + 89)) != (_DWORD)v18 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1;
    v24 = *v20 & 0x1FFF;
    if ( (unsigned __int16)v21 < (unsigned int)result && (_WORD)v21 )
    {
      if ( v24 >= (unsigned int)result || (*v20 & 0x1FFF) == 0 )
      {
        --*(_DWORD *)(a1 + 1408);
        result = v18 & 7;
        *(_BYTE *)(*(_QWORD *)(a1 + 1400) + (v18 >> 3)) |= 1 << result;
      }
    }
    else if ( v24 < (unsigned int)result && (*v20 & 0x1FFF) != 0 )
    {
      result = v18 & 7;
      v21 = *(_QWORD *)(a1 + 1400) + (v18 >> 3);
      *(_BYTE *)v21 &= ~(1 << result);
      ++*(_DWORD *)(a1 + 1408);
    }
  }
  if ( (*v20 & 0x1FFF) == 0 && (_DWORD)v18 != *(_DWORD *)(a1 + 8 * v23) )
    return ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v18, v21);
  return result;
}
