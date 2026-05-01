/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18069A398
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18068FC1C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePin.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18068FD20 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing__ea_18068FD20.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18031CC28 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031DDEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
