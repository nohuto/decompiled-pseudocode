/*
 * XREFs of ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180047800
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007E4BC (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActIsStartedOrReachedPendState(__int64 a1, unsigned __int8 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 562);
  if ( v2 == 3 )
    return 1LL;
  if ( v2 == 2 )
    return *(_BYTE *)(a1 + 563) >= a2;
  return 0LL;
}
