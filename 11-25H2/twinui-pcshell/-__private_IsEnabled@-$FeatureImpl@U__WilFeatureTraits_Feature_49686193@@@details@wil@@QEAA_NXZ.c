/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805B709C
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18020AD54 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180274D70 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1802756A8 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802757B8 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282C70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _lambda_706d5b32740c4da4e698be21c17b442a_::operator() @ 0x1805A8AD8 (_lambda_706d5b32740c4da4e698be21c17b442a_--operator().c)
 *     _lambda_96ecd2df1703701600c983d4c680e5f8_::operator() @ 0x1805A8D4C (_lambda_96ecd2df1703701600c983d4c680e5f8_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805AAD50 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805AE3A0 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805B1248 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805B3640 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805B4138 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805B4500 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1805B4500.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805B5D00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805B5D00.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805ABD68 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805B1DA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
