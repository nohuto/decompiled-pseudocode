/*
 * XREFs of ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18024A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x1800131F8 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x1800AD318 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AA44 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028CE44 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802CEF00 (-UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXX.c)
 *     ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x18039F4B8 (--$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803AD0D0 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ @ 0x1803B2620 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803B2804 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56936253@@@details@wil@@QEAA_NW4R.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::Prelaunch(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  char v3; // di
  const char *v4; // r9
  UndockedSearchAppExperienceManager *v5; // rcx
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v9; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    UndockedSearchAppExperienceManager::StartFullActivationTest((__int64)this, 4, 0, 1);
    v2 = *((_DWORD *)this + 186);
    if ( !v2 || v2 == 12 )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchRequested();
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56936253>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56936253>::GetImpl'::`2'::impl) )
      {
        v6 = UndockedSearchAppExperienceManager::MitigateSpartanSubDomains(v5);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x40E,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
      }
      winrt::hstring::hstring((winrt::hstring *)&v9, L"Hidden");
      UndockedSearchAppExperienceManager::ActivateAppAsync(
        (__int64)this,
        1,
        2,
        (winrt::hstring *)&v9,
        0,
        (unsigned __int16 *)&LocaleName);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    }
    else
    {
      SetExistingEvent(L"ShellSearchReadyEvent");
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             *((_QWORD *)this + 7));
      LOBYTE(v9) = v3;
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchSkipped<bool const &>(&v9);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55755684>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55755684>::GetImpl'::`2'::impl)
        && (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                                (char *)this + 832,
                                &v9)
                 + 281LL) = v3;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v9);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x424,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v4);
  }
  return result;
}
