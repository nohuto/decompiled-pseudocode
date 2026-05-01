/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802EDB40
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802E771C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@de.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E753C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartScr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EB1AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
