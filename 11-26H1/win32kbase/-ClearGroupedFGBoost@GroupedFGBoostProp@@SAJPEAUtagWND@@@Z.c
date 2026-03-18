/*
 * XREFs of ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1400DE4D0
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDD10 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1400DDE5C (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE160 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1400DE540 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1400DE584 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 */

__int64 __fastcall GroupedFGBoostProp::ClearGroupedFGBoost(struct _KTHREAD ***a1, int a2, int a3)
{
  int v4; // r8d
  GroupedFGBoostProp *v6; // rbx
  GroupedFGBoostProp *v7; // [rsp+30h] [rbp+8h] BYREF

  LockRefactorStagingAssertOwned(a1[18], a2, a3);
  v7 = 0LL;
  if ( !CWindowProp::GetProp<GroupedFGBoostProp>((__int64)a1, (__int64 *)&v7, v4) )
    return 3221225485LL;
  v6 = v7;
  if ( *((_QWORD *)v7 + 4) )
  {
    GroupedFGBoostProp::doImmediateBoostAll((__int64)v7, 0);
    GroupedFGBoostProp::deRefAll(v6);
    GroupedFGBoostProp::cleanUpAndReplace(v6, 0, 0LL);
  }
  return 0LL;
}
