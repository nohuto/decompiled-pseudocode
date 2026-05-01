/*
 * XREFs of ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800B7220
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800B6E40 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801FCD20 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x180267D60 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180290EB0 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D670 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180389C60 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_769b61f6f6b2eb7f998a18e0401ed182_::operator() @ 0x1805CD0E0 (_lambda_769b61f6f6b2eb7f998a18e0401ed182_--operator().c)
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CD6E8 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B7298 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x1802169E0 (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess(__int64 a1)
{
  __int64 *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = &qword_1808DBA98;
  _InterlockedIncrement64(&qword_1808DBA98);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DBA98);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBA98);
    v3 = (__int64 *)_lambda_9f3d85dcc87eb6e82f004e602480a983_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
