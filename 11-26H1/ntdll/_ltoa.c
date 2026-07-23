/*
 * XREFs of _ltoa @ 0x180127B60
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180127C4C (xtoa.c)
 */

char *__cdecl ltoa(int Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtoa(Value, Buffer, Radix, v3);
  return Buffer;
}
