/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab_::_1_::catch$1 @ 0x1806B9559
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x18055DA38 (-IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  const char *v4; // r9

  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 12LL);
  if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      *(wil::details::in1diag3 **)(a2 + 88),
      (void *)0x3EA,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      *(wil::details::in1diag3 **)(a2 + 88),
      (void *)0x3EE,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
