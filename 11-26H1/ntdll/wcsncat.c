/*
 * XREFs of wcsncat @ 0x18012D980
 * Callers:
 *     <none>
 * Callees:
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     wcsnlen @ 0x18012DAB0 (wcsnlen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

wchar_t *__cdecl wcsncat(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v6; // rdi
  size_t v7; // rbx

  v6 = &Destination[wcslen(Destination)];
  v7 = wcsnlen(Source, Count);
  memmove(v6, Source, v7 * 2);
  v6[v7] = 0;
  return Destination;
}
