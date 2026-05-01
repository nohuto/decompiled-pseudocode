/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@QEAA_NXZ @ 0x18045DA40
 * Callers:
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18045B640 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18045A5E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18045CF6C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149580>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149580>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149580>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
