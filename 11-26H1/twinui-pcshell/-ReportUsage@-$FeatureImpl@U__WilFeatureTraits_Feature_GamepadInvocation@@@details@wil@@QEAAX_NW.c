/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046FDF8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1804749D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x180474A18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@_ea_180474A18.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18046CEE4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@deta.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::ReportUsage(
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
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::GetCachedFeatureEnabledState(a1, &v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x3521441u, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3);
}
