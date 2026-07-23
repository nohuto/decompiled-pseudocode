/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140C3B3E0
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C3F068 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     ViThunkApplyPristineCurrentSession @ 0x140C3B4C0 (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(ULONG_PTR a1)
{
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  return ViThunkApplyPristineCurrentSession(a1);
}
