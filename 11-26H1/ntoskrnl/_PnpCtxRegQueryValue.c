/*
 * XREFs of _PnpCtxRegQueryValue @ 0x140917E70
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140719960 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigGetIndex @ 0x14079BA1C (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079C094 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopGetOriginalServiceName @ 0x14079EE74 (IopGetOriginalServiceName.c)
 *     PnpCheckDriverDependencies @ 0x1407A43FC (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A5754 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B5EC0 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x1407B630C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B64A0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140898860 (_CmDeviceClassesSubkeyCallback.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14089E434 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x14089E800 (DrvDbGetRegValueMappedPropertyKeys.c)
 *     _CmIsDeviceInContainer @ 0x140909D5C (_CmIsDeviceInContainer.c)
 *     PnpGetServiceStartType @ 0x140916D50 (PnpGetServiceStartType.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409172EC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140917AA0 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpRegQueryValueIndirect @ 0x140917FF0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140919488 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140919888 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14091C280 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140992C9C (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE82D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2B2B0 (_CmAddPanelDeviceWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B41B2C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140B4CE6C (PipHardwareConfigGetLastUseTime.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B7F3A8 (DrvDbSetDriverPackageMappedProperty.c)
 *     PipHardwareConfigExists @ 0x140CC1AA4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140CC2540 (PipMigrateCleanService.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140CC3094 (PipResetDevices.c)
 *     PpDevCfgInit @ 0x140CC642C (PpDevCfgInit.c)
 *     PipProcessPendingObjects @ 0x140CC7200 (PipProcessPendingObjects.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  void *v7; // rdi
  NTSTATUS result; // eax
  unsigned int v10; // eax
  char *p_KeyValueInformation; // rbx
  ULONG Length; // esi
  NTSTATUS v13; // eax
  int v14; // esi
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  v7 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
  {
    if ( a5 && (v10 = *a6, *a6 > 0x80) )
    {
      Length = v10 + 12;
      if ( v10 >= 0xFFFFFFF4 )
        return -1073741675;
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (void *)Pool2;
      if ( !Pool2 )
        return -1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v13 = ZwQueryValueKey(
            a2,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    v14 = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v15 = *a6;
      v16 = *((_DWORD *)p_KeyValueInformation + 2);
      *a6 = v16;
      if ( v15 < v16 )
        v14 = -1073741789;
      else
        memmove(a5, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a4 )
        *a4 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    return v14;
  }
  return result;
}
