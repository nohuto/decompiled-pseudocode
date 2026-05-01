/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x1805DAE00
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     _lambda_684357928b11216b6941a1297d217b63_::operator() @ 0x1805CCB58 (_lambda_684357928b11216b6941a1297d217b63_--operator().c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7800 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D0B9C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManag.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D6390 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVC.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
