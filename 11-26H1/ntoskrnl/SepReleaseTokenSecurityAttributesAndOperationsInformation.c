/*
 * XREFs of SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140AC3A28
 * Callers:
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 * Callees:
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140AC3A68 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReleaseTokenSecurityAttributesAndOperationsInformation(PVOID *P, char a2)
{
  if ( a2 )
  {
    ExFreePoolWithTag(P[1], 0);
    if ( *P )
      SepFreeCapturedTokenSecurityAttributesInformation(*P);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
