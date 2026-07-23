/*
 * XREFs of _itow @ 0x180127CF0
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x180127E38 (xtow.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Buffer, int Radix)
{
  __int64 v3; // r9
  __int64 v6; // r8

  v3 = 0LL;
  v6 = 10LL;
  if ( Radix == 10 && Value < 0 )
    v3 = 1LL;
  else
    v6 = (unsigned int)Radix;
  xtow(Value, Buffer, v6, v3);
  return Buffer;
}
