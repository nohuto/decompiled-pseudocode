/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ @ 0x18003E1FC
 * Callers:
 *     ??R_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x18002A658 (--R_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030298 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039B64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
