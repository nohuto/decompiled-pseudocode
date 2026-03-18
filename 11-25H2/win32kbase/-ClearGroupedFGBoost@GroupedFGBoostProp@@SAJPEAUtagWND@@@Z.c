/*
 * XREFs of ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14009D7EC
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C720 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14009C850 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14009D0E0 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x14009D764 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x14009D7A8 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GroupedFGBoostProp::ClearGroupedFGBoost(struct _KTHREAD ***a1, __int64 a2)
{
  GroupedFGBoostProp *v4; // rbx
  GroupedFGBoostProp *v5; // [rsp+30h] [rbp+8h] BYREF

  LockRefactorStagingAssertOwned(a1[18], a2);
  v5 = 0LL;
  if ( !CWindowProp::GetProp<GroupedFGBoostProp>((__int64)a1, (__int64 *)&v5) )
    return 3221225485LL;
  v4 = v5;
  if ( *((_QWORD *)v5 + 4) )
  {
    GroupedFGBoostProp::doImmediateBoostAll((__int64)v5, 0);
    GroupedFGBoostProp::deRefAll(v4);
    GroupedFGBoostProp::cleanUpAndReplace(v4, 0, 0LL);
  }
  return 0LL;
}
