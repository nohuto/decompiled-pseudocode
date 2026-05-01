/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804568D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18021E934 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18022C310 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1E48 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1804539DC (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180455028 (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804550E0 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1804551D0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180456C24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int *v4; // rdi
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  char *v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v16; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
  {
    if ( XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
      return 0LL;
  }
  else if ( *((_BYTE *)this + 1032) && !CortanaHelpers::AllowCortanaAboveLock() )
  {
    return 0LL;
  }
  v4 = (int *)((char *)this - 32);
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v6 = *((_DWORD *)this + 8);
  v12 = v6;
  v13 = (char *)this - 32;
  v14 = 1;
  if ( !v6 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((struct _TP_TIMER **)this - 4);
    *(_WORD *)((char *)this + 1027) = 0;
    *((_BYTE *)this + 1029) = 0;
    *((_DWORD *)this + 8) = 6;
    v11 = XamlLauncherState::ShowSearch((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_21;
  }
  if ( v6 == 5 )
  {
    v16 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 168LL))(*((_QWORD *)this + 7), &v16);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x595,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9);
      v8 = v10;
      goto LABEL_23;
    }
    if ( v16 )
    {
      XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this - 8));
LABEL_17:
      v14 = 0;
      StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
        &v12,
        v4 + 16);
      return 0LL;
    }
    v11 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this - 32, a2, 1);
LABEL_21:
    if ( v11 < 0 )
    {
      v8 = v11;
      goto LABEL_23;
    }
    goto LABEL_17;
  }
  if ( v6 != 7 )
    goto LABEL_17;
  *((_DWORD *)this + 8) = 8;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_17;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58E,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v7);
LABEL_23:
  v14 = 0;
  StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v12,
    v4 + 16);
  return v8;
}
