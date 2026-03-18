/*
 * XREFs of FastGetProfileDword @ 0x1400AA490
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 */

int __fastcall FastGetProfileDword(const UNICODE_STRING *a1, __int64 a2, const WCHAR *a3, int a4, _DWORD *a5)
{
  return FastGetProfileDwordEx(a1, a2, a3, a4, 0, a5, 0LL);
}
