/*
 * XREFs of VfSuspectApplyDifVolatileVerification @ 0x140B8A588
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140B7A058 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B7A270 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     VfTargetReplaceIoCallbacks @ 0x140605290 (VfTargetReplaceIoCallbacks.c)
 *     VfDifCallbackReplacementRequested @ 0x140607F98 (VfDifCallbackReplacementRequested.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfTargetDriversDisableVerifier @ 0x140B7B2FC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B7B384 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140B871A4 (VfThunkApplyPristineToAllSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140B87444 (ViThunkApplyWdmThunksCurrentSession.c)
 */

__int64 __fastcall VfSuspectApplyDifVolatileVerification(ULONG_PTR a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  int v5; // ebx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  VfDriverLock();
  if ( (unsigned int)VfTargetDriversEnableVerifier(v2, a2) )
  {
    _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
    _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
    v5 = ViThunkApplyWdmThunksCurrentSession(a1);
    if ( v5 >= 0 )
    {
      if ( VfDifCallbackReplacementRequested() && (v5 = VfTargetReplaceIoCallbacks(v2, v6), v5 < 0) )
      {
        VfThunkApplyPristineToAllSession(a1);
        VfTargetDriversDisableVerifier();
      }
      else
      {
        ++dword_140F03AB4;
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
