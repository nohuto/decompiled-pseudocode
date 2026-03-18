/*
 * XREFs of _wcsnicmp @ 0x1405366B0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405DB258 (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1406105F8 (PopIdleWakeAreIdenticalWakeSources.c)
 *     IopCheckIfNotNativeDriver @ 0x140794428 (IopCheckIfNotNativeDriver.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1408068CC (punycode_decode.c)
 *     punycode_encode @ 0x140806ED0 (punycode_encode.c)
 *     GetValueType @ 0x140818B34 (GetValueType.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14083EAA0 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140881180 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140881504 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 *     AslPathCleanUstr @ 0x140889218 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x14088AD4C (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x14088B668 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x14088B994 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140891908 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140891AB0 (BiCreatePartitionDevice.c)
 *     SiIsValidDiskDevice @ 0x1408946C0 (SiIsValidDiskDevice.c)
 *     IopReplaceSymlinkPath @ 0x1409055A4 (IopReplaceSymlinkPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140907FA0 (IoVolumeDeviceNameToGuidPath.c)
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x1409253A0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x140925630 (LookupSidInTable.c)
 *     EtwpApplyContainerFilter @ 0x140937A00 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140937AF4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140937B60 (EtwpApplyPackageIdFilter.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140955400 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     VrpTranslatePath @ 0x140976010 (VrpTranslatePath.c)
 *     VrpFindNamespaceNode @ 0x1409777B0 (VrpFindNamespaceNode.c)
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 *     EtwpExpandFileName @ 0x140A16914 (EtwpExpandFileName.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A61674 (LocalConvertStringSDToSD_Rev1.c)
 *     GetOperatorIndexByName @ 0x140A62AF4 (GetOperatorIndexByName.c)
 *     LocalpGetStringForCondition @ 0x140A62C88 (LocalpGetStringForCondition.c)
 *     GetOperandValue @ 0x140A64000 (GetOperandValue.c)
 *     GetAttributeName @ 0x140A641BC (GetAttributeName.c)
 *     MiCacheImageSymbols @ 0x140A78F14 (MiCacheImageSymbols.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140AE8FF4 (WmipGetGuidObjectInstanceInfo.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140B0E714 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwFindSwDevice @ 0x140B23A48 (PiSwFindSwDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140CEAAE4 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
