/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1804689C4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180461BF0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@de.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180460974 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadIn.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180463F1C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
