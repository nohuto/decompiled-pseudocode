/*
 * XREFs of wcsstr_0 @ 0x14006E443
 * Callers:
 *     DpiGetDriverStorePath @ 0x1403BCEA0 (DpiGetDriverStorePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsstr_0(const wchar_t *Str, const wchar_t *SubStr)
{
  return wcsstr(Str, SubStr);
}
