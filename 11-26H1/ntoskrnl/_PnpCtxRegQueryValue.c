/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1409728D0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14071E5F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigGetIndex @ 0x14079E55C (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079EBD4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopGetOriginalServiceName @ 0x1407A19B4 (IopGetOriginalServiceName.c)
 *     PnpCheckDriverDependencies @ 0x1407A6F3C (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A8294 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B8F20 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x1407B936C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B9500 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1408A4834 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1408A4C00 (DrvDbGetRegValueMappedPropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409536FC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PnpGetServiceStartType @ 0x1409717BC (PnpGetServiceStartType.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140971D58 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140972500 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpRegQueryValueIndirect @ 0x140972A50 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140973EE8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmIsDeviceInContainer @ 0x1409AC314 (_CmIsDeviceInContainer.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2D330 (_CmAddPanelDeviceWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B43A1C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140B4EBFC (PipHardwareConfigGetLastUseTime.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 *     PipHardwareConfigExists @ 0x140CC7B74 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140CC8610 (PipMigrateCleanService.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140CC9164 (PipResetDevices.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 *     PipProcessPendingObjects @ 0x140CCD2F0 (PipProcessPendingObjects.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
