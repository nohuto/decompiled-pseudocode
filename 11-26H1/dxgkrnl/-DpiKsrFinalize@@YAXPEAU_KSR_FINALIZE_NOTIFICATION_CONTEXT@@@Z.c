/*
 * XREFs of ?DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z @ 0x140251AF4
 * Callers:
 *     DpiKsrCallback @ 0x140252220 (DpiKsrCallback.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DpiKsrFinalize(struct _KSR_FINALIZE_NOTIFICATION_CONTEXT *a1)
{
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1331;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != nullptr", 1331LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( dword_14016938C < 0 )
  {
    if ( *(int *)a1 >= 0 )
    {
      *(_DWORD *)a1 = dword_14016938C;
      *((_DWORD *)a1 + 2) = 1799837764;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1341;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failing the KSR Finalize",
      1342LL,
      dword_14016938C,
      0LL,
      0LL,
      0LL);
  }
  dword_14016938C = 0;
}
