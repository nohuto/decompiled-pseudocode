/*
 * XREFs of _ultow @ 0x1405383CC
 * Callers:
 *     AdtpBuildUlongString @ 0x140B1256C (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1405383F0 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
