/*
 * XREFs of _PnpCtxRegOpenCurrentUserKey @ 0x140A996EC
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408080D8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408085FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14080993C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14080CD34 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A7DF78 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall PnpCtxRegOpenCurrentUserKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenCurrentUserKey(v5, 0, 0x2000000u, a4);
}
