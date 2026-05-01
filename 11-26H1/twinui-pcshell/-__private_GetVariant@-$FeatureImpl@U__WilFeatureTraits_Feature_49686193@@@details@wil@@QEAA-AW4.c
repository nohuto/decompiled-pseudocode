/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA?AW4Variant_49686193@@W4VariantReportingKind@3@_N@Z @ 0x1805DA9A4
 * Callers:
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D21D8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D0EEC (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@AEAA-AT.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4Variant_49686193@@W4VariantReportingKind@3@_K@Z @ 0x1805D65B0 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAAX_NW4V.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_GetVariant(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::GetCachedVariantState(a1, (__int64)&v5);
  v2 = (v5 >> 12) & 0x3F;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::ReportVariantUsage(a1, 1u, v2, 2, v4);
  return v2;
}
