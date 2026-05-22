/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1080
 * Callers:
 *     ?SupportsTouch@MPCHandProcessor@@UEAA_NXZ @ 0x1800C1510 (-SupportsTouch@MPCHandProcessor@@UEAA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18005D3A8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BFAA8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInterac.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v4 = a2;
  LODWORD(v5) = *(_DWORD *)Feature_ArticulatedHand2DInteraction__descriptor;
  if ( (*(_DWORD *)Feature_ArticulatedHand2DInteraction__descriptor & 4) == 0 )
  {
    v5 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v6);
    v6 = v5;
  }
  LODWORD(v7) = 0;
  WORD2(v7) = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x1149A5Eu,
    ((unsigned int)v5 >> 10) & 1,
    ((unsigned int)v5 >> 11) & 1,
    (__int64)va,
    v4,
    3);
}
