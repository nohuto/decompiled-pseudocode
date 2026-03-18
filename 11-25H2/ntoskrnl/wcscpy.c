/*
 * XREFs of wcscpy @ 0x1404FD5D0
 * Callers:
 *     wcscat @ 0x1404FD590 (wcscat.c)
 * Callees:
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

wchar_t *__cdecl wcscpy(wchar_t *Dest, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Source);
  memmove(Dest, Source, 2 * v4 + 2);
  return Dest;
}
