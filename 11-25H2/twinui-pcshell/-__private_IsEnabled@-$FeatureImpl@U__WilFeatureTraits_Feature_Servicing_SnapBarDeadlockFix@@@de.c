/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix@@@details@wil@@QEAA_NXZ @ 0x1805916A0
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272450 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18058FBAC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadloc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180590988 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
