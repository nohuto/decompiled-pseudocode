/*
 * XREFs of ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1403ECF00 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD_EX@1@.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140641974 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  unsigned __int64 *v11; // rdi
  _QWORD *v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 i; // rsi
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  void *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = a1;
  BugCheckParameter4 = 0LL;
  v4 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&a1, v4);
  v6 = 2 * (v4 ^ (unsigned int)(1 << v5));
  v7 = *(_QWORD *)(v3 + 8 * v5 + 192);
  if ( *(_DWORD *)(v7 + 16 * (v4 ^ (unsigned int)(1 << v5)) + 12) )
  {
    v19 = rapidhash_internal(*(_QWORD *)(v7 + 16 * (v4 ^ (unsigned int)(1 << a1))), 4096LL, 0LL);
    v20 = *(void **)(v7 + 8 * v6);
    if ( !v19 )
      v19 = 1;
    if ( v19 != *(_DWORD *)(v7 + 8 * v6 + 12) )
    {
      SmPrepareForFatalHeapCorruption(v20, (__int64)&BugCheckParameter4);
      KeBugCheckEx(0x1C7u, 0LL, *(_QWORD *)(v7 + 8 * v6), *(unsigned int *)(v7 + 8 * v6 + 12), BugCheckParameter4);
    }
    ExProtectPoolEx(v20, *(_QWORD *)(v7 + 8 * v6), 4096LL, 4LL);
    *(_DWORD *)(v7 + 8 * v6 + 12) = 0;
  }
  v8 = *(_QWORD *)(v3 + 2064);
  v9 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)(v8 + 88) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)(v8 + 72) = 10000000LL;
  *(_QWORD *)(v8 + 80) = v9 + 300000000;
  result = *(unsigned int *)(v8 + 176);
  if ( (result & 1) == 0 )
  {
    if ( !v9 )
      v9 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    v11 = (unsigned __int64 *)(v8 + 120);
    v12 = (_QWORD *)v8;
    v13 = -1LL;
    for ( i = -1LL; v12 < v11; v12 += 3 )
    {
      v15 = v12[1];
      if ( v15 != -1LL )
      {
        v21 = v12[2];
        if ( v21 < v9 - *(_QWORD *)(v8 + 136) )
          v21 = v9 - *(_QWORD *)(v8 + 136);
        v22 = *v12 + v21;
        if ( v22 >= v13 )
          v22 = v13;
        v13 = v22;
        if ( v15 < i )
          i = v12[1];
      }
    }
    v16 = v9;
    v17 = v9;
    if ( v13 >= v9 )
      v16 = v13;
    if ( i >= v9 )
      v17 = i;
    *v11 = v17;
    if ( v17 == -1LL )
    {
      *(_QWORD *)(v8 + 128) = 0LL;
    }
    else
    {
      v18 = v17 - v9;
      if ( v17 >= v16 )
        v18 = v16 - v9;
      *(_QWORD *)(v8 + 128) = v18;
      if ( !v18 )
      {
        *(_QWORD *)(v8 + 128) = 1LL;
        v18 = 1LL;
      }
      v2 = v18;
    }
    result = *(_QWORD *)(v8 - 2200);
    *(_QWORD *)(result + 3072) = -v2;
  }
  return result;
}
