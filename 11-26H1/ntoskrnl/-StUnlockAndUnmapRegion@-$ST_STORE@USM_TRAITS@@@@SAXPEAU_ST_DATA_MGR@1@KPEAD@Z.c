/*
 * XREFs of ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140392AC8
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-18h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 792);
  if ( (*(_BYTE *)(v6 + 2469) & 4) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, a2, a3, a4, v10, 1u);
  else
    SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v6, a2, a3, (_DWORD)a4);
  v9 = *(_QWORD *)(a1 + 792);
  if ( (*(_BYTE *)(v9 + 2469) & 4) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
      v9,
      v5,
      v7,
      v8,
      v10,
      (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v5) & 0xE1FF | 0x800u) >> 9);
  else
    SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v9, v5, v7, (_DWORD)v8);
}
