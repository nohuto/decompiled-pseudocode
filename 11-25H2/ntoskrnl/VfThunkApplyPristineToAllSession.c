/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140B871A4
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B8A588 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B8B158 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     ViThunkApplyPristineCurrentSession @ 0x140B87314 (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(ULONG_PTR a1)
{
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  return ViThunkApplyPristineCurrentSession(a1);
}
