/*
 * XREFs of _ui64toa @ 0x180127E20
 * Callers:
 *     <none>
 * Callees:
 *     x64toa @ 0x180127E60 (x64toa.c)
 */

char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  x64toa(Value, Buffer, Radix, 0LL);
  return Buffer;
}
