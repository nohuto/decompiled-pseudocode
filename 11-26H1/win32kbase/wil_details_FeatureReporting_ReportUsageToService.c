/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24
 * Callers:
 *     Feature_CddInSystemSpace__private_IsEnabledPreCheck @ 0x14000CA2C (Feature_CddInSystemSpace__private_IsEnabledPreCheck.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14002AA00 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     Feature_ID51538523__private_IsEnabledPreCheck @ 0x140162568 (Feature_ID51538523__private_IsEnabledPreCheck.c)
 *     Feature_Vail__private_IsEnabledPreCheck @ 0x1401BDD04 (Feature_Vail__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x1401BDD74 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401C6258 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401D6CB4 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x140210EE0 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?LoadAndConnectRustCode@@YAJXZ @ 0x1402F34D4 (-LoadAndConnectRustCode@@YAJXZ.c)
 * Callees:
 *     wil_details_MapReportingKind @ 0x1400BCEB8 (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1400BCF54 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  unsigned int v7; // eax
  __int64 v8; // r10
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v10; // [rsp+30h] [rbp-28h]
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a2 & 1;
  v7 = wil_details_MapReportingKind(a3, a2 & 1);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v8,
                                                                                                     v7);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v10 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v5, &v11, 0LL, v10, a4);
    }
  }
  return result;
}
