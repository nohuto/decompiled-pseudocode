/*
 * XREFs of DxgkAcquireAdapterFdoReference @ 0x1401924F8
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkAcquireAdapterFdoReference(__int64 a1)
{
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 592;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
