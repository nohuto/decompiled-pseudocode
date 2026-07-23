/*
 * XREFs of RtlPrefixUnicodeString @ 0x140A3CC90
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1403B1CA0 (SepPotentialGlobalTableAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     PiCreateRegistryPath @ 0x1407A38D8 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x1407A3F24 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407ACBF0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B978C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407BA804 (PiDrvDbResolveKeyFilePaths.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x1407F871C (PspQueryAndCheckCpuPartitionName.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089CA4C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14089CE38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408A0344 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     ObCheckRefTraceProcess @ 0x140946938 (ObCheckRefTraceProcess.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     IopBuildFullDriverPath @ 0x140A3AAEC (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A3ADA0 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x140A3B018 (PiNormalizeDeviceText.c)
 *     SepIsSystemAppTCB @ 0x140A3B608 (SepIsSystemAppTCB.c)
 *     ObpIsUnsecureName @ 0x140A3BA54 (ObpIsUnsecureName.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A3C424 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x140A3C458 (SepValidateReferencedCachedHandles.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x140A3C880 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     ExWnfHiveUnloaded @ 0x140A3D814 (ExWnfHiveUnloaded.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A3D94C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A3E640 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A3FBE4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     CmpIsFileInSystemConfig @ 0x140A80290 (CmpIsFileInSystemConfig.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB62AC (RtlpProcessIFEOKeyFilter.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x140B5369C (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x140742350 (memcmp.c)
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
