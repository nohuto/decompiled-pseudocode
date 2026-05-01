/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@details@wil@@QEAA_NXZ @ 0x1803DCA20
 * Callers:
 *     ?IsShellSourceForBam@@YA_NXZ @ 0x1803DC450 (-IsShellSourceForBam@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803DBD74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DC8C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NTUserQoSSupportEx@@@details@wil@@QEAAX_N.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_NTUserQoSSupportEx>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NTUserQoSSupportEx>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NTUserQoSSupportEx>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
