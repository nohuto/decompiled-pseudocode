/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@QEAA_NXZ @ 0x1806736EC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180668F68 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinT.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18066F4D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::ReportUsage(a1, v4 & 1);
  return v2;
}
