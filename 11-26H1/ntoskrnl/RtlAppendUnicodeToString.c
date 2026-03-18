/*
 * XREFs of RtlAppendUnicodeToString @ 0x140432EB0
 * Callers:
 *     MiShowBadMapper @ 0x1403669CC (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140432E04 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405FE07C (KsepEvntLogShimsApplied.c)
 *     LdrpGetResourceFileName @ 0x1406182E8 (LdrpGetResourceFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D3AF8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071533C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x1407171A0 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14071774C (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x14079EF04 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     PiDrvDbSetupNodeHive @ 0x1407B7DA0 (PiDrvDbSetupNodeHive.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E16B4 (PopBcdGetApplicationPathFromResumeObject.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140805C88 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140822380 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x14084A7F8 (ApiSetpConstructPathToExtension.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14084AE80 (CmpBuildMachineHiveMountPoint.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     MiFormDllRegistryPath @ 0x14087508C (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x140886554 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildUserPath @ 0x140888240 (AslRegistryBuildUserPath.c)
 *     AslpProcessMatchRegNode @ 0x14088AF00 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140890164 (AdtpBuildSidListString.c)
 *     AdtpBuildReplacementString @ 0x1408905A8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140890644 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14089131C (BiResolveLocateDevice.c)
 *     BiResolveLocatePartitionCallback @ 0x140893368 (BiResolveLocatePartitionCallback.c)
 *     CmpGetVirtualizationID @ 0x1408B1274 (CmpGetVirtualizationID.c)
 *     CmRealKCBToVirtualPath @ 0x1408B1418 (CmRealKCBToVirtualPath.c)
 *     CmpGetCompleteFileName @ 0x1408B58BC (CmpGetCompleteFileName.c)
 *     IopSymlinkRememberJunction @ 0x140904710 (IopSymlinkRememberJunction.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildAccessesString @ 0x14096A1B4 (AdtpBuildAccessesString.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140976010 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140977690 (VrpBuildKeyPath.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409D9558 (IopBuildGlobalSymbolicLinkString.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A129AC (IopGetDriverNameFromKeyNode.c)
 *     pIoQueryDeviceDescription @ 0x140A73E4C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A744A8 (pIoQueryBusDescription.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140AE1E78 (CmpQueryHiveRedirectionFileList.c)
 *     MiCreateSectionForDriver @ 0x140AEBC54 (MiCreateSectionForDriver.c)
 *     PnpBuildCmResourceList @ 0x140AF8B10 (PnpBuildCmResourceList.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140AFA6BC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     AslRegistryBuildMachinePath @ 0x140B30964 (AslRegistryBuildMachinePath.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     AdtpBuildStringListString @ 0x140B5F0FC (AdtpBuildStringListString.c)
 *     CmpMachineHiveListInitialize @ 0x140B639D4 (CmpMachineHiveListInitialize.c)
 *     PiDrvDbMountNode @ 0x140B65614 (PiDrvDbMountNode.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CC4AA8 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140CEAEF0 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140CEE5C0 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D04CDC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  size_t v4; // rax
  unsigned int v5; // ebp
  wchar_t *v6; // r14

  if ( !Source )
    return 0;
  v4 = wcslen(Source);
  if ( v4 <= 0x7FFE )
  {
    v5 = (unsigned __int16)(2 * v4);
    if ( Destination->Length + v5 <= Destination->MaximumLength )
    {
      v6 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v6, Source, (unsigned __int16)(2 * v4));
      Destination->Length += v5;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v6[(unsigned __int64)v5 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
