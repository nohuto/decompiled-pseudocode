/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x140640700
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1407BDB88 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140C21D58 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140C47ED0 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
