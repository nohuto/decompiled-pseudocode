/*
 * XREFs of ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140396060
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x140395C2C (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140396AB0 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403E9D34 (SmKmStoreHelperCheckWaitCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  if ( *(_QWORD *)(a1 + 3048) != a2 )
    return 1LL;
  if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 2808, a3) == -1073741536 )
  {
    *(_QWORD *)(a1 + 3048) = 0LL;
    return 1LL;
  }
  return 0LL;
}
