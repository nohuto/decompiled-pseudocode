/*
 * XREFs of iswdigit @ 0x140539180
 * Callers:
 *     PfSnParsePrefetchParam @ 0x140AB05DC (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
