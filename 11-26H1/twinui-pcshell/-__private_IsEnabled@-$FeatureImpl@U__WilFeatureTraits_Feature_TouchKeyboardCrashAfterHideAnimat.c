/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation@@@details@wil@@QEAA_NXZ @ 0x180474A94
 * Callers:
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1801E7838 (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18046D08C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterH.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046FF14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
