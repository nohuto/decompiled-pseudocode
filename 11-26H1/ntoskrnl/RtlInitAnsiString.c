/*
 * XREFs of RtlInitAnsiString @ 0x140466120
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1405CCE68 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x1405CDF18 (IopCheckDiskName.c)
 *     PopEmModuleAddressMatchCallback @ 0x140610E00 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1406141B0 (PopEmUpdateDeviceConstraintCallback.c)
 *     RtlInitUTF8String @ 0x14061AEC0 (RtlInitUTF8String.c)
 *     WheaGetCurrentProcessName @ 0x1406D9DD0 (WheaGetCurrentProcessName.c)
 *     WheapGetModuleInfo @ 0x1406DA41C (WheapGetModuleInfo.c)
 *     CmpInitializeLoadOptions @ 0x1406E6368 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14071F6CC (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     KsepGetModuleInfoByName @ 0x1407C1758 (KsepGetModuleInfoByName.c)
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x14082890C (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x140828D9C (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x14082A750 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14085A110 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14085CA84 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1408628CC (CmpInitializeRegistryNode.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x14088E2B8 (AslStringAnsiToUnicode.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     ObCheckRefTraceProcess @ 0x140946938 (ObCheckRefTraceProcess.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     PiGetDefaultMessageString @ 0x140A39904 (PiGetDefaultMessageString.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A900E8 (PopPowerRequestStatsGetIdForRequest.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x140B54190 (MiLogFailedDriverLoad.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140CB1450 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     EmpInfParseGetGuidFromName @ 0x140CBBE84 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140CBC29C (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140CC25A0 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140CC3960 (IopMarkBootPartition.c)
 *     IopMountBlockIoLayerCallback @ 0x140CC3BA0 (IopMountBlockIoLayerCallback.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     IopGetBootDiskInformationLite @ 0x140CC4C00 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x140CC5004 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140CC7810 (PipCriticalDeviceWaitCallback.c)
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140CF0F10 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140CF371C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CF3AB4 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140D09F60 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     strlen @ 0x140742910 (strlen.c)
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v3 = strlen(SourceString);
    if ( v3 >= 0xFFFF )
      LOWORD(v3) = -2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 1;
  }
}
