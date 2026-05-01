/*
 * XREFs of ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804FD9E4
 * Callers:
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FA010 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ @ 0x1804FABE8 (-FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ.c)
 *     ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FD620 (-HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1804FDAE0 (-HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?SetActiveApp@GamingPosturePositioner@@UEAAJXZ @ 0x180503160 (-SetActiveApp@GamingPosturePositioner@@UEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18007E418 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___ @ 0x1804F26A4 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_f24517619e04.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804F271C (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??$HandlingViewFallback@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEA_N@Z @ 0x1804F3F88 (--$HandlingViewFallback@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEA_N@Z.c)
 *     ??$SkippedHandlingViewFallback@AEAY0BD@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BD@$$CBG@Z @ 0x1804F6470 (--$SkippedHandlingViewFallback@AEAY0BD@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAY0B.c)
 *     ?CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ @ 0x1804F97DC (-CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ @ 0x180503838 (-ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ.c)
 *     ?StartedFallbackTimer@GamingPosturePositionerTelemetryProvider@@SAXXZ @ 0x18050391C (-StartedFallbackTimer@GamingPosturePositionerTelemetryProvider@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingPosturePositioner::HandleViewFallback(GamingPosturePositioner *this, char a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 *Timer; // rax
  const WCHAR *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  char v11; // [rsp+40h] [rbp-10h]
  char v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v12 = a2;
  if ( GamingPosturePositioner::ShouldHandleViewFallback(this) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      GamingPosturePositionerTelemetryProvider::HandlingViewFallback<bool &>(&v12);
    GamingPosturePositioner::CancelViewFallbackTimer(this);
    v8 = 5000000LL;
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
      &v13,
      (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))this);
    v4 = v13;
    v13 = 0LL;
    v10[0] = v4;
    v10[1] = this;
    v11 = a2;
    v5 = winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___(
           &v14,
           (__int64)v10);
    Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                         (__int64)v9,
                         (__int64)v5,
                         (__int64)&v8);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 97, Timer);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      GamingPosturePositionerTelemetryProvider::StartedFallbackTimer();
  }
  else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    GamingPosturePositionerTelemetryProvider::SkippedHandlingViewFallback<unsigned short const (&)[19]>(v7);
  }
}
