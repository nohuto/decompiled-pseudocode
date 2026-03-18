/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x140087DF0 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140137664 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x140142714 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     ?ShutdownImWorker@@YAJXZ @ 0x140149A50 (-ShutdownImWorker@@YAJXZ.c)
 *     Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck @ 0x140159D40 (Feature_DispBroker_EmulateKernelSdcReset__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1401A2124 (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 *     Feature_ID51538523__private_ReportDeviceUsage @ 0x1401A7180 (Feature_ID51538523__private_ReportDeviceUsage.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401B3254 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     Feature_Rust_GDI_REGION__private_IsEnabledPreCheck @ 0x1401C8AD4 (Feature_Rust_GDI_REGION__private_IsEnabledPreCheck.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1401F5EE8 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     wil_details_MapReportingKind @ 0x14013A730 (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14013A7CC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
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
