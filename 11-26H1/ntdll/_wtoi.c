/*
 * XREFs of _wtoi @ 0x1801292E0
 * Callers:
 *     <none>
 * Callees:
 *     wcstolX @ 0x18012E294 (wcstolX.c)
 */

int __cdecl wtoi(const wchar_t *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return wcstolX(String, 0LL, 10LL, 1LL);
  return result;
}
