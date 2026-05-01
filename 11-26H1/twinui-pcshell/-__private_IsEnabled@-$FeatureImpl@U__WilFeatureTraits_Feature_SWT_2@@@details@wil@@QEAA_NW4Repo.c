/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E91A4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavior@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802E888C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OverlappedWindowBehavio.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E853C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_2@@@details@wil@@AEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E8ED4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_2@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_2>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_2>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_2>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
