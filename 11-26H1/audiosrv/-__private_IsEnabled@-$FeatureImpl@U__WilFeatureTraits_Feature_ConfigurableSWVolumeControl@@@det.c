/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeControl@@@details@wil@@QEAA_NXZ @ 0x18011A0F0
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeControl@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180117C40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeCont.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeControl@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011955C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ConfigurableSWVolumeControl@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfigurableSWVolumeControl>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfigurableSWVolumeControl>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ConfigurableSWVolumeControl>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
