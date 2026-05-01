/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006D750
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ @ 0x18006D520 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ.c)
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18006D540 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB28C (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180243790 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803D8380 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18006DD80 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801EC0A8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802297F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaAp.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18027E58C (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::__private_IsEnabledPreCheck(
        int *a1,
        char a2)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // r9d
  unsigned int v10; // edx
  char v11[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  _BYTE v13[24]; // [rsp+68h] [rbp-18h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  __int16 v15; // [rsp+A4h] [rbp+24h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF

  LOBYTE(v16) = a2;
  v2 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v17 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetCachedFeatureEnabledState(
                       a1,
                       &v17);
    LOWORD(v2) = v17;
  }
  v15 = 3;
  v14 = 0;
  v16 = 3;
  v4 = wil_details_FeatureReporting_RecordUsageInCache(v13, a1 + 2, 2LL, 0LL);
  v5 = *(_QWORD *)(v4 + 16);
  *(_OWORD *)v11 = *(_OWORD *)v4;
  v12 = v5;
  wil::details::RecordFeatureUsageCallback(19263623LL, 2LL, v6, a1 + 2);
  if ( (v2 & 0x400) != 0 )
  {
    v10 = 2;
    if ( (v2 & 0x800) != 0 )
      v10 = -2147483646;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x125F087, v10, 0, v8, v11);
  }
  if ( !(_DWORD)v12 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v7) = 3;
      g_wil_details_realtimeFeatureUsageHook(19263623LL, 2LL, v7);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(19263623LL, &v14, 0LL, 1LL, &v16, 0LL, 0, 1LL);
  }
  return 1;
}
