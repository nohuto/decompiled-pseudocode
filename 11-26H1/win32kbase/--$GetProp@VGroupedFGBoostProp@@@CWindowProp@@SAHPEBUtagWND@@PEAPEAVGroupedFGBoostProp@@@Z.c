/*
 * XREFs of ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE160
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1400DDEFC (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1400DE4D0 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealGetProp @ 0x140048AE0 (RealGetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<GroupedFGBoostProp>(__int64 a1, __int64 *a2, int a3)
{
  int v5; // ebx
  int v6; // edx
  int v7; // r8d
  __int64 Prop; // rax

  v5 = *(unsigned __int16 *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 42280);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v6, v7);
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v5, 1);
  *a2 = Prop;
  return Prop != 0;
}
