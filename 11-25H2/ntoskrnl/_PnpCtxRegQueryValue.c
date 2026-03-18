/*
 * XREFs of _PnpCtxRegQueryValue @ 0x140953C60
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140690E10 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigGetIndex @ 0x14070E038 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopGetOriginalServiceName @ 0x1407115C8 (IopGetOriginalServiceName.c)
 *     PnpCheckDriverDependencies @ 0x140716E44 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140718808 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14072B4B0 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x14072B8FC (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14072BA90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14080B120 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmAddPanelDeviceWorker @ 0x14080C710 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140812314 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1408126CC (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140813028 (DrvDbSetDriverPackageMappedProperty.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C86C0 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1409305BC (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     _CmAddDeviceToContainerWorker @ 0x14094F44C (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x140950660 (_CmIsDeviceInContainer.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140951D4C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140953A1C (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409565C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409AAA04 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409ABB18 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PnpGetServiceStartType @ 0x1409ADE64 (PnpGetServiceStartType.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140AA8814 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140AA9D20 (PipHardwareConfigGetLastUseTime.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PipHardwareConfigExists @ 0x140C0F864 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140C102F4 (PipMigrateCleanService.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140C10E10 (PipResetDevices.c)
 *     PpDevCfgInit @ 0x140C13F04 (PpDevCfgInit.c)
 *     PipProcessPendingObjects @ 0x140C14C50 (PipProcessPendingObjects.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  void *v7; // rsi
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  __int64 Pool2; // rax
  char *v12; // rdi
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v19; // [rsp+48h] [rbp-D0h] BYREF

  v7 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
  {
    if ( a5 && *a6 > 0x80 )
    {
      if ( *a6 + 12 < 0xC )
        return (unsigned int)-1073741675;
      Length = *a6 + 12;
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v12 = (char *)Pool2;
    }
    else
    {
      v12 = &v19;
      Length = 140;
    }
    v13 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
    inited = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v14 = *a6;
      v15 = *((_DWORD *)v12 + 2);
      *a6 = v15;
      if ( v14 < v15 )
        inited = -1073741789;
      else
        memmove(a5, v12 + 12, *((unsigned int *)v12 + 2));
      if ( a4 )
        *a4 = *((_DWORD *)v12 + 1);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)inited;
}
