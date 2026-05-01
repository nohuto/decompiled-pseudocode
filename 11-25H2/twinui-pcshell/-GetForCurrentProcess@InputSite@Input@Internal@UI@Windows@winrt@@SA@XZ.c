/*
 * XREFs of ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800FB944 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180209180 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180299B00 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803664C0 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803828E0 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_9b092398f928f40caadc1063cb84386c_::operator() @ 0x1805A9020 (_lambda_9b092398f928f40caadc1063cb84386c_--operator().c)
 *     _lambda_f17086a35f2f14e82d9d84ab1f41fcfa_::operator() @ 0x1805A9A44 (_lambda_f17086a35f2f14e82d9d84ab1f41fcfa_--operator().c)
 * Callees:
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FB8E4 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180225B14 (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess(__int64 a1)
{
  const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089B318);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089B318);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B318);
    v3 = _lambda_9f3d85dcc87eb6e82f004e602480a983_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
