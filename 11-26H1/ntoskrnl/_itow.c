/*
 * XREFs of _itow @ 0x140538390
 * Callers:
 *     <none>
 * Callees:
 *     xtow @ 0x1405383F0 (xtow.c)
 */

wchar_t *__cdecl itow(int Value, wchar_t *Dest, int Radix)
{
  __int64 v3; // r9
  __int64 v6; // r8

  v3 = 0LL;
  v6 = 10LL;
  if ( Radix == 10 && Value < 0 )
    v3 = 1LL;
  else
    v6 = (unsigned int)Radix;
  xtow(Value, Dest, v6, v3);
  return Dest;
}
