/*
 * XREFs of PiDrvDbDriverStoreNodesUpdated @ 0x1407B842C
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x1407BB480 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PiDrvDbDriverStoreNodesUpdated()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return ZwUpdateWnfStateData(&WNF_PNPD_DRIVER_STORE_NODES_UDPATED, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
