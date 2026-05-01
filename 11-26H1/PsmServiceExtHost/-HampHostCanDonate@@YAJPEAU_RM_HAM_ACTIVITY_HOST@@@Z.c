/*
 * XREFs of ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A14C
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006AAB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180032630 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostCanDonate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // ebx

  HampHostAcquireLockSharedEx(a1, 0);
  v2 = (unsigned int)HampHostHasExternalResourceAccess(a1, 28) == 0 ? 0xC0EC0005 : 0;
  HampHostReleaseLockSharedEx(a1);
  return v2;
}
