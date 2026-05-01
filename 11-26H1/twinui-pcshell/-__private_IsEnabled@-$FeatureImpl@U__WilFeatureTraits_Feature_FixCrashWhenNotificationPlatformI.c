/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled@@@details@wil@@QEAA_NXZ @ 0x1805F0F80
 * Callers:
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1805F01A0 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805EF7A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotification.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805F0468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisable.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCrashWhenNotificationPlatformIsDisabled>::ReportUsage(
    a1,
    v4 & 1);
  return v2;
}
