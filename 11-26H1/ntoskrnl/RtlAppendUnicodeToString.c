/*
 * XREFs of RtlAppendUnicodeToString @ 0x14041FEE0
 * Callers:
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14041FE34 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x140600ACC (KsepEvntLogShimsApplied.c)
 *     LdrpGetResourceFileName @ 0x14061B338 (LdrpGetResourceFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D7B84 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071A02C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x14071BE90 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14071C43C (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x1407A1A44 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     RtlpConstructCrossVmObjectPath @ 0x14080B728 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140828590 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x140850B08 (ApiSetpConstructPathToExtension.c)
 *     CmpBuildMachineHiveMountPoint @ 0x140851190 (CmpBuildMachineHiveMountPoint.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     MiFormDllRegistryPath @ 0x14087B470 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x14088C954 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildUserPath @ 0x14088E63C (AslRegistryBuildUserPath.c)
 *     AslpProcessMatchRegNode @ 0x1408912FC (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140896560 (AdtpBuildSidListString.c)
 *     AdtpBuildReplacementString @ 0x1408969A4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140896A40 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140897718 (BiResolveLocateDevice.c)
 *     BiResolveLocatePartitionCallback @ 0x140899768 (BiResolveLocatePartitionCallback.c)
 *     CmpGetVirtualizationID @ 0x1408B7880 (CmpGetVirtualizationID.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     CmpGetCompleteFileName @ 0x1408BBE90 (CmpGetCompleteFileName.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140901A50 (RtlFormatCurrentUserKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x14093469C (IopSymlinkRememberJunction.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140938020 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409AA448 (IopBuildGlobalSymbolicLinkString.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     pIoQueryDeviceDescription @ 0x140A4A8E8 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140ADF368 (CmpQueryHiveRedirectionFileList.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 *     PnpBuildCmResourceList @ 0x140AFB1F0 (PnpBuildCmResourceList.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140AFC924 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     AslRegistryBuildMachinePath @ 0x140B32B64 (AslRegistryBuildMachinePath.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     AdtpBuildStringListString @ 0x140B6227C (AdtpBuildStringListString.c)
 *     CmpMachineHiveListInitialize @ 0x140B66A74 (CmpMachineHiveListInitialize.c)
 *     PiDrvDbMountNode @ 0x140B686B4 (PiDrvDbMountNode.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CCAB88 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140CF0F10 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140CF1290 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140CF493C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D0AFAC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     memmove @ 0x140742080 (memmove.c)
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
