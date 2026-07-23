/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x14041FFA0
 * Callers:
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14041FE34 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x140600ACC (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D7B84 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071A02C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x14071BE90 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14071C43C (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     IopGetRootDeviceId @ 0x1407A1A44 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B978C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407BAAAC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407F5270 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpConstructCrossVmObjectPath @ 0x14080B728 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1408691C8 (CmpDeleteCorruptedLogfile.c)
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     MiFormDllRegistryPath @ 0x14087B470 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x14088C954 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildUserPath @ 0x14088E63C (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x140896560 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140896798 (AdtpAppendString.c)
 *     AdtpBuildReplacementString @ 0x1408969A4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140896A40 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408AD75C (ObGetSiloRootDirectoryPath.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     CmpGetCompleteFileName @ 0x1408BBE90 (CmpGetCompleteFileName.c)
 *     IopSymlinkRememberJunction @ 0x14093469C (IopSymlinkRememberJunction.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140938020 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     CmpNameFromAttributes @ 0x14093E968 (CmpNameFromAttributes.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     IopBuildFullDriverPath @ 0x140A3AAEC (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A3ADA0 (IopQueryRegistryKeySystemPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     pIoQueryDeviceDescription @ 0x140A4A8E8 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140A4AE00 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A96988 (RtlpGetPolicyValueForSystemCapability.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4 (PnpQueryRemoveLockedDeviceNode.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 *     CmVirtualKCBToRealPath @ 0x140AF7040 (CmVirtualKCBToRealPath.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     MiGenerateSystemImageNames @ 0x140B27AC8 (MiGenerateSystemImageNames.c)
 *     SepAddTokenOriginClaim @ 0x140B2A2F4 (SepAddTokenOriginClaim.c)
 *     AslRegistryBuildMachinePath @ 0x140B32B64 (AslRegistryBuildMachinePath.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     AdtpBuildStringListString @ 0x140B6227C (AdtpBuildStringListString.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 *     PiDrvDbMountNode @ 0x140B686B4 (PiDrvDbMountNode.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CCAB88 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140CF0F10 (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140CF493C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D0AFAC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // esi
  unsigned __int64 v4; // rcx
  wchar_t *v5; // r14

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (unsigned int)v4 + Length <= Destination->MaximumLength )
  {
    v5 = &Destination->Buffer[v4 >> 1];
    memmove(v5, Source->Buffer, Source->Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v5[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
