/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140931C40
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14072BA90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140931608 (DrvDbLoadDatabaseNode.c)
 *     _PnpOpenPropertiesKey @ 0x140953450 (_PnpOpenPropertiesKey.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140957BB0 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14095B2D0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7DF78 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
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
