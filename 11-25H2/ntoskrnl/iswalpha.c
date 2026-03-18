/*
 * XREFs of iswalpha @ 0x1404FC36C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14072ABA8 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1404FE4B0 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
