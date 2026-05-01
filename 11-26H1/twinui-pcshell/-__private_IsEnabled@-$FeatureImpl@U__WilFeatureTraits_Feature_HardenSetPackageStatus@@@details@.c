/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@@details@wil@@QEAA_NXZ @ 0x18068A474
 * Callers:
 *     ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x180689060 (-IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180688C94 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806897DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HardenSetPackageStatus>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HardenSetPackageStatus>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HardenSetPackageStatus>::ReportUsage(a1, v4 & 1);
  return v2;
}
