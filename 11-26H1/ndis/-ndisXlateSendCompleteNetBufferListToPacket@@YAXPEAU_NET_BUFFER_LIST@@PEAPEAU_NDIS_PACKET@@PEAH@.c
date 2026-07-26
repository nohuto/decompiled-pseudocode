/*
 * XREFs of ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x14002BD10
 * Callers:
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400744A0 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D8EF0 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x14002DBB0 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 */

void __fastcall ndisXlateSendCompleteNetBufferListToPacket(
        struct _NET_BUFFER_LIST *a1,
        struct _NDIS_PACKET **a2,
        int *a3)
{
  struct _NDIS_PACKET *v5; // rdx
  int Status; // eax
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = (struct _NDIS_PACKET *)a1->NdisReserved[0];
  *a2 = v5;
  Status = a1->Status;
  v7 = *(unsigned int *)&v5[-1].ProtocolReserved[4];
  *a3 = Status;
  if ( (unsigned int)v7 >= ndisPacketStackSize )
    v8 = 16LL;
  else
    v8 = (__int64)v5 + 48 * (v7 - ndisPacketStackSize);
  *(_QWORD *)v8 = 1297040182LL;
  (*a2)->Private.NdisPacketFlags &= 0xC0u;
  ndisCopyNBLInfoToPacket(a1, *a2, 1LL);
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(a1, 0LL, 0x16u, a2, 0);
  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  NdisFreeNetBufferList(a1);
}
