/*
 * XREFs of _itoa @ 0x180127B20
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180127C4C (xtoa.c)
 */

char *__cdecl itoa(int Value, char *Buffer, int Radix)
{
  __int64 v3; // r9
  __int64 v6; // r8

  v3 = 0LL;
  v6 = 10LL;
  if ( Radix == 10 && Value < 0 )
    v3 = 1LL;
  else
    v6 = (unsigned int)Radix;
  xtoa(Value, Buffer, v6, v3);
  return Buffer;
}
