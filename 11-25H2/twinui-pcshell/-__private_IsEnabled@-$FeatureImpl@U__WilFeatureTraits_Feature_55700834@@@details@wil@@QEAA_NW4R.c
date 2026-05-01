/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55700834@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18065F718
 * Callers:
 *     s_OnMeasureItem @ 0x180660D14 (s_OnMeasureItem.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55700834@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18065F214 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55700834@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55700834@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18065F5E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55700834@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55700834>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55700834>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55700834>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
