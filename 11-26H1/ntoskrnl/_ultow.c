/*
 * XREFs of _ultow @ 0x140535F4C
 * Callers:
 *     AdtpBuildUlongString @ 0x140B10B2C (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x140535F70 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
