/*
 * XREFs of NdisMCoIndicateReceivePacket @ 0x1400D8FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMCoIndicateReceivePacket(NDIS_HANDLE NdisVcHandle, PPNDIS_PACKET PacketArray, UINT NumberOfPackets)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PPNDIS_PACKET, UINT))NdisVcHandle + 35))(
    NdisVcHandle,
    PacketArray,
    NumberOfPackets);
}
