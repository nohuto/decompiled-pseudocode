/*
 * XREFs of ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x1403968F8
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140396C10 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r11
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // ecx
  __int64 result; // rax

  v2 = *a2;
  v4 = a1;
  v5 = *(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v2) & 0x1FFF;
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 792), (unsigned int)v2) )
  {
    return 3221225599LL;
  }
  v6 = *(_DWORD *)(v4 + 808);
  if ( v5 >= (unsigned int)(3 * v6) >> 2 || v5 >= v6 - *(_DWORD *)(v4 + 812) + 1 )
    return 3221225599LL;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(v4, *((_QWORD *)a2 + 1), v2, *((_QWORD *)a2 + 1), v2, 0);
  if ( (int)result >= 0 )
    a2[1] = v5;
  return result;
}
