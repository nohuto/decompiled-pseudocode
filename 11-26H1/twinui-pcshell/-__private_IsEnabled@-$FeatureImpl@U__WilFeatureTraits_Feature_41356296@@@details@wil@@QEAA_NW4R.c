/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803EA618
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803EA134 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInt.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18045AAA8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180365604 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803676A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
