/*
 * XREFs of ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1403ECF00
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1403ECB64 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14042FB30 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

__int16 __fastcall ST_STORE<SM_TRAITS>::StDmCombinePageRecords(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  char v9; // al
  unsigned int v10; // ecx
  __int16 v11; // ax
  __int16 result; // ax
  __int64 v13; // rcx

  if ( *(_WORD *)(a2 + 6) != 1 )
    NT_ASSERT("SourcePageRecordEx->RefCount == 1");
  v8 = ((_DWORD)a4 - *(_DWORD *)(a1 + 472) - ((unsigned int)a4 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, a2);
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, a4);
  ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, a2, a3);
  *(_DWORD *)a2 = -1;
  *(_DWORD *)(a2 + 8) = v8;
  v9 = *(_BYTE *)(a1 + 2061);
  v10 = *(_DWORD *)(a1 + 2056) + 1;
  *(_DWORD *)(a1 + 2056) = v10;
  if ( (v9 & 3) == 0 && v10 > 0x400 )
  {
    v13 = *(_QWORD *)(a1 + 2064);
    *(_BYTE *)(a1 + 2061) = v9 & 0xFC | 1;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v13, 4LL, 30000LL, 4294967294LL);
  }
  v11 = *(_WORD *)(a4 + 6);
  if ( v11 == -1 )
    NT_ASSERT("TargetPageRecordEx->RefCount < ((1 << 16) - 1)");
  result = v11 + 1;
  *(_WORD *)(a4 + 6) = result;
  return result;
}
