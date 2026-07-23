/*
 * XREFs of _itoa @ 0x1405382D0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x14053830C (xtoa.c)
 */

char *__cdecl itoa(int Value, char *Dest, int Radix)
{
  __int64 v3; // r9
  __int64 v6; // r8

  v3 = 0LL;
  v6 = 10LL;
  if ( Radix == 10 && Value < 0 )
    v3 = 1LL;
  else
    v6 = (unsigned int)Radix;
  xtoa(Value, Dest, v6, v3);
  return Dest;
}
