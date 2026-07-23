/*
 * XREFs of RtlStringCchPrintfW @ 0x1404AA134
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x140621A64 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x140621BB0 (RtlpEtcIsValidFeatureId.c)
 *     CarLiveDumpCallBack @ 0x140650830 (CarLiveDumpCallBack.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14071E5F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AE0F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AE990 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1407B52F8 (IopCreateLegacyDeviceIds.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407BA098 (PiDrvDbRegisterNodeCallback.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E5664 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E5B18 (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     SepReadAndInsertCaps @ 0x14081D06C (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140848958 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1408891DC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x14088E170 (AslGuidToString_UStr.c)
 *     _SysCtxOpenControlSet @ 0x1408A2E30 (_SysCtxOpenControlSet.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     IoWMIOpenBlock @ 0x140A0D390 (IoWMIOpenBlock.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     SepValidateReferencedCachedHandles @ 0x140A3C458 (SepValidateReferencedCachedHandles.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 *     LocalpGetStringForCondition @ 0x140A6FC58 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140A70DF8 (GetPrintableOperandValue.c)
 *     EncloseSubCondition @ 0x140A714B0 (EncloseSubCondition.c)
 *     RtlpInitNlsSectionName @ 0x140A9BB70 (RtlpInitNlsSectionName.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADD7C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     RtlpInitNlsFileName @ 0x140B2BDF4 (RtlpInitNlsFileName.c)
 *     PspSessionObjectCreate @ 0x140B2F734 (PspSessionObjectCreate.c)
 *     AslpFileQueryVersionString @ 0x140B46780 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x140B4CB74 (AslGuidToString.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140CC3E74 (IopReassignSystemRoot.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
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
