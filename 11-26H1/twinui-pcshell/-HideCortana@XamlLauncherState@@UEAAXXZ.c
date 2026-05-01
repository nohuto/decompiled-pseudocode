/*
 * XREFs of ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x1802464C0
 * Callers:
 *     ?WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ @ 0x180249E90 (-WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801E273C (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802013B0 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::HideCortana(XamlLauncherState *this)
{
  int *v2; // rbx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  char *v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = (int *)((char *)this - 24);
  v4 = *((_DWORD *)this + 10);
  v5 = (char *)this - 24;
  v6 = 1;
  if ( v4 == 7 )
  {
    *((_DWORD *)this + 10) = 8;
    v8 = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 480LL))(*((_QWORD *)this + 8), &v8);
    if ( v3 >= 0 )
    {
      if ( !v8 )
        XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)v2, 0, 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x497,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
  }
  v6 = 0;
  StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v4,
    v2 + 16);
}
