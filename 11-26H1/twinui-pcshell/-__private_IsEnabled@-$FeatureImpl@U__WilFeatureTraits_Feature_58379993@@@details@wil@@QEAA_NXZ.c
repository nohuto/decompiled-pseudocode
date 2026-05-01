/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAA_NXZ @ 0x1805DAD0C
 * Callers:
 *     ?evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ @ 0x18027A934 (-evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D084C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D61F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_58379993>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_58379993>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_58379993>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
