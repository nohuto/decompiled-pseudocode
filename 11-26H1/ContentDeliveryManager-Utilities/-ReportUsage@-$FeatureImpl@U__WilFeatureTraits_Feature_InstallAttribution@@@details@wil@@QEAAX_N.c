/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180076D48
 * Callers:
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180075F70 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800932F0 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039F24 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180075CDC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@det.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  unsigned int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v8 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::GetCachedFeatureEnabledState(
            a1,
            &v8);
    v5 = v8;
  }
  LODWORD(v9) = 0;
  WORD2(v9) = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x312BB7u,
           (v5 >> 10) & 1,
           (v5 >> 11) & 1,
           (__int64)va,
           v6,
           v3);
}
