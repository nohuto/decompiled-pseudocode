/*
 * XREFs of wcscat @ 0x140537EE0
 * Callers:
 *     <none>
 * Callees:
 *     wcscpy @ 0x140537F20 (wcscpy.c)
 *     wcslen @ 0x1405380A0 (wcslen.c)
 */

wchar_t *__cdecl wcscat(wchar_t *Dest, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Dest);
  wcscpy(&Dest[v4], Source);
  return Dest;
}
