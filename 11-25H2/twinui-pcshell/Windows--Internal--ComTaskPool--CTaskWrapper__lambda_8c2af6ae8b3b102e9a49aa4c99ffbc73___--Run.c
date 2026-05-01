/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::Run @ 0x1803DFC00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x18065A278 (-ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::Run(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ActivateApplicationForLaunch(*(_QWORD *)(a1 + 16), a2, *(_QWORD *)(a1 + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v2);
}
