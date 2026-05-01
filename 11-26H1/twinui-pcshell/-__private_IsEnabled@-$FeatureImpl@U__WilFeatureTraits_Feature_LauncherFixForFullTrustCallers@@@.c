/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E7A6C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802E1900 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@detai.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E0334 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E49C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LauncherFixForFullTrustCallers>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
