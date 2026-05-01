/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180352790
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180358B00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180358B40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_180358B40.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180347C10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovement.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int v3; // edi
  unsigned int v5; // r8d
  unsigned int v6; // esi
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h] BYREF
  __int16 v9; // [rsp+4Ch] [rbp-1Ch]

  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v7 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetCachedFeatureEnabledState(
            a1,
            &v7);
    v5 = v7;
  }
  v8 = 0;
  v9 = 2;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x359F505u, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)&v8, v6, v3);
}
