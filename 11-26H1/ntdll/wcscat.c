/*
 * XREFs of wcscat @ 0x18012D920
 * Callers:
 *     <none>
 * Callees:
 *     wcscpy @ 0x18012D960 (wcscpy.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

wchar_t *__cdecl wcscat(wchar_t *Destination, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Destination);
  wcscpy(&Destination[v4], Source);
  return Destination;
}
