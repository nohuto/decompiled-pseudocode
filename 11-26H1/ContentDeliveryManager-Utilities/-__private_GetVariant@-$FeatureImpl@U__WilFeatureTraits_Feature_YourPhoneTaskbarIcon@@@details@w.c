/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x18003E1B4
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002B40C (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030B34 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18003A0B0 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_GetVariant(
        wil::details *a1)
{
  char v2; // bl
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(a1, (__int64)&v5);
  v2 = (v5 >> 12) & 0x3F;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsage(a1, 1u, v2, 2, v4);
  return v2;
}
