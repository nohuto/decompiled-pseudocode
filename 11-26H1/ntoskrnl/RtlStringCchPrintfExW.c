/*
 * XREFs of RtlStringCchPrintfExW @ 0x14044E030
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14044DEC8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140609114 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14079B830 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14079B908 (PipHardwareConfigClearStartOverrides.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1407B2298 (IopCreateLegacyDeviceIds.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14089A874 (_CmGetDevicePanelRegKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x14089F658 (DrvDbCreateDatabaseNode.c)
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14090ABAC (_PnpDeletePropertyWorker.c)
 *     _PnpStringFromGuid @ 0x14090F21C (_PnpStringFromGuid.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x14091B1B0 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1409928FC (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x140994330 (_CmGetDeviceRegKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x140995B20 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140995E20 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpGetObjectPropertyWorker @ 0x14099C0F0 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14099DD20 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409A0C40 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409A1650 (_CmGetCommonClassRegKeyPath.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140A29D40 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140AB3B94 (_PnpGetGenericStorePropertyLocales.c)
 *     PiProcessDriverInstance @ 0x140AD5550 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x140AD5814 (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140AD5A5C (PiRearrangeDeviceInstances.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140B0FF70 (RtlFormatMessageEx.c)
 *     _CmBuildDevicePanelId @ 0x140B39C14 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x14044E280 (StringExHandleOtherFlagsW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x140532B24 (RtlStringExHandleFillBehindNullW.c)
 *     _vsnwprintf @ 0x1405353B0 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS result; // eax
  const wchar_t *v10; // r8
  NTSTRSAFE_PWSTR v11; // rbp
  size_t v12; // rdi
  NTSTATUS v13; // esi
  size_t v14; // r12
  int v15; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t v17[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  result = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      result = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
  }
  if ( result >= 0 )
  {
    v10 = pszFormat;
    v11 = pszDest;
    v12 = cchDest;
    ppszDestEnda = pszDest;
    v17[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &SourceString;
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else
    {
      if ( cchDest )
      {
        v17[0] = 0LL;
        v14 = cchDest - 1;
        v15 = vsnwprintf(pszDest, cchDest - 1, v10, Args);
        if ( v15 >= 0 && v15 <= v14 )
        {
          if ( v15 == v14 )
          {
            v11 = &pszDest[v14];
            *v11 = 0;
            v12 = 1LL;
          }
          else
          {
            v12 = cchDest - v15;
            v11 = &pszDest[v15];
          }
          v13 = 0;
          if ( (dwFlags & 0x200) != 0 && v12 > 1 )
            RtlStringExHandleFillBehindNullW(v11, 2 * v12, dwFlags);
          goto LABEL_13;
        }
        v11 = &pszDest[v14];
        v12 = 1LL;
        *v11 = 0;
        v17[0] = 1LL;
        ppszDestEnda = v11;
      }
      else
      {
        if ( !*v10 )
        {
LABEL_13:
          if ( ppszDestEnd )
            *ppszDestEnd = v11;
          result = v13;
          if ( pcchRemaining )
            *pcchRemaining = v12;
          return result;
        }
        if ( !pszDest )
        {
          v13 = -1073741811;
          goto LABEL_24;
        }
      }
      v13 = -2147483643;
    }
LABEL_24:
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v10, &ppszDestEnda, v17, dwFlags);
      v11 = ppszDestEnda;
      v12 = v17[0];
    }
    if ( v13 != -2147483643 )
      return v13;
    goto LABEL_13;
  }
  if ( cchDest )
    *pszDest = 0;
  return result;
}
