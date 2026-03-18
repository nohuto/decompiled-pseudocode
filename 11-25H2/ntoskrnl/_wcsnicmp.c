/*
 * XREFs of _wcsnicmp @ 0x1404FBD70
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405A3468 (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405D5F2C (PopIdleWakeAreIdenticalWakeSources.c)
 *     IopCheckIfNotNativeDriver @ 0x140705B94 (IopCheckIfNotNativeDriver.c)
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1407755EC (punycode_decode.c)
 *     punycode_encode @ 0x140775BF4 (punycode_encode.c)
 *     GetValueType @ 0x140787D94 (GetValueType.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407AF7C0 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x1407D28C8 (CmpPreserveSystemHiveData.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1407F1944 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpResolveMatchingFile @ 0x1407F5A20 (SdbpResolveMatchingFile.c)
 *     AslPathCleanUstr @ 0x1407F9E0C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1407FB960 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x1407FC410 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x1407FC608 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140803728 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x1408038D4 (BiCreatePartitionDevice.c)
 *     SiIsValidDiskDevice @ 0x140806C50 (SiIsValidDiskDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140822A30 (IoVolumeDeviceNameToGuidPath.c)
 *     IopReplaceSymlinkPath @ 0x1408EB350 (IopReplaceSymlinkPath.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140918690 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x140918AA0 (LookupSidInTable.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140920AE0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     VrpTranslatePath @ 0x140947B60 (VrpTranslatePath.c)
 *     VrpFindNamespaceNode @ 0x140949210 (VrpFindNamespaceNode.c)
 *     EtwpExpandFileName @ 0x1409925EC (EtwpExpandFileName.c)
 *     PiSwFindSwDevice @ 0x1409A1B58 (PiSwFindSwDevice.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     LocalpGetStringForCondition @ 0x1409E765C (LocalpGetStringForCondition.c)
 *     GetOperatorIndexByName @ 0x1409E84FC (GetOperatorIndexByName.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1409E8CD0 (LocalConvertStringSDToSD_Rev1.c)
 *     GetOperandValue @ 0x1409EA0A4 (GetOperandValue.c)
 *     GetAttributeName @ 0x1409EA314 (GetAttributeName.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A6CB44 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A6E1F0 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpApplyContainerFilter @ 0x140A7B678 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A7BF5C (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7C304 (EtwpApplyPackageIdFilter.c)
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 *     BiIsValidDiskDevice @ 0x140AD62D4 (BiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140C35EA4 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
