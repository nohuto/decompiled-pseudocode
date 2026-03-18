/*
 * XREFs of SmLogConsumedPoison @ 0x1404FE354
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x140393EAC (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14063E380 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     MmStoreLogConsumedPoison @ 0x14052DEEC (MmStoreLogConsumedPoison.c)
 */

__int64 __fastcall SmLogConsumedPoison(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 )
    _InterlockedIncrement((volatile signed __int32 *)&stru_140E27B08.CurrentRunTime);
  return MmStoreLogConsumedPoison();
}
