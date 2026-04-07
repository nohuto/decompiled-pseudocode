/*
 * XREFs of ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800626B0
 * Callers:
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x1800624F0 (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall FailFastIfAccessDenied(unsigned int a1)
{
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a1 == -2147024891 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -2147024891;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a1;
}
