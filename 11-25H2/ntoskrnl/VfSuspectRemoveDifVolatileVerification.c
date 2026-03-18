/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140B8B158
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x140605114 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140B7A510 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x140605220 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140B7B2FC (VfTargetDriversDisableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140B871A4 (VfThunkApplyPristineToAllSession.c)
 *     VfSuspectDifRemoveEntry @ 0x140B8A660 (VfSuspectDifRemoveEntry.c)
 */

__int64 __fastcall VfSuspectRemoveDifVolatileVerification(ULONG_PTR a1, __int64 a2)
{
  int v3; // edi

  VfTargetRecoverIoCallbacks(*(_QWORD *)(a1 + 48), a2);
  v3 = VfThunkApplyPristineToAllSession(a1);
  if ( v3 >= 0 )
  {
    VfTargetDriversDisableVerifier();
    VfSuspectDifRemoveEntry((const UNICODE_STRING *)(a1 + 88));
    ++dword_140F03AB8;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v3;
}
