/*
 * XREFs of wcscpy @ 0x18012D960
 * Callers:
 *     wcscat @ 0x18012D920 (wcscat.c)
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Destination, Source, 2 * v4 + 2);
  return Destination;
}
