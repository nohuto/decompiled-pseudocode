/*
 * XREFs of wcscat @ 0x14053A360
 * Callers:
 *     <none>
 * Callees:
 *     wcscpy @ 0x14053A3A0 (wcscpy.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 */

wchar_t *__cdecl wcscat(wchar_t *Dest, const wchar_t *Source)
{
  size_t v4; // rax

  v4 = wcslen(Dest);
  wcscpy(&Dest[v4], Source);
  return Dest;
}
