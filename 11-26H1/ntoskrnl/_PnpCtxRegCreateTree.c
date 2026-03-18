/*
 * XREFs of _PnpCtxRegCreateTree @ 0x14091E1FC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B64A0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x14091DE9C (DrvDbLoadDatabaseNode.c)
 *     _PnpOpenPropertiesKey @ 0x140995B20 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140B26E5C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(
        __int64 a1,
        void *a2,
        const wchar_t *a3,
        ULONG a4,
        ACCESS_MASK DesiredAccess,
        __int64 a6,
        HANDLE *KeyHandle,
        ULONG *a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  return RegRtlCreateTreeTransacted(a2, a3, a4, DesiredAccess, a6, 0, KeyHandle, a8, v9);
}
