/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing@@@details@wil@@QEAA_NXZ @ 0x1800CC790
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035C60 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     PolicyConfigSetEndpointVisibility @ 0x18008CF80 (PolicyConfigSetEndpointVisibility.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008F3B8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800CAB50 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C7F74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioS.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB0F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing@@@detai.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioSrvTracing>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
