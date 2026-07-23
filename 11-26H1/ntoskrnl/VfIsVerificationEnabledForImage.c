/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1406442E0
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1407C0BE8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140C27D68 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140C4DEE0 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
