/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA?AW4Variant_55855747@@W4VariantReportingKind@3@_N@Z @ 0x1803BAB68
 * Callers:
 *     ?StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023F994 (-StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B2A9C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-AT.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4Variant_55855747@@W4VariantReportingKind@3@_K@Z @ 0x1803B8328 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4V.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::__private_GetVariant(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCachedVariantState(a1, (__int64)&v5);
  v2 = (v5 >> 12) & 0x3F;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::ReportVariantUsage(a1, 1u, v2, 2, v4);
  return v2;
}
