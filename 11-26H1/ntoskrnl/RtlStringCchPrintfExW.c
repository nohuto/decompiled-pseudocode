/*
 * XREFs of RtlStringCchPrintfExW @ 0x140446160
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140445FF8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14060BCD4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14079E370 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14079E448 (PipHardwareConfigClearStartOverrides.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1407B52F8 (IopCreateLegacyDeviceIds.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1408A0C74 (_CmGetDevicePanelRegKeyPath.c)
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x14095335C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x140954D90 (_CmGetDeviceRegKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1409616A0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409620B0 (_CmGetCommonClassRegKeyPath.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x140975C14 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1409AD164 (_PnpDeletePropertyWorker.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140A3CDE0 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140AB4F34 (_PnpGetGenericStorePropertyLocales.c)
 *     PiProcessDriverInstance @ 0x140AD2500 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x140AD27C4 (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140AD2A0C (PiRearrangeDeviceInstances.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     RtlFormatMessageEx @ 0x140B119B0 (RtlFormatMessageEx.c)
 *     _CmBuildDevicePanelId @ 0x140B3BE24 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x1404463B0 (StringExHandleOtherFlagsW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x140534FC4 (RtlStringExHandleFillBehindNullW.c)
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
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
