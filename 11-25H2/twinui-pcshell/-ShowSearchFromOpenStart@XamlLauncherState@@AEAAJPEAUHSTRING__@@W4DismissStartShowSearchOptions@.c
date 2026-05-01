/*
 * XREFs of ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180180C10 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802542D0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180254A30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ @ 0x180454340 (-BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180455870 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804568D0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801B6890 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BCFF0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801F0AD0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18021E934 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1E48 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180453658 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180455084 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180456C24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowSearchFromOpenStart(__int64 a1, HSTRING a2, int a3)
{
  char v6; // di
  int v7; // eax
  unsigned int v8; // r14d
  char IsSessionIdle; // al
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  _BYTE v15[8]; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  char v18; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  char v20; // [rsp+80h] [rbp+40h] BYREF
  HSTRING v21; // [rsp+88h] [rbp+48h] BYREF
  char v22; // [rsp+98h] [rbp+58h] BYREF

  v21 = a2;
  v16 = *(_DWORD *)(a1 + 64);
  v17 = a1;
  v6 = 1;
  v18 = 1;
  v22 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 80) + 136LL))(*(_QWORD *)(a1 + 80), &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6D,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7);
    v18 = 0;
    StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      &v16,
      a1 + 64);
    return v8;
  }
  v20 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
    IsSessionIdle = XamlLauncherState::IsSessionIdle((XamlLauncherState *)a1);
  else
    IsSessionIdle = *(_BYTE *)(a1 + 1064);
  if ( !IsSessionIdle
    && ((*(int (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 88) + 464LL))(*(_QWORD *)(a1 + 88), &v20) < 0 || !v20)
    || !(unsigned __int8)CortanaHelpers::AllowCortanaAboveLock()
    || !XamlLauncherState::IsStartVisible((XamlLauncherState *)(a1 + 24)) )
  {
    v6 = 0;
  }
  WindowsGetStringRawBuffer(a2, 0LL);
  if ( v22 || v6 )
  {
    v14 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
    if ( v14 < 0 )
      goto LABEL_27;
    if ( v6 )
    {
LABEL_35:
      v12 = 0;
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  v15[0] = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 88) + 136LL))(*(_QWORD *)(a1 + 88), v15);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v15[0] )
    {
      if ( a2 )
      {
        v11 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 1088), &v21);
        v12 = v11;
        if ( v11 < 0 )
        {
          v13 = 2762LL;
          goto LABEL_16;
        }
      }
      *(_DWORD *)(a1 + 64) = 12;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), 2LL);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 2765LL;
        goto LABEL_16;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 112LL))(*(_QWORD *)(a1 + 80));
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 2766LL;
        goto LABEL_16;
      }
    }
    else if ( a3 == 2 )
    {
      *(_DWORD *)(a1 + 64) = 22;
      v14 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
      if ( v14 < 0 )
        goto LABEL_27;
    }
    else
    {
      *(_DWORD *)(a1 + 64) = 14;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), 7LL);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 2793LL;
        goto LABEL_16;
      }
      XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)a1, 0, *(_QWORD *)(a1 + 1072));
      v11 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(
              *(_QWORD *)(a1 + 88),
              a2,
              7LL);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 2795LL;
        goto LABEL_16;
      }
    }
LABEL_34:
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88));
    if ( v14 >= 0 )
      goto LABEL_35;
LABEL_27:
    v12 = v14;
    goto LABEL_36;
  }
  v13 = 2690LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v11);
LABEL_36:
  v18 = 0;
  StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v16,
    a1 + 64);
  return v12;
}
