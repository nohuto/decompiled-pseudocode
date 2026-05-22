/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CA2E8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800CB6A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@QEAA_NXZ @ 0x1800D3584 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@d_ea_1800D3584.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18005D3A8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C81F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ISMResetCrashFix@@@detai.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v4 = a3;
  v5 = a2;
  v6 = *(_DWORD *)Feature_ISMResetCrashFix__descriptor;
  if ( (*(_DWORD *)Feature_ISMResetCrashFix__descriptor & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_ISMResetCrashFix>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v7);
    v6 = v7;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x2E7F1D9u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)va,
    v5,
    v4);
}
