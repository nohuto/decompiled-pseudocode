/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180384320
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180251798 (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180381270 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180380784 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803837EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
