/*
 * XREFs of wcscmp_0 @ 0x14024BC0C
 * Callers:
 *     RIMGetProductString @ 0x14012FEDC (RIMGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
