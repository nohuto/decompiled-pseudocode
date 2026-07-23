/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x14079E448 (PipHardwareConfigClearStartOverrides.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14089F170 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14089F5AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14089F8C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1408A07A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1408A0E88 (_CmGetMatchingDevicePanelListWorker.c)
 *     _PnpGetGenericObjectList @ 0x1408A3638 (_PnpGetGenericObjectList.c)
 *     PiCreateDriverSwDevices @ 0x1409ABE44 (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A86E20 (DrvDbGetObjectSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140974660 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v7[0] = v4;
  v7[1] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, (__int64)a2, v7);
}
