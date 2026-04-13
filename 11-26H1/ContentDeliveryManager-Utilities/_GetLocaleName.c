/*
 * XREFs of _GetLocaleName @ 0x18000DD78
 * Callers:
 *     _Getctype @ 0x180005C8C (_Getctype.c)
 *     _Getcvt @ 0x180005EC8 (_Getcvt.c)
 *     _Getcoll @ 0x180020F30 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(int a1)
{
  wchar_t *result; // rax

  result = _wsetlocale(a1, 0LL);
  if ( result )
  {
    if ( *result != 67 || result[1] )
      return _wcsdup(result);
    else
      return 0LL;
  }
  return result;
}
