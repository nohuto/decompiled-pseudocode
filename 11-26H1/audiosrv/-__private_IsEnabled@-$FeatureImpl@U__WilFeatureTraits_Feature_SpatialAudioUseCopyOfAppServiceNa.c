/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName@@@details@wil@@QEAA_NXZ @ 0x1801585F8
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180039E38 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180155B7C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialAudioUseCopyOfApp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801577BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName@@@det.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialAudioUseCopyOfAppServiceName>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
