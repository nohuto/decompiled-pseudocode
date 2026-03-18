/*
 * XREFs of RtlCopyUnicodeString @ 0x140419A90
 * Callers:
 *     RtlPcToFileName @ 0x140419600 (RtlPcToFileName.c)
 *     RtlPcToFileImageInfo @ 0x140419660 (RtlPcToFileImageInfo.c)
 *     IoQueryFullDriverPath @ 0x140419770 (IoQueryFullDriverPath.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1404197DC (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     PnpAllocateWatchdog @ 0x1404199B4 (PnpAllocateWatchdog.c)
 *     HalpRegisterDmaController @ 0x14058CDC8 (HalpRegisterDmaController.c)
 *     HalpTimerRegister @ 0x14059816C (HalpTimerRegister.c)
 *     HalpInterruptRegisterController @ 0x14059AC04 (HalpInterruptRegisterController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406D3D98 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     AhcCacheQueryHwId @ 0x140776338 (AhcCacheQueryHwId.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x1407A561C (PnpCopyDeviceInstancePath.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407B44C0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407B8904 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopFxRegisterComponentPerfStates @ 0x1407CD93C (PopFxRegisterComponentPerfStates.c)
 *     PopConnectToPolicyDevice @ 0x1407D746C (PopConnectToPolicyDevice.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407EF710 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1407EF83C (PspSiloInitializeUserSharedData.c)
 *     PsRegisterSiloMonitor @ 0x1407FBB20 (PsRegisterSiloMonitor.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpMergeVersionDescriptors @ 0x1408561BC (CmpMergeVersionDescriptors.c)
 *     MiAllocateSecureImageActivePatch @ 0x14086DA5C (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x14086FB74 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x140874040 (MiQueryLoadedPatches.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     CmpGetVirtualizationID @ 0x1408B1274 (CmpGetVirtualizationID.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x14090FC6C (PnpConcatenateUnicodeStrings.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PiDeviceRegistration @ 0x140912D28 (PiDeviceRegistration.c)
 *     PnpProcessRelation @ 0x140913D04 (PnpProcessRelation.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140976010 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140977690 (VrpBuildKeyPath.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409E1060 (FsRtlFindInTunnelCacheEx.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409E8AF0 (SdbMakeIndexKeyFromStringEx.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409F8930 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     RtlPcToFilePath @ 0x1409FA0A0 (RtlPcToFilePath.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A27D00 (IopQueryRegistryKeySystemPath.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140A2A5D0 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepAddTokenOriginClaim @ 0x140A2D094 (SepAddTokenOriginClaim.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A343AC (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     ObCreateObjectTypeEx @ 0x140A5A0C0 (ObCreateObjectTypeEx.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140A6FDA8 (EtwpGetLoggerInfoFromContext.c)
 *     MiQuerySingleLoadedPatch @ 0x140A997BC (MiQuerySingleLoadedPatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE3ECC (PnpQueryRemoveLockedDeviceNode.c)
 *     MiCreateSectionForDriver @ 0x140AEBC54 (MiCreateSectionForDriver.c)
 *     PiDeferSetInterfaceState @ 0x140B1E180 (PiDeferSetInterfaceState.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140B3DBDC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     PnpFinalizeVetoedRemove @ 0x140B5E9D4 (PnpFinalizeVetoedRemove.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 *     PopProcessWakeSourceWork @ 0x140C09180 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140CB0DF0 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
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
