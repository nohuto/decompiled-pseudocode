/*
 * XREFs of ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803ADFE4
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18024A260 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     ?CancelDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800123D4 (-CancelDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800124EC (-CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800149D0 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800FCAA0 (-CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x1801CA6F4 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?CancelSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801F70A4 (-CancelSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180235A20 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@Z @ 0x180241220 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@-$EventSource@U-$ITy.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@1@XZ @ 0x180289CE4 (--C-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_c.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AA44 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028CE44 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C936C (--1-$test_data_control@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?CleanupViewWrapper@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802CA644 (-CleanupViewWrapper@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802CABD0 (-CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UndockedSearchAppExperienceManager_OnViewDestroyed@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802CF040 (-UndockedSearchAppExperienceManager_OnViewDestroyed@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ @ 0x1803B2620 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::OnViewDestroyed(UndockedSearchAppExperienceManager *this)
{
  char IsEnabled; // al
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnViewDestroyed((__int64)this);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 104) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_55755684>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55755684>::GetImpl'::`2'::impl);
    v3 = (char *)this + 832;
    if ( IsEnabled )
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                    (__int64)v3,
                    (__int64 *)&v5)
               + 331) = 1;
    else
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                    (__int64)v3,
                    (__int64 *)&v5)
               + 279) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>((__int64 *)&v5);
    UndockedSearchAppExperienceManager::CompleteFullActivationTest((struct _TP_TIMER **)this);
  }
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((__int64 *)this + 109) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                            (__int64)this + 872,
                            (__int64)&v5)
             + 270LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v5);
    UndockedSearchAppExperienceManager::CompleteHideTest(this);
  }
  UndockedSearchAppExperienceManager::UnboostPriority(this);
  UndockedSearchAppExperienceManager::CancelDeferredSuspensionTimer(this);
  UndockedSearchAppExperienceManager::CancelSearchAppHideRequestedTimer(this);
  UndockedSearchAppExperienceManager::CancelVisibilityChangedTimeoutTimer(this);
  UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer(this);
  UndockedSearchAppExperienceManager::CleanupViewWrapper(this);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::UI::WindowId>(
    (__int64)this + 688,
    (__int64)this,
    0LL);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
    (__int64)this + 376,
    (__int64)this);
  *((_DWORD *)this + 186) = 12;
  return 0LL;
}
