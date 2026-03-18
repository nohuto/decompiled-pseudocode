/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x1408030A0
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140CC5994 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAceEx(int a1, int a2, int a3, int a4, void *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
