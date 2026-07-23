/*
 * XREFs of wcscpy @ 0x14053A3A0
 * Callers:
 *     wcscat @ 0x14053A360 (wcscat.c)
 * Callees:
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Dest, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Dest, Source, 2 * v4 + 2);
  return Dest;
}
