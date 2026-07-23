/*
 * XREFs of _vswprintf @ 0x1801289C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vswprintf(wchar_t *const Buffer, const wchar_t *const Format, va_list ArgList)
{
  va_list v4; // [rsp+28h] [rbp+28h]

  return vswprintf_l(Buffer, (const size_t)Format, 0LL, (const _locale_t)ArgList, v4);
}
