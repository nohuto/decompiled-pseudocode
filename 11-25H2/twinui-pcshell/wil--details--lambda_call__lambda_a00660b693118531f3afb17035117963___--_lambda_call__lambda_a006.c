/*
 * XREFs of wil::details::lambda_call__lambda_a00660b693118531f3afb17035117963___::_lambda_call__lambda_a00660b693118531f3afb17035117963___ @ 0x1804170C4
 * Callers:
 *     ?RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1800F7160 (-RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     _UwpWindowEventDispatcher::RecoverViews_::_1_::dtor$5 @ 0x1806ABDCF (_UwpWindowEventDispatcher--RecoverViews_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::lambda_call__lambda_a00660b693118531f3afb17035117963___::_lambda_call__lambda_a00660b693118531f3afb17035117963___(
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
        (void *)0x8EE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
