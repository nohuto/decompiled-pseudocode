/*
 * XREFs of ??$?RAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@123@@_lambda_a8f92f18f131270a1181fbecf37b830c_@@QEBA?A_PAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@234@@Z @ 0x18061D438
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_a8f92f18f131270a1181fbecf37b830c_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180626920 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Fou.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1805388C8 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Star.c)
 *     ??$CopilotHotkeyInvoked@AEBW4IMMERSIVE_HOT_KEY_ID@@PEBGIIAEBU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEBW4IMMERSIVE_HOT_KEY_ID@@$$QEAPEBG$$QEAI2AEBU_GUID@@@Z @ 0x18061DA50 (--$CopilotHotkeyInvoked@AEBW4IMMERSIVE_HOT_KEY_ID@@PEBGIIAEBU_GUID@@@CopilotHotkeyManagerTelemet.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NXZ @ 0x1806367B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_a8f92f18f131270a1181fbecf37b830c_::operator()<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriResult> const &,enum winrt::Windows::Foundation::AsyncStatus const &>(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-8h] BYREF
  int v8; // [rsp+60h] [rbp+20h] BYREF
  int v9; // [rsp+68h] [rbp+28h] BYREF

  if ( *a3 == 1 )
  {
    winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::GetResults(
      a2,
      (winrt *)&v6);
    if ( v6
      && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl) )
    {
      v8 = CopilotHotkeyManager::m_launchResultToLaunchSuccessTypeMap[(unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v6)];
      v9 = *(_DWORD *)(a1 + 40);
      v4 = (_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 32) > 7uLL )
        v4 = (_QWORD *)*v4;
      v7 = v4;
      CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID const &,unsigned short const *,unsigned int,unsigned int,_GUID const &>(
        a1,
        (unsigned int)&v7,
        (unsigned int)&v9,
        (unsigned int)&v8,
        a1 + 44);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  else if ( *a3 == 3 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(a1 + 40);
    v5 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 32) > 7uLL )
      v5 = (_QWORD *)*v5;
    v7 = v5;
    CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID const &,unsigned short const *,unsigned int,unsigned int,_GUID const &>(
      a1,
      (unsigned int)&v7,
      (unsigned int)&v9,
      (unsigned int)&v8,
      a1 + 44);
  }
}
