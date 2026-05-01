/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag@@@details@wil@@QEAA_NXZ @ 0x18069A3D8
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18068F658 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinT.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806960B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayou.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailEmptyLayoutItemsFlag>::ReportUsage(
    a1,
    v4 & 1);
  return v2;
}
