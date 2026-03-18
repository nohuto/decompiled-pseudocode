/*
 * XREFs of IopGetRegistryValue @ 0x140A121A8
 * Callers:
 *     PnpGetRegistryDword @ 0x1404F4BE8 (PnpGetRegistryDword.c)
 *     IopAllowRemoteDASD @ 0x1405052F8 (IopAllowRemoteDASD.c)
 *     IopIsBitlockerOn @ 0x1405C99FC (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x1405C9ADC (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1405CC0D4 (IoInitializeLiveDump.c)
 *     IopGetRegistryULongValue @ 0x1405CC46C (IopGetRegistryULongValue.c)
 *     SecureDump_ReadRegistry @ 0x1405D71B0 (SecureDump_ReadRegistry.c)
 *     PnpBootDeviceWait @ 0x1405D85A4 (PnpBootDeviceWait.c)
 *     PiDevCfgQueryResolveValue @ 0x1405DB494 (PiDevCfgQueryResolveValue.c)
 *     IopInitializeDumpPolicySettings @ 0x140793844 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14079BC20 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14079BCE0 (PipUpdateSetupInProgress.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14079D4B0 (PipGetDriverKsrGuidRegistryValue.c)
 *     IopIsReportedAlready @ 0x14079EF9C (IopIsReportedAlready.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A37B0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A3F78 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A4188 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407A52A0 (PnpCheckPossibleBootStartDriver.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407A7970 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407A9F80 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1407AA1AC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1407AAAFC (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407AAB70 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AB0D0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1407AB690 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1407AB780 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AB970 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     PiDevCfgBuildIndirectString @ 0x14098838C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiGetServiceNameInfo @ 0x140A11DB4 (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x140A11EC0 (IoOpenDriverRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A129AC (IopGetDriverNameFromKeyNode.c)
 *     PnpPrepareDriverLoading @ 0x140A266A4 (PnpPrepareDriverLoading.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140A27A4C (IopBuildFullDriverPath.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A71F50 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryValues @ 0x140A748C8 (IopGetRegistryValues.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PnpReadDeviceConfiguration @ 0x140AA425C (PnpReadDeviceConfiguration.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA5A24 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiDevCfgVerifyService @ 0x140AD34A4 (PiDevCfgVerifyService.c)
 *     PiFindDevInstMatch @ 0x140AD5814 (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140AD5A5C (PiRearrangeDeviceInstances.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF7250 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipCheckForDenyExecute @ 0x140B02460 (PipCheckForDenyExecute.c)
 *     IopQuerySecureDeviceClassState @ 0x140B2F62C (IopQuerySecureDeviceClassState.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B37850 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableConstant @ 0x140B40350 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B442E8 (PiDevCfgResolveMultiSzValue.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     IopInitializeOfflineCrashDump @ 0x140CBA6C4 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140CC0F64 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC1338 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140CC18C4 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140D0AB0C (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140D0B424 (PipCheckDependencies.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rbx
  int v10; // ebx
  ULONG Length; // ebx
  void *Pool2; // rdi
  NTSTATUS v13; // ebx
  void *v14; // rbx
  NTSTATUS v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-30h] BYREF

  ValueName = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return -1073741670;
    v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v14 )
        return -1073741670;
      v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        return v15;
      }
      *a4 = v14;
    }
    else
    {
      *a4 = Pool2;
    }
    return 0;
  }
  return result;
}
