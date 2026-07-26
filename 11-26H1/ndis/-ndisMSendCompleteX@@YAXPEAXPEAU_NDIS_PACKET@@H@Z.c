/*
 * XREFs of ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008B440
 * Callers:
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008B560 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400C9B18 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400CA880 (-ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14005A6F0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400CA3A0 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned __int16 *p_NdisPacketOobOffset; // rdi
  KIRQL v7; // bp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14

  p_NdisPacketOobOffset = &a2->Private.NdisPacketOobOffset;
  v7 = KfRaiseIrql(2u);
  if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a2->Reserved + *p_NdisPacketOobOffset) )
    ndisMFreeSGList(a1, a2);
  if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + *p_NdisPacketOobOffset) )
    ndisFreePaddedMdl(a2);
  v8 = *(unsigned int *)&a2[-1].ProtocolReserved[4];
  if ( (unsigned int)v8 >= ndisPacketStackSize )
    v9 = 16LL;
  else
    v9 = (__int64)a2 + 48 * (v8 - ndisPacketStackSize);
  v10 = *(_QWORD *)v9;
  *(_QWORD *)v9 = 1297040182LL;
  a2->Private.NdisPacketFlags &= 0xC0u;
  if ( !a3 )
    NDISM_SEND_PACKET_STATS(a1, a2);
  if ( *(_MDL **)((char *)&a2[1].Private.Head + *p_NdisPacketOobOffset) )
    ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, a3);
  else
    (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v10 + 112))(v10, a2, a3);
  if ( v7 != 2 )
    KeLowerIrql(v7);
}
