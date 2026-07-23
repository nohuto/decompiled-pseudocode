/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1409DC0A0
 * Callers:
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     IoSetSystemPartition @ 0x140799600 (IoSetSystemPartition.c)
 *     PipCheckComputerSupported @ 0x14079E254 (PipCheckComputerSupported.c)
 *     PipGetDriverKsrGuid @ 0x14079FF30 (PipGetDriverKsrGuid.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A6CC8 (PipServiceInstanceToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1407A7370 (PnpOpenFirstMatchingSubKey.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407AA520 (PipDmgInitReadGroupPolicy.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1407ACF18 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x1407AD8E8 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgReadDriverPolicy @ 0x1407ADD30 (PiDevCfgReadDriverPolicy.c)
 *     PiDevCfgResetDeviceKeys @ 0x1407AE030 (PiDevCfgResetDeviceKeys.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1407B00DC (PnpProfileUpdateHardwareProfile.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x1409DAC70 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgInitMigrationContext @ 0x140A45D74 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140A496A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140AFAD74 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1D234 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140B3A9C8 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 *     IopStoreSystemPartitionInformation @ 0x140CC441C (IopStoreSystemPartitionInformation.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140CC7034 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC7408 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140CC7994 (PipGetDriverTagPriority.c)
 *     PipInitDeviceOverrideCache @ 0x140CC8264 (PipInitDeviceOverrideCache.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D089A4 (VhdAutoAttachVirtualDisks.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D0B300 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140D0B4C4 (PipInitializeEarlyLaunchDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
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
