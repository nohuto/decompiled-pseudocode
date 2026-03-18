/*
 * XREFs of wcscpy @ 0x140537F20
 * Callers:
 *     wcscat @ 0x140537EE0 (wcscat.c)
 * Callees:
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Dest, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Dest, Source, 2 * v4 + 2);
  return Dest;
}
