/*
 * XREFs of ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801E0340
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___::Invoke @ 0x1801E0320 (CAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___--Invoke.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1802245BC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___::_ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___ @ 0x1802C580C (wil--details--ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___--_ScopeExitFn__lambda_7e18.c)
 *     ?DestroyWindowInternal@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180581570 (-DestroyWindowInternal@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 185) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 96LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 4));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x144,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        (const char *)(unsigned int)v4);
  }
  if ( !DestroyWindow(*((HWND *)this + 4)) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x147,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v2);
  *((_QWORD *)this + 4) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 152LL))(v3, *((_QWORD *)this + 19));
}
