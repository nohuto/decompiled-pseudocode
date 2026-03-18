/*
 * XREFs of VfSuspectDriversLookupName @ 0x140C20420
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140C28168 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140C20440 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
