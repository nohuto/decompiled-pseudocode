/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic@@@details@wil@@QEAA_NXZ @ 0x18013FE98
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180090378 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180139468 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportT.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18013BDB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AddRawSupportToBtleMic>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
