/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140B202B8
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x14079B908 (PipHardwareConfigClearStartOverrides.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140898860 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140898D70 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1408991AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1408994C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14089A3A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14089AA88 (_CmGetMatchingDevicePanelListWorker.c)
 *     _PnpGetGenericObjectList @ 0x14089D238 (_PnpGetGenericObjectList.c)
 *     PiCreateDriverSwDevices @ 0x14090988C (PiCreateDriverSwDevices.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A80FB0 (DrvDbGetObjectSubKeyCallback.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140A8B16C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140919C00 (_RegRtlEnumKeyWithCallback.c)
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
