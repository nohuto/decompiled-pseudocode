/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x140604200
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x140733664 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140B7384C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B7A65C (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
