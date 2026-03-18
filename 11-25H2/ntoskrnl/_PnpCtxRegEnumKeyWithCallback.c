/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140A848FC
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x14070DF24 (PipHardwareConfigClearStartOverrides.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14080B120 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14080B630 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14080BA6C (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14080BD80 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14080D190 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14080D870 (_CmGetMatchingDevicePanelListWorker.c)
 *     _PnpGetGenericObjectList @ 0x140810ACC (_PnpGetGenericObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1409305BC (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x140950828 (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409A0318 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A01530 (DrvDbGetObjectSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x1409523C0 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v7[0] = v4;
  v7[1] = (__int64)PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = (__int64)v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, (__int64)a2, v7);
}
