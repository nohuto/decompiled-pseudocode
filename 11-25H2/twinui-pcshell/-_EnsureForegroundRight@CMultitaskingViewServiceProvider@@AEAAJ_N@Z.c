/*
 * XREFs of ?_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z @ 0x1801F7EC0
 * Callers:
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180021D50 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1801F0ED0 (-_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1801F7F5C (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_EnsureForegroundRight(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  HWND ForegroundWindow; // rax
  CMultitaskingViewServiceProvider *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow
    && (dwProcessId = 0, GetWindowThreadProcessId(ForegroundWindow, &dwProcessId))
    && dwProcessId == GetCurrentProcessId()
    && !a2
    || (v6 = ForegroundStaging::SetActive((CMultitaskingViewServiceProvider *)((char *)this + 248)), v7 = v6, v6 >= 0) )
  {
    CMultitaskingViewServiceProvider::_DismissContextMenuIfPresent(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x202,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
