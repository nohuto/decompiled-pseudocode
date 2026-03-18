/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x140046428
 * Callers:
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14003DAC4 (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 *     Feature_FSSM__private_ReportDeviceUsage @ 0x140044CD8 (Feature_FSSM__private_ReportDeviceUsage.c)
 *     Feature_USBEXSVP1__private_IsEnabledPreCheck @ 0x140044EA0 (Feature_USBEXSVP1__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14003279C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x14003CF98 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        char a2,
        int a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned __int64 v6; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v4 = a2 & 1;
  v5 = wil_details_MapReportingKind(a3, v4);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v8, 0LL, 0, 1LL);
  }
  return result;
}
