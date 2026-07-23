/*
 * XREFs of iswalnum @ 0x140539140
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B8618 (PiDrvDbFindSystemFilePathToken.c)
 *     IsEncodedAttributeChar @ 0x14081EEA4 (IsEncodedAttributeChar.c)
 *     GetAttributeName @ 0x140A7118C (GetAttributeName.c)
 * Callees:
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
