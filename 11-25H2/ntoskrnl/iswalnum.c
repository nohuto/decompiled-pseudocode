/*
 * XREFs of iswalnum @ 0x1404FC350
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14072ABA8 (PiDrvDbFindSystemFilePathToken.c)
 *     IsEncodedAttributeChar @ 0x140787EF4 (IsEncodedAttributeChar.c)
 *     GetAttributeName @ 0x1409EA314 (GetAttributeName.c)
 * Callees:
 *     iswctype @ 0x1404FE4B0 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
