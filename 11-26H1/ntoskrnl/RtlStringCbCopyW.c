/*
 * XREFs of RtlStringCbCopyW @ 0x140430A90
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140430644 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x1404620E0 (RtlpAllowsLowBoxAccess.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140610904 (PopIdleWakeNotifyWakeSource.c)
 *     RtlpGetNameFromLangInfoNode @ 0x14061D784 (RtlpGetNameFromLangInfoNode.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407A7DB0 (PiDcResetChildDeviceContainerCallback.c)
 *     PfSnParametersRead @ 0x1407C7510 (PfSnParametersRead.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140804F78 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x1408165F4 (SepRmFetchGlobalSacl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14081F0A4 (PerfDiagpStartPerfDiagLogger.c)
 *     WmipGenerateBinaryMofNotification @ 0x140823E24 (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x14082B320 (EtwTimLogRedirectionTrustPolicy.c)
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x140A0F2C8 (WmipInsertStaticNames.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x140B19FC8 (WmipAddMofResource.c)
 *     WmipEnumerateMofResources @ 0x140B1A378 (WmipEnumerateMofResources.c)
 *     ExpressionConvertToString @ 0x140B50428 (ExpressionConvertToString.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     MfgInitSystem @ 0x140CAB968 (MfgInitSystem.c)
 *     PfSnParametersSetDefaults @ 0x140CCE37C (PfSnParametersSetDefaults.c)
 *     ViMakeVerifierSettings @ 0x140CDFB38 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  size_t v5; // r8
  NTSTATUS v6; // r11d
  signed __int64 v7; // r9
  wchar_t v8; // ax
  NTSTATUS result; // eax

  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = 2147483646 - v3;
    v6 = 0;
    v7 = (char *)pszSrc - (char *)pszDest;
    while ( v5 + v3 )
    {
      v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
      if ( !v8 )
        break;
      *pszDest++ = v8;
      if ( !--v3 )
      {
        --pszDest;
        v6 = -2147483643;
        break;
      }
    }
    result = v6;
    goto LABEL_9;
  }
  result = -1073741811;
  if ( v3 )
LABEL_9:
    *pszDest = 0;
  return result;
}
