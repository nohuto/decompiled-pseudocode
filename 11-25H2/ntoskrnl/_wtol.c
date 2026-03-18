/*
 * XREFs of _wtol @ 0x1404FBFB0
 * Callers:
 *     _wtoi @ 0x1404FBF90 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x140827E9C (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1404FE014 (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
