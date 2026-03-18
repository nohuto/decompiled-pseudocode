/*
 * XREFs of iswalnum @ 0x140536CC0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B55B8 (PiDrvDbFindSystemFilePathToken.c)
 *     IsEncodedAttributeChar @ 0x140818C94 (IsEncodedAttributeChar.c)
 *     GetAttributeName @ 0x140A641BC (GetAttributeName.c)
 * Callees:
 *     iswctype @ 0x140538ED8 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
