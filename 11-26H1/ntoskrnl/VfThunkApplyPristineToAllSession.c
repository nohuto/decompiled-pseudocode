/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140C353D0
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3878C (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C39058 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     ViThunkApplyPristineCurrentSession @ 0x140C354B0 (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(ULONG_PTR a1)
{
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  return ViThunkApplyPristineCurrentSession(a1);
}
