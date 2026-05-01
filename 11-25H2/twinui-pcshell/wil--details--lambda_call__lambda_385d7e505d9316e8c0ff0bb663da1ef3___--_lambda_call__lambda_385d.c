/*
 * XREFs of wil::details::lambda_call__lambda_385d7e505d9316e8c0ff0bb663da1ef3___::_lambda_call__lambda_385d7e505d9316e8c0ff0bb663da1ef3___ @ 0x180417074
 * Callers:
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180144BC0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 *     _UwpWindowEventDispatcher::UwpWindowShowRequested_::_1_::dtor$11 @ 0x1806AE9E3 (_UwpWindowEventDispatcher--UwpWindowShowRequested_--_1_--dtor$11.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::lambda_call__lambda_385d7e505d9316e8c0ff0bb663da1ef3___::_lambda_call__lambda_385d7e505d9316e8c0ff0bb663da1ef3___(
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
        (void *)0x5BB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
