/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140C39058
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x140641520 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140C28310 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x140641628 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140C28F0C (VfTargetDriversDisableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140C353D0 (VfThunkApplyPristineToAllSession.c)
 *     VfSuspectDifRemoveEntry @ 0x140C38864 (VfSuspectDifRemoveEntry.c)
 */

__int64 __fastcall VfSuspectRemoveDifVolatileVerification(ULONG_PTR a1)
{
  int v2; // edi

  VfTargetRecoverIoCallbacks();
  v2 = VfThunkApplyPristineToAllSession(a1);
  if ( v2 >= 0 )
  {
    VfTargetDriversDisableVerifier();
    VfSuspectDifRemoveEntry((const UNICODE_STRING *)(a1 + 88));
    ++dword_140F086B8;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v2;
}
