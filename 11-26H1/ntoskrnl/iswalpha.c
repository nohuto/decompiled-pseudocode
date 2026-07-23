/*
 * XREFs of iswalpha @ 0x14053915C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B8618 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
