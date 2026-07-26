/*
 * XREFs of NdisMCoSendComplete @ 0x140075EF0
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9B18 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMCoSendComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, PNDIS_PACKET Packet)
{
  (*((void (__fastcall **)(NDIS_STATUS, NDIS_HANDLE, PNDIS_PACKET))NdisVcHandle + 34))(Status, NdisVcHandle, Packet);
}
