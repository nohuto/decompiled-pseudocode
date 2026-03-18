/*
 * XREFs of FastGetProfileDword @ 0x1400DF8E0
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall FastGetProfileDword(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return FastGetProfileDwordEx(a1, 0, a5, 0LL);
}
