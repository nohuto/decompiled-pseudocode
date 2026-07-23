/*
 * XREFs of wcscpy @ 0x18012D6D0
 * Callers:
 *     wcscat @ 0x18012D690 (wcscat.c)
 * Callees:
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Destination, Source, 2 * v4 + 2);
  return Destination;
}
