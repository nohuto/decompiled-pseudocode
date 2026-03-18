/*
 * XREFs of VfSuspectApplyDifVolatileVerification @ 0x140C3878C
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140C28168 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     VfTargetReplaceIoCallbacks @ 0x14064169C (VfTargetReplaceIoCallbacks.c)
 *     VfDifCallbackReplacementRequested @ 0x140647078 (VfDifCallbackReplacementRequested.c)
 *     VfTargetDriversDisableVerifier @ 0x140C28F0C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C28F98 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140C353D0 (VfThunkApplyPristineToAllSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140C355E0 (ViThunkApplyWdmThunksCurrentSession.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
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
        ++dword_140F086B4;
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
