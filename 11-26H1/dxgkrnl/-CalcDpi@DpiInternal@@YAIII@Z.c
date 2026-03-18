/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x14005F1B0
 * Callers:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x14005F060 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x14005F0A4 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, int a2)
{
  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 56;
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Divide by zero due to 0 physical dimension.",
    56LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
