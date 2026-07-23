/*
 * XREFs of ?StDmpHashBytes@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z @ 0x1405269BC
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmFixSingleBitCorruption@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z @ 0x14064189C (-StDmFixSingleBitCorruption@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z.c)
 * Callees:
 *     SmStoreHashCompressedData @ 0x1405269F8 (SmStoreHashCompressedData.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpHashBytes(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 792);
  v7 = 0LL;
  result = SmStoreHashCompressedData(v4, a2, a3, &v7);
  if ( (int)result >= 0 )
    *a4 = v7;
  return result;
}
