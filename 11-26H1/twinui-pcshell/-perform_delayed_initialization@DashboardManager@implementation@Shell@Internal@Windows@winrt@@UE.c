/*
 * XREFs of ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18027AA80
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800B7AEC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801B3B58 (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801DEBF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AugmentedEntryPoint@@@details@wil@@QEAAX_.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18026DCB0 (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026DD9C (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18027A4E8 (-VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FD44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingCh.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___ @ 0x1805C37BC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--hs.c)
 *     ??$DashboardManager_BrokerCallerValueError@AEAJ@DashboardManagerTelemetry@@SAXAEAJ@Z @ 0x1805C4428 (--$DashboardManager_BrokerCallerValueError@AEAJ@DashboardManagerTelemetry@@SAXAEAJ@Z.c)
 *     ??$DashboardManager_LogBrokerCallerValue@_NAEAY0BAA@G@DashboardManagerTelemetry@@SAX$$QEA_NAEAY0BAA@G@Z @ 0x1805C446C (--$DashboardManager_LogBrokerCallerValue@_NAEAY0BAA@G@DashboardManagerTelemetry@@SAX$$QEA_NAEAY0.c)
 *     ?DashboardManager_BrokerCallerValueNotSet@DashboardManagerTelemetry@@SAXXZ @ 0x1805CEF08 (-DashboardManager_BrokerCallerValueNotSet@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4SessionType@123456@@Z @ 0x1805D9D20 (-UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@QEAA_NXZ @ 0x1805DACD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58311344@@@details@wil@@QEAA_NXZ.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805DDC68 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  LSTATUS USValueW; // eax
  DashboardTaskbarSettings *v8; // rcx
  bool v9[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE pvData[512]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (char *)this - 24;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync(
    (void (__fastcall *)(char *))((char *)this - 24),
    v9);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(v2, v9, 0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AugmentedEntryPoint>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_AugmentedEntryPoint>::GetImpl'::`2'::impl,
    1u,
    v3);
  if ( !winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization() )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent((__int64)v2, v9, 1);
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_NotifyTaskbarDashboardSettingChanged>::GetImpl'::`2'::impl,
    v4);
  winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
    (__int64)(v2 + 56),
    pcbData);
  v5 = *(_QWORD *)pcbData;
  *(_QWORD *)pcbData = 0LL;
  v13 = v5;
  v12 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___(
    &v10,
    &v12);
  v6 = DashboardTaskbarSettings::SubscribeToDaSettingChanged(v14, (__int64)&v10);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 37, v6);
  *((_QWORD *)this + 38) = v6[1];
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v13);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58311344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58311344>::GetImpl'::`2'::impl) )
  {
    memset_0(pvData, 0, sizeof(pvData));
    pcbData[0] = 512;
    USValueW = SHRegGetUSValueW(
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                 L"BrokerCaller",
                 0LL,
                 pvData,
                 pcbData,
                 0,
                 0LL,
                 0);
    LODWORD(v10) = USValueW;
    if ( USValueW )
    {
      if ( USValueW == 2 )
        DashboardManagerTelemetry::DashboardManager_BrokerCallerValueNotSet();
      else
        DashboardManagerTelemetry::DashboardManager_BrokerCallerValueError<long &>(&v10);
    }
    else
    {
      v9[0] = DashboardTaskbarSettings::GetDashboardButtonEnabled(v8);
      DashboardManagerTelemetry::DashboardManager_LogBrokerCallerValue<bool,unsigned short (&)[256]>(v9, pvData);
    }
  }
}
