/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140432F70
 * Callers:
 *     MiShowBadMapper @ 0x1403669CC (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140432E04 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405FE07C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D3AF8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071533C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x1407171A0 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14071774C (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     IopGetRootDeviceId @ 0x14079EF04 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B672C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407B7A4C (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1407B7DA0 (PiDrvDbSetupNodeHive.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     PopValidateWinresume @ 0x1407D0A04 (PopValidateWinresume.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407EF710 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140805C88 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x140862DE8 (CmpDeleteCorruptedLogfile.c)
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     MiFormDllRegistryPath @ 0x14087508C (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x140886554 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildUserPath @ 0x140888240 (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x140890164 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x14089039C (AdtpAppendString.c)
 *     AdtpBuildReplacementString @ 0x1408905A8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140890644 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     CmRealKCBToVirtualPath @ 0x1408B1418 (CmRealKCBToVirtualPath.c)
 *     CmpGetCompleteFileName @ 0x1408B58BC (CmpGetCompleteFileName.c)
 *     IopSymlinkRememberJunction @ 0x140904710 (IopSymlinkRememberJunction.c)
 *     AdtpBuildAccessesString @ 0x14096A1B4 (AdtpBuildAccessesString.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140976010 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140977690 (VrpBuildKeyPath.c)
 *     CmpNameFromAttributes @ 0x14097C958 (CmpNameFromAttributes.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A129AC (IopGetDriverNameFromKeyNode.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     IopBuildFullDriverPath @ 0x140A27A4C (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A27D00 (IopQueryRegistryKeySystemPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0 (_SysCtxRegOpenCurrentUserKey.c)
 *     SepAddTokenOriginClaim @ 0x140A2D094 (SepAddTokenOriginClaim.c)
 *     pIoQueryDeviceDescription @ 0x140A73E4C (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140A74360 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A744A8 (pIoQueryBusDescription.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140A77968 (CmpQueryNameString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A91E38 (RtlpGetPolicyValueForSystemCapability.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE3ECC (PnpQueryRemoveLockedDeviceNode.c)
 *     MiCreateSectionForDriver @ 0x140AEBC54 (MiCreateSectionForDriver.c)
 *     CmVirtualKCBToRealPath @ 0x140AF49A0 (CmVirtualKCBToRealPath.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     MiGenerateSystemImageNames @ 0x140B25868 (MiGenerateSystemImageNames.c)
 *     AslRegistryBuildMachinePath @ 0x140B30964 (AslRegistryBuildMachinePath.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     AdtpBuildStringListString @ 0x140B5F0FC (AdtpBuildStringListString.c)
 *     IopValidateJunctionTarget @ 0x140B5F2B0 (IopValidateJunctionTarget.c)
 *     PiDrvDbMountNode @ 0x140B65614 (PiDrvDbMountNode.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CC4AA8 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140CEE5C0 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D04CDC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
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
