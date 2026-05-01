/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E8F58
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ @ 0x1802E91E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C6548 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NW4Repo.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E8610 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@AEA.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::GetCachedFeatureEnabledState(a1, &v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x3639C9Au, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3);
}
