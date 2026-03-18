/*
 * XREFs of iswdigit @ 0x140536D00
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140AB290C (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x140538ED8 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
