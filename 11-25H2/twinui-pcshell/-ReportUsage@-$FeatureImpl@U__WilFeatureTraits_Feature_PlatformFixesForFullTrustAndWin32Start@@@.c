/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EAB18
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802ED9D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NXZ @ 0x1802EDA10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFull_ea_1802EDA10.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E69A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrus.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v4 = a3;
  v6 = *(_DWORD *)a1;
  v7 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v11 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::GetCachedFeatureEnabledState(
             a1,
             v8);
    v6 = v11;
  }
  v9 = 0;
  v10 = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x2EFC619u, (v6 >> 10) & 1, (v6 >> 11) & 1, (__int64)&v9, v7, v4);
}
