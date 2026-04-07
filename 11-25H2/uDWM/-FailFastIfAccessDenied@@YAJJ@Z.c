/*
 * XREFs of ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180071434
 * Callers:
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18007128C (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
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
