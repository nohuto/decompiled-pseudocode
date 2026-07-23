/*
 * XREFs of _wcsnicmp @ 0x140538B30
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405DDB08 (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14061385C (PopIdleWakeAreIdenticalWakeSources.c)
 *     IopCheckIfNotNativeDriver @ 0x140796F58 (IopCheckIfNotNativeDriver.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x14080C36C (punycode_decode.c)
 *     punycode_encode @ 0x14080C970 (punycode_encode.c)
 *     GetValueType @ 0x14081ED44 (GetValueType.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140844CE0 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x140865978 (CmpPreserveSystemHiveData.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 *     AslPathCleanUstr @ 0x14088F614 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140891148 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x140891A64 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140891D90 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140897D04 (BiCreateFileDeviceElement.c)
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     SiIsValidDiskDevice @ 0x14089AAC0 (SiIsValidDiskDevice.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140900EB0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     EtwpApplyContainerFilter @ 0x1409135A0 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140913694 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140913700 (EtwpApplyPackageIdFilter.c)
 *     IopReplaceSymlinkPath @ 0x140935534 (IopReplaceSymlinkPath.c)
 *     VrpTranslatePath @ 0x140938020 (VrpTranslatePath.c)
 *     VrpFindNamespaceNode @ 0x1409397C0 (VrpFindNamespaceNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1409D0D94 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     MiCacheImageSymbols @ 0x1409E4F28 (MiCacheImageSymbols.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     EtwpExpandFileName @ 0x140A1586C (EtwpExpandFileName.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140A30100 (IoVolumeDeviceNameToGuidPath.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A6E644 (LocalConvertStringSDToSD_Rev1.c)
 *     GetOperatorIndexByName @ 0x140A6FAC4 (GetOperatorIndexByName.c)
 *     LocalpGetStringForCondition @ 0x140A6FC58 (LocalpGetStringForCondition.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 *     GetAttributeName @ 0x140A7118C (GetAttributeName.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140AEB244 (WmipGetGuidObjectInstanceInfo.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140B0FF4C (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwFindSwDevice @ 0x140B25E48 (PiSwFindSwDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140CF0E84 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
