/*
 * XREFs of ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400DEA10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14005A6F0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007FE50 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400CA3A0 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendCompleteSG(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  struct _NDIS_STACK_RESERVED *v6; // r14
  __int64 v7; // rbp
  unsigned __int8 *WrapperReserved; // rax
  __int64 v9; // rdx
  unsigned __int8 **v10; // rcx
  __int64 v11; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v13);
  v6 = v13;
  if ( (*(_DWORD *)v13 & 0xFFFFFF00) != 0x4D4F4300LL && (a2->Private.NdisPacketFlags & 0x10) != 0 )
  {
    if ( !a3 )
      NDISM_SEND_PACKET_STATS(a1, a2);
    if ( (a2->Private.NdisPacketFlags & 8) != 0 )
    {
      *(unsigned int *)((char *)&a2->Private.Count + a2->Private.NdisPacketOobOffset) = a3;
      a2->Private.NdisPacketFlags &= ~8u;
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      v7 = *(_QWORD *)v6;
      WrapperReserved = a2->WrapperReserved;
      v9 = *(_QWORD *)&a2->MacReserved[16];
      if ( *(struct _NDIS_PACKET **)(v9 + 8) != (struct _NDIS_PACKET *)&a2->MacReserved[16]
        || (v10 = *(unsigned __int8 ***)&a2->MacReserved[24], *v10 != WrapperReserved) )
      {
        __fastfail(3u);
      }
      *v10 = (unsigned __int8 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_QWORD *)&a2->MacReserved[24] = &a2->MacReserved[16];
      *(_QWORD *)WrapperReserved = WrapperReserved;
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
      *(_QWORD *)v6 = 1297040177LL;
      if ( a1->FirstPendingPacket )
        ndisMQueueWorkItem(a1, 1, 0LL);
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      if ( *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
        ndisMFreeSGList(a1, a2, v11);
      *((_DWORD *)v6 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(a2);
      NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
      a2->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&a2[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, a3);
      else
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v7 + 112))(v7, a2, a3);
    }
  }
}
