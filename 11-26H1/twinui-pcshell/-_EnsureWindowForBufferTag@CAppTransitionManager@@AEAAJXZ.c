/*
 * XREFs of ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1804E2F4C
 * Callers:
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E393C (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegisterBufferTagWindowClass@CAppTransitionManager@@AEAAXXZ @ 0x1804E369C (-_RegisterBufferTagWindowClass@CAppTransitionManager@@AEAAXXZ.c)
 */

__int64 __fastcall CAppTransitionManager::_EnsureWindowForBufferTag(CAppTransitionManager *this)
{
  HWND WindowInBand; // rax
  const char *v3; // r9
  HWND v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)this + 24) )
  {
    CAppTransitionManager::_RegisterBufferTagWindowClass(this);
    WindowInBand = (HWND)CreateWindowInBand(136315008LL, L"BufferTagWindow", &pvData, 0x80000000LL);
    v4 = WindowInBand;
    if ( !WindowInBand )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x325,
               (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
               v3);
    ShowWindow(WindowInBand, 8);
    *((_QWORD *)this + 24) = v4;
  }
  return 0LL;
}
