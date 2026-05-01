/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180254A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801F0AD0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18021E934 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18022C310 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1E48 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1804535E0 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180455028 (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804550E0 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180456C24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  char *v4; // rdi
  int v6; // edx
  unsigned int v7; // esi
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  const wchar_t *StringRawBuffer; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  char *v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v18; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
  {
    if ( !XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
      goto LABEL_3;
    return 0LL;
  }
  if ( *((_BYTE *)this + 1032) && !(unsigned __int8)CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
LABEL_3:
  v4 = (char *)this - 32;
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  *(_WORD *)((char *)this + 1027) = 0;
  v6 = *((_DWORD *)this + 8);
  v14 = v6;
  v15 = (char *)this - 32;
  v7 = 1;
  v16 = 1;
  if ( v6 )
  {
    if ( v6 == 5 )
    {
      if ( a2 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"QuerySource=StartSearchBox") )
            v7 = 2;
        }
      }
      v13 = XamlLauncherState::ShowSearchFromOpenStart((char *)this - 32, a2, v7);
      goto LABEL_35;
    }
    if ( v6 == 6 || v6 == 7 || v6 == 12 || v6 == 13 || v6 == 14 )
      goto LABEL_21;
    if ( v6 != 16 )
    {
      if ( v6 != 22 )
      {
LABEL_17:
        v8 = 0;
LABEL_18:
        v16 = 0;
        StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
          &v14,
          v4 + 64);
        return (unsigned int)v8;
      }
LABEL_21:
      if ( v6 == 7 )
      {
        v18 = 0;
        v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 480LL))(*((_QWORD *)this + 7), &v18);
        if ( v11 >= 0 )
        {
          if ( v18 )
          {
            XamlLauncherState::PostCortanaOrSearchVisibility(
              (XamlLauncherState *)((char *)this - 32),
              0,
              *((_QWORD *)this + 130));
            v7 = 7;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x509,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
             *((_QWORD *)this + 7),
             a2,
             v7);
      if ( v8 < 0 )
        goto LABEL_18;
      goto LABEL_17;
    }
    XamlLauncherState::BeginCortanaTelemetryTimeout((struct _TP_TIMER **)this - 4);
    *((_DWORD *)this + 8) = 17;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 8LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F9,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_37;
    }
  }
  else
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((struct _TP_TIMER **)this - 4);
    *((_BYTE *)this + 1029) = 0;
  }
  *((_DWORD *)this + 8) = 6;
  v13 = XamlLauncherState::ShowSearch((XamlLauncherState *)((char *)this - 32), a2);
LABEL_35:
  if ( v13 >= 0 )
    goto LABEL_17;
  v10 = v13;
LABEL_37:
  v16 = 0;
  StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v14,
    v4 + 64);
  return v10;
}
