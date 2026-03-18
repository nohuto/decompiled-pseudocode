/*
 * XREFs of iswalpha @ 0x140536CDC
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B55B8 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x140538ED8 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
