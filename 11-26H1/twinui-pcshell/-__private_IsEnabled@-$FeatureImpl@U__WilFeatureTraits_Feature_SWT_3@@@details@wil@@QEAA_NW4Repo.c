/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C6548
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803C2760 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHost@@@deta.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E8610 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E8F58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
