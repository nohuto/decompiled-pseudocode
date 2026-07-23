/*
 * XREFs of ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14042FB30
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1403ECF00 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14042FA74 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 *v11; // r9
  _QWORD *v12; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx

  v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v6 = -1LL;
  v7 = 3LL * a2;
  if ( a4 == -1 )
  {
    v8 = -1LL;
    v9 = -1LL;
  }
  else
  {
    v8 = v5 + 10000LL * a4;
    *(_QWORD *)(a1 + 8 * v7 + 16) = v5;
    v9 = 10000LL * a3;
  }
  *(_QWORD *)(a1 + 8 * v7) = v9;
  *(_QWORD *)(a1 + 8 * v7 + 8) = v8;
  result = *(unsigned int *)(a1 + 176);
  if ( (result & 1) == 0 )
  {
    if ( !v5 )
      v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    v11 = (unsigned __int64 *)(a1 + 120);
    v12 = (_QWORD *)a1;
    for ( i = -1LL; v12 < v11; v12 += 3 )
    {
      v14 = v12[1];
      if ( v14 != -1LL )
      {
        v19 = v12[2];
        if ( v19 < v5 - *(_QWORD *)(a1 + 136) )
          v19 = v5 - *(_QWORD *)(a1 + 136);
        v20 = *v12 + v19;
        if ( v20 >= v6 )
          v20 = v6;
        v6 = v20;
        if ( v14 < i )
          i = v12[1];
      }
    }
    v15 = v5;
    v16 = v5;
    if ( v6 >= v5 )
      v15 = v6;
    if ( i >= v5 )
      v16 = i;
    *v11 = v16;
    if ( v16 == -1LL )
    {
      v18 = 0LL;
    }
    else
    {
      v17 = v16;
      v18 = v16 - v5;
      if ( v17 >= v15 )
        v18 = v15 - v5;
      *(_QWORD *)(a1 + 128) = v18;
      if ( v18 )
        goto LABEL_19;
      v18 = 1LL;
    }
    *(_QWORD *)(a1 + 128) = v18;
LABEL_19:
    result = *(_QWORD *)(a1 - 2200);
    *(_QWORD *)(result + 3072) = -v18;
  }
  return result;
}
