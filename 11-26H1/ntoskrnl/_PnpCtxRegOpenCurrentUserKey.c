/*
 * XREFs of _PnpCtxRegOpenCurrentUserKey @ 0x140A2AEB0
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089664C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140899F44 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140B26E5C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall PnpCtxRegOpenCurrentUserKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenCurrentUserKey(v5, 0LL, 0x2000000LL, a4);
}
