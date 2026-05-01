/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix@@@details@wil@@QEAA_NXZ @ 0x1805B74F0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805B5D00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805B5D00.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805ACBB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_D_ea_1805ACBB0.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805B25B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashF.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
