/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14039593C (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140392AC8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14042FB30 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v7; // r15
  unsigned int v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // r12
  __int64 v11; // r8
  __int16 v12; // cx
  unsigned int v13; // ecx
  __int64 v15; // r13
  __int64 v16; // rax

  v4 = (unsigned int)a3;
  v5 = 2 * (a2 + 89LL);
  v7 = *(unsigned int *)(a1 + 16 * (a2 + 89LL));
  if ( (_DWORD)a3 == -1 )
  {
    v8 = 0;
    v9 = -1;
    v10 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 1368);
    v16 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0LL);
    v8 = 0;
    v10 = v16;
    if ( !v16 )
      return (unsigned int)-1073741782;
    if ( v16 == -1 )
      return (unsigned int)-1073741267;
    v9 = *(_WORD *)(v15 + 2 * v4) & 0x1FFF;
    if ( (*(_WORD *)(v15 + 2 * v4) & 0x1FFF) != 0 )
      ST_STORE<SM_TRAITS>::StCompactRegions(a1, v16, v4, v16, v4, 0);
  }
  *(_DWORD *)(a1 + 8 * v5) = -1;
  if ( (_DWORD)v4 != (_DWORD)v7 && (_DWORD)v7 != -1 )
  {
    ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v7, a3, a4);
    v12 = *(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v7);
    if ( (v12 & 0x1FFF) != 0 )
    {
      v13 = v12 & 0x1FFF;
      if ( v13 < (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1 && v13 )
      {
        *(_BYTE *)((v7 >> 3) + *(_QWORD *)(a1 + 1400)) &= ~(1 << (v7 & 7));
        ++*(_DWORD *)(a1 + 1408);
      }
    }
    else
    {
      ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v7, v11);
    }
  }
  if ( (_DWORD)v4 != -1 )
  {
    if ( v9 && v9 < (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1 )
    {
      --*(_DWORD *)(a1 + 1408);
      *(_BYTE *)((v4 >> 3) + *(_QWORD *)(a1 + 1400)) |= 1 << (v4 & 7);
    }
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2064), 2LL, 5000LL, 4294967294LL);
  }
  *(_DWORD *)(a1 + 8 * v5) = v4;
  *(_DWORD *)(a1 + 8 * v5 + 4) = v9;
  *(_QWORD *)(a1 + 8 * v5 + 8) = v10;
  return v8;
}
