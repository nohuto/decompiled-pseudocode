/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ @ 0x1802E91E0
 * Callers:
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180094778 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1802245BC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E8610 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E8F58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
