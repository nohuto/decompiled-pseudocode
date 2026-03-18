/*
 * XREFs of RtlPrefixUnicodeString @ 0x140A29BF0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1403CD380 (SepPotentialGlobalTableAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1404984A0 (RtlDeriveCapabilitySidsFromName.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404D4110 (PopFxBuildDripsBlockingDeviceList.c)
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 *     PiCreateRegistryPath @ 0x1407A0D98 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x1407A13E4 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407A9F80 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B672C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407B77A4 (PiDrvDbResolveKeyFilePaths.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x1407F2BBC (PspQueryAndCheckCpuPartitionName.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089664C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140899F44 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     SepIsMinTCB @ 0x14091E9C8 (SepIsMinTCB.c)
 *     ObCheckRefTraceProcess @ 0x140984928 (ObCheckRefTraceProcess.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     IopBuildFullDriverPath @ 0x140A27A4C (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A27D00 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x140A27F78 (PiNormalizeDeviceText.c)
 *     SepIsSystemAppTCB @ 0x140A28568 (SepIsSystemAppTCB.c)
 *     ObpIsUnsecureName @ 0x140A289B4 (ObpIsUnsecureName.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A29384 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x140A297E0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     ExWnfHiveUnloaded @ 0x140A2A784 (ExWnfHiveUnloaded.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A2CCFC (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     CmpIsFileInSystemConfig @ 0x140A77570 (CmpIsFileInSystemConfig.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB4F0C (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140B26E5C (_CmOpenDevicePanelRegKeyWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140B50E04 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     IopValidateJunctionTarget @ 0x140B5F2B0 (IopValidateJunctionTarget.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  unsigned __int16 *v5; // r9
  char v6; // r10
  unsigned __int16 *v7; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v9; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
  Flink = CurrentServerSiloGlobals[75].Flink;
  v9 = *v5;
  if ( *(_WORD *)v4 < (unsigned __int16)v9 )
    return 0;
  v10 = (unsigned __int16 *)((char *)v7 + v9);
  if ( !v6 )
    return memcmp(v7, *(const void **)(v4 + 8), *v5) == 0;
  v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
  while ( v7 < v10 )
  {
    v12 = *v7;
    v13 = *(unsigned __int16 *)((char *)v7 + v11);
    if ( (_WORD)v12 != (_WORD)v13 )
    {
      if ( (unsigned int)v12 >= 0x61 )
      {
        if ( (unsigned int)v12 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v12 >= 0xC0u )
            LOWORD(v12) = *((_WORD *)&Flink->Flink
                          + (v12 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v12 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v12 >> 8))))
                        + v12;
        }
        else
        {
          LOWORD(v12) = v12 - 32;
        }
      }
      if ( (unsigned int)v13 >= 0x61 )
      {
        if ( (unsigned int)v13 > 0x7A )
        {
          if ( Flink )
          {
            if ( (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = *((_WORD *)&Flink->Flink
                            + (v13 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v13 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v13 >> 8))))
                          + v13;
          }
        }
        else
        {
          LOWORD(v13) = v13 - 32;
        }
      }
      if ( (_WORD)v12 != (_WORD)v13 )
        return 0;
    }
    ++v7;
  }
  return 1;
}
