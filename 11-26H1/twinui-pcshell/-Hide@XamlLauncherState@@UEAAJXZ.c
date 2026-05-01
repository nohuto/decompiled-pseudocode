/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180461780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801E273C (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045F680 (--$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  int *v2; // rdi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-28h] BYREF
  int *v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (int *)((char *)this - 32);
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v7 = *((_DWORD *)this + 8);
  v8 = v2;
  v9 = 1;
  if ( v7 != 7 )
    goto LABEL_10;
  *((_DWORD *)this + 8) = 8;
  v11 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 480LL))(*((_QWORD *)this + 7), &v11);
  if ( v4 >= 0 )
  {
    if ( !v11 )
      XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)v2, 0, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x563,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x567,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  else
LABEL_10:
    v6 = 0;
  v9 = 0;
  StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v7,
    v2 + 16);
  return v6;
}
