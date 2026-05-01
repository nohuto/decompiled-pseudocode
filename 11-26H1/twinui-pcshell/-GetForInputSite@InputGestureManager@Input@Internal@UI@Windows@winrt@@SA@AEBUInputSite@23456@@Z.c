/*
 * XREFs of ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800B72F8
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800B6E40 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801FCD20 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180290EB0 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D670 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180389C60 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_769b61f6f6b2eb7f998a18e0401ed182_::operator() @ 0x1805CD0E0 (_lambda_769b61f6f6b2eb7f998a18e0401ed182_--operator().c)
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CD6E8 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x1800B7394 (--$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@-$factory_cache_entry@UInputGestureManag.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::UI::Internal::Input::InputSite *__fastcall winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
        const struct winrt::Windows::UI::Internal::Input::InputSite *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DBAB8;
  _InterlockedIncrement64(&qword_1808DBAB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v4,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>);
    _InterlockedDecrement64(&qword_1808DBAB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBAB8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
