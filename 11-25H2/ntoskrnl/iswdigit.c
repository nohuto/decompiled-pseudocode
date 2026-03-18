/*
 * XREFs of iswdigit @ 0x1404FC390
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140827E9C (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1404FE4B0 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
