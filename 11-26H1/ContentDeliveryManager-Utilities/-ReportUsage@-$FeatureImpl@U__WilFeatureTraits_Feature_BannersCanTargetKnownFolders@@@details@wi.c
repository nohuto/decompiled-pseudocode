/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056F1C
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@wil@@SA_NXZ @ 0x180054080 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039F24 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800504DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFol.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v4; // edi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *(_DWORD *)a1;
  v4 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::GetCachedFeatureEnabledState(
            a1,
            &v7);
    v7 = v3;
  }
  LODWORD(v8) = 4;
  WORD2(v8) = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x1067B86u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)va,
           v4,
           3u);
}
