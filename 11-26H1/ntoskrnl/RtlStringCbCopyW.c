/*
 * XREFs of RtlStringCbCopyW @ 0x14041DAC0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x14045B09C (RtlpAllowsLowBoxAccess.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140613B64 (PopIdleWakeNotifyWakeSource.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1406207D4 (RtlpGetNameFromLangInfoNode.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407AA960 (PiDcResetChildDeviceContainerCallback.c)
 *     PfSnParametersRead @ 0x1407CA570 (PfSnParametersRead.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14080AA18 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x14081C804 (SepRmFetchGlobalSacl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1408252B4 (PerfDiagpStartPerfDiagLogger.c)
 *     WmipGenerateBinaryMofNotification @ 0x14082A070 (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     WmipEnumerateMofResources @ 0x140A0A008 (WmipEnumerateMofResources.c)
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x140A0E4A4 (WmipInsertStaticNames.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 *     ExpressionConvertToString @ 0x140B52CB8 (ExpressionConvertToString.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     MfgInitSystem @ 0x140CB19A8 (MfgInitSystem.c)
 *     PfSnParametersSetDefaults @ 0x140CD44DC (PfSnParametersSetDefaults.c)
 *     ViMakeVerifierSettings @ 0x140CE5ED0 (ViMakeVerifierSettings.c)
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
