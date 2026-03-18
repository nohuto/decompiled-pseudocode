/*
 * XREFs of ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14009D0E0
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C5A8 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x14009C8EC (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14009D7EC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealGetProp @ 0x14003F4E0 (RealGetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<GroupedFGBoostProp>(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Prop; // rax

  v4 = *(unsigned __int16 *)(W32GetUserSessionState(a1, a2) + 42252);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v5);
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v4, 1);
  *a2 = Prop;
  return Prop != 0;
}
