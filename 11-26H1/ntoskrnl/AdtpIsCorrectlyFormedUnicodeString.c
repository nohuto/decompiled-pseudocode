/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140475E24
 * Callers:
 *     AdtpPackageParameters @ 0x140475440 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
