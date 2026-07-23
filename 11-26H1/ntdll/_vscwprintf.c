/*
 * XREFs of _vscwprintf @ 0x1801289A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return vscprintf_helper((__int64 (__fastcall *)(__int64 *))woutput_l, (__int64)Format);
}
