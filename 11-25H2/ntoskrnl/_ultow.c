/*
 * XREFs of _ultow @ 0x1404FB630
 * Callers:
 *     AdtpBuildUlongString @ 0x140A976F4 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1404FB654 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
