/*
 * XREFs of ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x14038FF58
 * Callers:
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x14038F9F0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404CC380 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14038FF90 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405120D4 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapRegion(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( (*(_BYTE *)(a1 + 2469) & 4) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, a2, a3, a4, a5);
  else
    return SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(a1, a2, a3, a4, a5);
}
