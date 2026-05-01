/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18038B330
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180245DB8 (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180388CD0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803CF3BC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18038888C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18038AB84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
