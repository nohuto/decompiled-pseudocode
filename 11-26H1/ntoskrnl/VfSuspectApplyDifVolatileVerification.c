/*
 * XREFs of VfSuspectApplyDifVolatileVerification @ 0x140C3E79C
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140C2E174 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140C4C854 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     VfTargetReplaceIoCallbacks @ 0x14064527C (VfTargetReplaceIoCallbacks.c)
 *     VfDifCallbackReplacementRequested @ 0x14064AC58 (VfDifCallbackReplacementRequested.c)
 *     VfTargetDriversDisableVerifier @ 0x140C2EF1C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C2EFA8 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140C3B3E0 (VfThunkApplyPristineToAllSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C3B5F0 (ViThunkApplyWdmThunksCurrentSession.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

__int64 __fastcall VfSuspectApplyDifVolatileVerification(ULONG_PTR a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  int v5; // ebx

  v2 = *(_QWORD *)(a1 + 48);
  VfDriverLock(a1);
  if ( (unsigned int)VfTargetDriversEnableVerifier(v2, a2) )
  {
    _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
    _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
    v5 = ViThunkApplyWdmThunksCurrentSession(a1);
    if ( v5 >= 0 )
    {
      if ( VfDifCallbackReplacementRequested() && (v5 = VfTargetReplaceIoCallbacks(), v5 < 0) )
      {
        VfThunkApplyPristineToAllSession(a1);
        VfTargetDriversDisableVerifier();
      }
      else
      {
        ++dword_140F08A54;
        ++*(_DWORD *)(a2 + 16);
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v5 >= 0 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return (unsigned int)v5;
}
