/*
 * XREFs of ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DCC10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14005A6F0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008BF10 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ndisMDeferredSend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PACKET *FirstPendingPacket; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rcx
  unsigned int v4; // ebx
  unsigned __int64 *p_Lock; // r15
  unsigned int Flags; // ebx
  __int64 v7; // rdx
  struct _NDIS_STACK_RESERVED *v8; // r14
  __int64 v9; // rbp
  _NDIS_PACKET **v10; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( a1->FirstPendingPacket )
  {
    while ( 1 )
    {
      if ( (a1->Flags & 0x400000) == 0 )
        return 0;
      FirstPendingPacket = a1->FirstPendingPacket;
      NDIS_STACK_RESERVED_FROM_PACKET(FirstPendingPacket, &v13);
      a1->FirstPendingPacket = 0LL;
      v3 = *(struct _NDIS_MINIPORT_BLOCK **)&FirstPendingPacket->MacReserved[16];
      if ( v3 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
        a1->FirstPendingPacket = (_NDIS_PACKET *)&v3[-1].PollModeConfigKnobs.MaxPacketsReceiveComplete.AtDispatch;
      if ( ((a1->Flags & 0x4000) != 0 || (FirstPendingPacket->Private.Flags & 0x80u) == 0
                                      && (a1->Flags & 0x8800000) != 0)
        && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        break;
      }
      Flags = FirstPendingPacket->Private.Flags;
      p_Lock = &a1->Lock;
      FirstPendingPacket->Private.NdisPacketFlags |= 0x10u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v4 = a1->SendHandler(a1->MiniportAdapterContext, FirstPendingPacket, Flags);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      if ( v4 != 259 )
        goto LABEL_11;
LABEL_24:
      if ( !a1->FirstPendingPacket )
        return 0;
    }
    v4 = 0;
    p_Lock = &a1->Lock;
LABEL_11:
    FirstPendingPacket->Private.NdisPacketFlags &= ~0x10u;
    if ( v4 == -1073741670 )
    {
      a1->FirstPendingPacket = FirstPendingPacket;
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
    }
    else
    {
      if ( !v4 )
        NDISM_SEND_PACKET_STATS(a1, FirstPendingPacket);
      v7 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      v8 = v13;
      v9 = *(_QWORD *)v13;
      if ( *(_NDIS_PACKET **)(v7 + 8) != (_NDIS_PACKET *)&FirstPendingPacket->MacReserved[16]
        || (v10 = *(_NDIS_PACKET ***)&FirstPendingPacket->MacReserved[24],
            *v10 != (_NDIS_PACKET *)&FirstPendingPacket->MacReserved[16]) )
      {
        __fastfail(3u);
      }
      *v10 = (_NDIS_PACKET *)v7;
      *(_QWORD *)(v7 + 8) = v10;
      *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
      *(_QWORD *)&FirstPendingPacket->MacReserved[16] = &FirstPendingPacket->MacReserved[16];
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
      *(_QWORD *)v8 = 1297040180LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      *((_DWORD *)v8 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0
        && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
      {
        ndisFreePaddedMdl(FirstPendingPacket);
      }
      NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
      FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists(&a1->Header, FirstPendingPacket, v4);
      else
        (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, FirstPendingPacket, v4);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    }
    goto LABEL_24;
  }
  return 0;
}
