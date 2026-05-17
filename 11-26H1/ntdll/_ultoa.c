/*
 * XREFs of _ultoa @ 0x180127E40
 * Callers:
 *     <none>
 * Callees:
 *     xtoa @ 0x180127EDC (xtoa.c)
 */

char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
