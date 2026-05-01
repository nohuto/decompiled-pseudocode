/*
 * XREFs of ?HideSearchWithArgs@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180251F80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801F0AD0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncherState::HideSearchWithArgs(XamlLauncherState *this, HSTRING a2)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 10) == 7 )
  {
    v4 = *((_QWORD *)this + 8);
    v8 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 480LL))(v4, &v8);
    if ( v5 >= 0 )
    {
      if ( !v8 )
        XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)((char *)this - 24), 0, 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x499,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 8) + 104LL))(*((_QWORD *)this + 8), a2);
}
