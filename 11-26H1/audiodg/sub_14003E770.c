/*
 * XREFs of sub_14003E770 @ 0x14003E770
 * Callers:
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     pfnwa @ 0x14007EB40 (pfnwa.c)
 * Callees:
 *     sub_14004F7E4 @ 0x14004F7E4 (sub_14004F7E4.c)
 */

_BYTE *__fastcall sub_14003E770(_BYTE *a1)
{
  HRESULT v2; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CoInitializeEx(0LL, 0);
  if ( v2 < 0 )
    sub_14004F7E4(retaddr, 5185LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", (unsigned int)v2);
  *a1 = 1;
  return a1;
}
