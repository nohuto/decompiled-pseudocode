/*
 * XREFs of IopGetRegistryValue @ 0x140A11398
 * Callers:
 *     PnpGetRegistryDword @ 0x1404EE1C8 (PnpGetRegistryDword.c)
 *     IopAllowRemoteDASD @ 0x1404FEC38 (IopAllowRemoteDASD.c)
 *     IopIsBitlockerOn @ 0x1405CC2CC (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x1405CC3AC (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1405CE8E8 (IoInitializeLiveDump.c)
 *     IopGetRegistryULongValue @ 0x1405CEC80 (IopGetRegistryULongValue.c)
 *     SecureDump_ReadRegistry @ 0x1405D99A0 (SecureDump_ReadRegistry.c)
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     PiDevCfgQueryResolveValue @ 0x1405DDD44 (PiDevCfgQueryResolveValue.c)
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14079E760 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14079E820 (PipUpdateSetupInProgress.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14079FFF0 (PipGetDriverKsrGuidRegistryValue.c)
 *     IopIsReportedAlready @ 0x1407A1ADC (IopIsReportedAlready.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A62F0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A6CC8 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407A7DE0 (PnpCheckPossibleBootStartDriver.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407AA520 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407ACBF0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1407ACE1C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x1407AD8E8 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1407AD9D8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AE0F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1407AE6B0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1407AE7A0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AE990 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     PiGetServiceNameInfo @ 0x140A10FA4 (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x140A110B0 (IoOpenDriverRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     PnpPrepareDriverLoading @ 0x140A39744 (PnpPrepareDriverLoading.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140A3AAEC (IopBuildFullDriverPath.c)
 *     PiDevCfgBuildIndirectString @ 0x140A42AB8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryValues @ 0x140A4B368 (IopGetRegistryValues.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x140AA1288 (PnpReadDeviceConfiguration.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PiFindDevInstMatch @ 0x140AD27C4 (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140AD2A0C (PiRearrangeDeviceInstances.c)
 *     PiDevCfgVerifyService @ 0x140AEA7D8 (PiDevCfgVerifyService.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF98F0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipCheckForDenyExecute @ 0x140B04190 (PipCheckForDenyExecute.c)
 *     IopQuerySecureDeviceClassState @ 0x140B3140C (IopQuerySecureDeviceClassState.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140B39A60 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableConstant @ 0x140B42380 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B461D8 (PiDevCfgResolveMultiSzValue.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     IopInitializeOfflineCrashDump @ 0x140CC0704 (IopInitializeOfflineCrashDump.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140CC7034 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC7408 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140CC7994 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140CC7CBC (PipHardwareConfigInit.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140D10DDC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140D116F4 (PipCheckDependencies.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
