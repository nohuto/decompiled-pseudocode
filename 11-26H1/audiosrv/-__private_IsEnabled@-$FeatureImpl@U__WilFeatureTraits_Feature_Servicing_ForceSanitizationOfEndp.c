/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAA_NXZ @ 0x18013FED4
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180090F60 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18013953C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18013BE40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
