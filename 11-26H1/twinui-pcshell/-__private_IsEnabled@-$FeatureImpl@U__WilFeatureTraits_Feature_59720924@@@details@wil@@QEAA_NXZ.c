/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAA_NXZ @ 0x180504DE8
 * Callers:
 *     ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1804FDAE0 (-HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB5C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502B54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59720924>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59720924>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59720924>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
