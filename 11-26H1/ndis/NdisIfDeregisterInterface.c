/*
 * XREFs of NdisIfDeregisterInterface @ 0x1401698F0
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
