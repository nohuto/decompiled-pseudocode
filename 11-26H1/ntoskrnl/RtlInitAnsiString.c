/*
 * XREFs of RtlInitAnsiString @ 0x14046C9A0
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1405CA598 (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x1405CB648 (IopCheckDiskName.c)
 *     PopEmModuleAddressMatchCallback @ 0x14060DD00 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140611370 (PopEmUpdateDeviceConstraintCallback.c)
 *     RtlInitUTF8String @ 0x140617E70 (RtlInitUTF8String.c)
 *     WheaGetCurrentProcessName @ 0x1406D5CF0 (WheaGetCurrentProcessName.c)
 *     WheapGetModuleInfo @ 0x1406D633C (WheapGetModuleInfo.c)
 *     CmpInitializeLoadOptions @ 0x1406E20E8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14071AA3C (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     KsepGetModuleInfoByName @ 0x1407BE6F8 (KsepGetModuleInfoByName.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1408226FC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x140822B8C (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x140824510 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x14082C2B8 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x14083DE30 (NtQuerySystemEnvironmentValue.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140853E00 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1408566EC (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x14085C5DC (CmpInitializeRegistryNode.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x140887EBC (AslStringAnsiToUnicode.c)
 *     EtwpBuildProcessEvent @ 0x14096D8A8 (EtwpBuildProcessEvent.c)
 *     ObCheckRefTraceProcess @ 0x140984928 (ObCheckRefTraceProcess.c)
 *     PiGetDefaultMessageString @ 0x140A26864 (PiGetDefaultMessageString.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A891F8 (PopPowerRequestStatsGetIdForRequest.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x140B518F0 (MiLogFailedDriverLoad.c)
 *     ExpSystemErrorHandler2 @ 0x140BFF4E0 (ExpSystemErrorHandler2.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140CAB410 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     EmpInfParseGetGuidFromName @ 0x140CB5E44 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140CB625C (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140CBC528 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140CBD890 (IopMarkBootPartition.c)
 *     IopMountBlockIoLayerCallback @ 0x140CBDAD0 (IopMountBlockIoLayerCallback.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     IopGetBootDiskInformationLite @ 0x140CBEB30 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140CC1740 (PipCriticalDeviceWaitCallback.c)
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140CED418 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CED7B0 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     strlen @ 0x14073DD10 (strlen.c)
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
