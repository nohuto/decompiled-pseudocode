/*
 * XREFs of PiDrvDbDriverStoreNodesUpdated @ 0x1407B53CC
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x1407B8420 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 PiDrvDbDriverStoreNodesUpdated()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return ZwUpdateWnfStateData((__int64)&WNF_PNPD_DRIVER_STORE_NODES_UDPATED, (__int64)&v1);
}
