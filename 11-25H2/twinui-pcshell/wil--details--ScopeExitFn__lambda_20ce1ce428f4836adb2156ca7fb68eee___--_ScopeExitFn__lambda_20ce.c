/*
 * XREFs of wil::details::ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___::_ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___ @ 0x180408130
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040B4C0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$7 @ 0x1806C21D9 (_WindowEventDispatcher--AppViewShowRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___::_ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 24LL))(**(_QWORD **)a1, 2147500037LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x406,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
