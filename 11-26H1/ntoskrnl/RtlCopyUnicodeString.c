/*
 * XREFs of RtlCopyUnicodeString @ 0x14040DFC0
 * Callers:
 *     RtlPcToFileName @ 0x14040DB30 (RtlPcToFileName.c)
 *     RtlPcToFileImageInfo @ 0x14040DB90 (RtlPcToFileImageInfo.c)
 *     IoQueryFullDriverPath @ 0x14040DCA0 (IoQueryFullDriverPath.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14040DD0C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     PnpAllocateWatchdog @ 0x14040DEE4 (PnpAllocateWatchdog.c)
 *     HalpRegisterDmaController @ 0x14058F548 (HalpRegisterDmaController.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x14059D384 (HalpInterruptRegisterController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406D7E24 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     AhcCacheQueryHwId @ 0x1407791E0 (AhcCacheQueryHwId.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A815C (PnpCopyDeviceInstancePath.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407B7520 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407BB964 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopFxRegisterComponentPerfStates @ 0x1407D09DC (PopFxRegisterComponentPerfStates.c)
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407F5270 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 *     PsRegisterSiloMonitor @ 0x140801550 (PsRegisterSiloMonitor.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpMergeVersionDescriptors @ 0x14085C554 (CmpMergeVersionDescriptors.c)
 *     MiAllocateSecureImageActivePatch @ 0x140873E2C (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140875ED8 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x14087A3A0 (MiQueryLoadedPatches.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408AD75C (ObGetSiloRootDirectoryPath.c)
 *     CmpGetVirtualizationID @ 0x1408B7880 (CmpGetVirtualizationID.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1409347F8 (IopSymlinkUpdateECP.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140938020 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409B1D9C (PnpConcatenateUnicodeStrings.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiDeviceRegistration @ 0x1409B4E08 (PiDeviceRegistration.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409D40B8 (SdbMakeIndexKeyFromStringEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409DE060 (FsRtlFindInTunnelCacheEx.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A3ADA0 (IopQueryRegistryKeySystemPath.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140A3D660 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A4F30C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     MiQuerySingleLoadedPatch @ 0x140A9D93C (MiQuerySingleLoadedPatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4 (PnpQueryRemoveLockedDeviceNode.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 *     RtlPcToFilePath @ 0x140B129A0 (RtlPcToFilePath.c)
 *     PiDeferSetInterfaceState @ 0x140B20204 (PiDeferSetInterfaceState.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     SepAddTokenOriginClaim @ 0x140B2A2F4 (SepAddTokenOriginClaim.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140B3FCBC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     PnpFinalizeVetoedRemove @ 0x140B61B54 (PnpFinalizeVetoedRemove.c)
 *     PnpNotifyHwProfileChange @ 0x140B6D3FC (PnpNotifyHwProfileChange.c)
 *     PopProcessWakeSourceWork @ 0x140C0F390 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140CB6E30 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140D0E818 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    v6 = DestinationString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
