/*
 * XREFs of VfSuspectDriversLookupName @ 0x140C2642C
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140C2E174 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140C4C854 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140C2644C (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
