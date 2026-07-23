/*
 * XREFs of RtlpValidAttributeAce @ 0x1409E0CF0
 * Callers:
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     SepCheckAcl @ 0x1409E0B40 (SepCheckAcl.c)
 * Callees:
 *     RtlpValidRelativeAttribute @ 0x1409E0D60 (RtlpValidRelativeAttribute.c)
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
