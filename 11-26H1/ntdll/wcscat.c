/*
 * XREFs of wcscat @ 0x18012D690
 * Callers:
 *     <none>
 * Callees:
 *     wcscpy @ 0x18012D6D0 (wcscpy.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

wchar_t *__cdecl wcscat(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Destination);
  wcscpy(&Destination[v4], Source);
  return Destination;
}
