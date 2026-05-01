/*
 * XREFs of _lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AD30
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_a6b4bd61808e145dfc62d4568902935b___::Invoke @ 0x18056E3A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18056E3A0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C9E8 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18029CA8C (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ??$PointerReleased@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x1802BD754 (--$PointerReleased@I@TouchGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ @ 0x18056E738 (-IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x18056FC28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_a6b4bd61808e145dfc62d4568902935b_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
        TouchGestureProcessor **a1,
        __int64 a2,
        __int64 **a3)
{
  TouchGestureProcessor **v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  AIXPolicyHelper *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  TouchGestureProcessor **v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a2;
  v13 = a1;
  v3 = a1;
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    a3,
    &v15);
  if ( !*((_BYTE *)*v3 + 120) )
  {
    v6 = *((_QWORD *)*v3 + 4);
    v11 = 0;
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 216LL))(v6, v15);
    try
    {
      winrt::check_hresult((int *)&v14, v7, (__int64)&v11);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53455430>::GetImpl'::`2'::impl)
        && AIXPolicyHelper::IsC2DAvailableOnDevice(v8) )
      {
        v9 = *((_QWORD *)*v3 + 5);
        v11 = 0;
        v12 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 336LL))(v9, v15);
        winrt::check_hresult((int *)&v14, v10, (__int64)&v11);
      }
    }
    catch ( ... )
    {
      TouchGestureProcessor::HandleRecognizerException(*v13);
      v3 = v13;
    }
  }
  TouchGestureProcessor::PointerEventsDetector::ProcessUpEvent(
    (TouchGestureProcessor *)((char *)*v3 + 136),
    (const struct winrt::Windows::UI::Input::PointerPoint *)&v15,
    v4,
    v5);
  LODWORD(v13) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(&v15);
  TouchGestureTelemetry::PointerReleased<unsigned int>((int *)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
}
