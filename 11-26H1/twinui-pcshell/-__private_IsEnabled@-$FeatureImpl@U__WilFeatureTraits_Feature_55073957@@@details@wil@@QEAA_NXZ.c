/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@QEAA_NXZ @ 0x1806A80F0
 * Callers:
 *     ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x1806A6050 (-DismissViewAnimated@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806A6190 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806A7090 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55073957>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55073957>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55073957>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
