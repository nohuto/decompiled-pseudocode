/*
 * XREFs of wil::details::ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___::_ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___ @ 0x18045C54C
 * Callers:
 *     __lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::operator()_::_1_::dtor$2 @ 0x1806C7206 (__lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1804680B4 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___::_ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 344LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1564,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
