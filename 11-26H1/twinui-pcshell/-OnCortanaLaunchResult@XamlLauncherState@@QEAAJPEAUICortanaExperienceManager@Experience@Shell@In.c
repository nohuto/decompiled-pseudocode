/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180248830
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x1800518C0 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x1802104E0 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x180221CB8 (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180281E90 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180459588 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x18045965C (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ @ 0x18045D9C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ.c)
 *     ??$StartRunningWithoutCortana@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x180460320 (--$StartRunningWithoutCortana@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180460AB0 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180463284 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        int a3)
{
  char IsEnabled; // al
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  char v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF
  char v15; // [rsp+98h] [rbp+38h] BYREF

  v14 = a3;
  LODWORD(v8) = *((_DWORD *)this + 16);
  *((_QWORD *)&v8 + 1) = this;
  LODWORD(v9) = a3;
  v10 = v8;
  v11 = v9;
  v12 = 1;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_57784674>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57784674>::GetImpl'::`2'::impl);
  if ( !IsEnabled )
  {
    if ( a3 == -2147009295 || a3 == -2144927148 )
      IsEnabled = 1;
    *((_BYTE *)this + 1057) = IsEnabled;
  }
  *((_BYTE *)this + 1059) = a3 < 0;
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 968) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                            (char *)this + 968,
                            &v13)
             + 283LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v13);
  }
  if ( XamlLauncherState::IsSearchDisabledByPolicy(this) || *((_BYTE *)this + 1059) )
  {
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    SetExistingEvent(L"ShellSearchReadyEvent");
    StartWindowTelemetry::StartRunningWithoutCortana<long &>(&v14);
    if ( *((_DWORD *)this + 16) == 2 || *((_DWORD *)this + 16) == 19 )
    {
      tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
        (char *)this + 968,
        &v13);
      v6 = v13;
      *(_BYTE *)(v13 + 279) = 1;
      *(_DWORD *)(v6 + 292) = a3;
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 976) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                                (char *)this + 976,
                                &v15)
                 + 293LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(&v15);
      }
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v13);
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *((_DWORD *)this + 16) == 6 )
    {
      *((_DWORD *)this + 16) = 0;
    }
  }
  v12 = 0;
  StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
    &v10,
    (int *)this + 16,
    (int *)&v11);
  return 0LL;
}
