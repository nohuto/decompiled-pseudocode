/*
 * XREFs of IopOpenRegistryKeyEx @ 0x140AA8B70
 * Callers:
 *     PnpBootDeviceWait @ 0x1405D85A4 (PnpBootDeviceWait.c)
 *     IoSetSystemPartition @ 0x140796AD0 (IoSetSystemPartition.c)
 *     PipCheckComputerSupported @ 0x14079B714 (PipCheckComputerSupported.c)
 *     PipGetDriverKsrGuid @ 0x14079D3F0 (PipGetDriverKsrGuid.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A4188 (PipServiceInstanceToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1407A4830 (PnpOpenFirstMatchingSubKey.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407A7970 (PipDmgInitReadGroupPolicy.c)
 *     PiDcInitUpdateProperties @ 0x1407A7AFC (PiDcInitUpdateProperties.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1407AA2A8 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407AAB70 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResetDeviceKeys @ 0x1407AB010 (PiDevCfgResetDeviceKeys.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1407AD07C (PnpProfileUpdateHardwareProfile.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     PiDevCfgInitMigrationContext @ 0x14098B654 (PiDevCfgInitMigrationContext.c)
 *     PiQueryRemovableDeviceOverride @ 0x140AA7454 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140AA773C (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgQueryDriverNode @ 0x140AD009C (PiDevCfgQueryDriverNode.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140AF8694 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1AF84 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140B387B8 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B393C0 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140B3E4A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 *     IopStoreSystemPartitionInformation @ 0x140CBE34C (IopStoreSystemPartitionInformation.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140CC0F64 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC1338 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140CC18C4 (PipGetDriverTagPriority.c)
 *     PipInitDeviceOverrideCache @ 0x140CC2194 (PipInitDeviceOverrideCache.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D02604 (VhdAutoAttachVirtualDisks.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D05030 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140D051F4 (PipInitializeEarlyLaunchDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a1 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, a4, &v5);
}
