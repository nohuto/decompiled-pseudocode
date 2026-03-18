/*
 * XREFs of RtlpValidAttributeAce @ 0x1409F4FA0
 * Callers:
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1409F4690 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     SepCheckAcl @ 0x1409F4DF0 (SepCheckAcl.c)
 * Callees:
 *     RtlpValidRelativeAttribute @ 0x1409F5010 (RtlpValidRelativeAttribute.c)
 */

bool __fastcall RtlpValidAttributeAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // eax
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && (v2 = *(unsigned __int8 *)(a1 + 9), (unsigned __int8)v2 <= 0xFu)
        && v1 >= (unsigned __int64)(unsigned int)(4 * v2 + 16) + 20
        && (unsigned __int8)RtlpValidRelativeAttribute(
                              a1 + 8 + (unsigned int)(4 * v2 + 8),
                              (unsigned int)(v1 - (4 * v2 + 8) - 8)) != 0;
  return result;
}
