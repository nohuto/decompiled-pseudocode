/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@QEAA_NXZ @ 0x18000DEB4
 * Callers:
 *     ?HasHandheldScreenSize@@YA_NXZ @ 0x18000ADF8 (-HasHandheldScreenSize@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A4E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60704660@@@details@wil@@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CDE8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = *(_DWORD *)a1;
  v3 = v5 & 1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_60704660>::GetCachedFeatureEnabledState(a1, &v6);
    v2 = v6;
  }
  LODWORD(v5) = 0;
  WORD2(v5) = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x39E4794u, (v2 >> 10) & 1, (v2 >> 11) & 1, (__int64)&v5, v3, 3);
  return v3;
}
