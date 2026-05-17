/*
 * XREFs of wcsncat @ 0x18012DC10
 * Callers:
 *     <none>
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     wcsnlen @ 0x18012DD40 (wcsnlen.c)
 *     memmove @ 0x180164700 (memmove.c)
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
