/*
 * XREFs of _i64toa @ 0x180127AF0
 * Callers:
 *     <none>
 * Callees:
 *     x64toa @ 0x180127BD0 (x64toa.c)
 */

char *__cdecl i64toa(__int64 Value, char *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  x64toa(Value, Buffer, Radix, v3);
  return Buffer;
}
