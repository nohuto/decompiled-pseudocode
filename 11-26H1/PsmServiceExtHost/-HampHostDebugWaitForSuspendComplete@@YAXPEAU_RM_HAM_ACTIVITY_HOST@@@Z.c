/*
 * XREFs of ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078E70
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007E394 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18001B7D8 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025520 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostDebugWaitForSuspendComplete(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx

  RmpAcquireGlobalLock();
  v2 = 1256LL;
  v3 = 1252LL;
  if ( a1 )
  {
    v2 = (__int64)a1 + 1200;
    v3 = (__int64)a1 + 1196;
  }
  while ( *(char *)v2 < 0 || *(char *)v3 >= 0 )
  {
    v4 = 1240LL;
    if ( a1 )
      v4 = (__int64)a1 + 1184;
    CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, v4, 0LL);
  }
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 83) &= ~0x10000000000000uLL;
  HampHostCheckStartPendingActivities(a1);
  HampHostReleaseLockExclusive(a1);
  RtlWakeAddressAll((char *)a1 + 664);
}
