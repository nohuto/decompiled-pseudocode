/*
 * XREFs of RtlStringCchPrintfW @ 0x1404B0AA4
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x14061EA14 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x14061EB60 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x14064CC50 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140719960 (DrvDbGetConfigurationSubKeyCallback.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AB0D0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AB970 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1407B2298 (IopCreateLegacyDeviceIds.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407B7038 (PiDrvDbRegisterNodeCallback.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E0808 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E0CBC (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     SepReadAndInsertCaps @ 0x140816E5C (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x1408434C8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140882DDC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140887D74 (AslGuidToString_UStr.c)
 *     _SysCtxOpenControlSet @ 0x14089CA30 (_SysCtxOpenControlSet.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     AslpFileQueryVersionString @ 0x1409E3618 (AslpFileQueryVersionString.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     IoWMIOpenBlock @ 0x140A0DEA0 (IoWMIOpenBlock.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 *     LocalpGetStringForCondition @ 0x140A62C88 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140A63E28 (GetPrintableOperandValue.c)
 *     EncloseSubCondition @ 0x140A644E0 (EncloseSubCondition.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A71F50 (PiDevCfgResolveVariableExpression.c)
 *     RtlpInitNlsSectionName @ 0x140A979F0 (RtlpInitNlsSectionName.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AB012C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     RtlpInitNlsFileName @ 0x140B29D74 (RtlpInitNlsFileName.c)
 *     PspSessionObjectCreate @ 0x140B2D6B4 (PspSessionObjectCreate.c)
 *     AslGuidToString @ 0x140B4ADE4 (AslGuidToString.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     IopCreateArcNamesDisk @ 0x140CBCBA4 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140CBDDA4 (IopReassignSystemRoot.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     _vsnwprintf @ 0x1405353B0 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  NTSTATUS v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    pszDest[v4] = 0;
    return v5;
  }
  v5 = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return v5;
}
