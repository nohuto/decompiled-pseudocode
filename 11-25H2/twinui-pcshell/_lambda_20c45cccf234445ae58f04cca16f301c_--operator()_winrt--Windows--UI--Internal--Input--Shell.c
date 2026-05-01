/*
 * XREFs of _lambda_20c45cccf234445ae58f04cca16f301c_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AA60
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_20c45cccf234445ae58f04cca16f301c___::Invoke @ 0x18056E340 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18056E340.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18029CA8C (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$PointerPressed@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x18056B0D0 (--$PointerPressed@I@TouchGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ?IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ @ 0x18056E738 (-IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ.c)
 *     ?ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18056EC20 (-ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x18056FC28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_20c45cccf234445ae58f04cca16f301c_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
        TouchGestureProcessor **a1,
        __int64 a2,
        __int64 **a3)
{
  __int64 v4; // rcx
  int v5; // eax
  AIXPolicyHelper *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  TouchGestureProcessor **v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  v11 = a1;
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    a3,
    &v13);
  TouchGestureProcessor::PointerEventsDetector::ProcessDownEvent(
    (TouchGestureProcessor *)((char *)*a1 + 136),
    (const struct winrt::Windows::UI::Input::PointerPoint *)&v13);
  if ( !*((_BYTE *)*a1 + 120) )
  {
    v4 = *((_QWORD *)*a1 + 4);
    v9 = 0;
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 200LL))(v4, v13);
    try
    {
      winrt::check_hresult((int *)&v12, v5, (__int64)&v9);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53455430>::GetImpl'::`2'::impl)
        && AIXPolicyHelper::IsC2DAvailableOnDevice(v6) )
      {
        v7 = *((_QWORD *)*a1 + 5);
        v9 = 0;
        v10 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 320LL))(v7, v13);
        winrt::check_hresult((int *)&v12, v8, (__int64)&v9);
      }
    }
    catch ( ... )
    {
      TouchGestureProcessor::HandleRecognizerException(*v11);
    }
  }
  LODWORD(v11) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(&v13);
  TouchGestureTelemetry::PointerPressed<unsigned int>(&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
}
