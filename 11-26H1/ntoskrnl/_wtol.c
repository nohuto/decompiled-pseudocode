/*
 * XREFs of _wtol @ 0x140538D70
 * Callers:
 *     _wtoi @ 0x140538D50 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140AB05DC (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x14053AE14 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
