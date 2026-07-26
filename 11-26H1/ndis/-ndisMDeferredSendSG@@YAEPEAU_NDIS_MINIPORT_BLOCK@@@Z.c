/*
 * XREFs of ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DE7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008BF10 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400CA3A0 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PACKET *FirstPendingPacket; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rcx
  unsigned __int64 *p_Lock; // rbp
  unsigned int Flags; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct _NDIS_STACK_RESERVED *v8; // r14
  __int64 v9; // r15
  _NDIS_PACKET **v10; // rdx
  __int64 v11; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  while ( a1->FirstPendingPacket )
  {
    if ( (a1->Flags & 0x400000) == 0 )
      return 0;
    FirstPendingPacket = a1->FirstPendingPacket;
    NDIS_STACK_RESERVED_FROM_PACKET(FirstPendingPacket, &v14);
    a1->FirstPendingPacket = 0LL;
    v3 = *(struct _NDIS_MINIPORT_BLOCK **)&FirstPendingPacket->MacReserved[16];
    if ( v3 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
      a1->FirstPendingPacket = (_NDIS_PACKET *)&v3[-1].PollModeConfigKnobs.MaxPacketsReceiveComplete.AtDispatch;
    if ( (a1->Flags & 0x4000) != 0 || (FirstPendingPacket->Private.Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0 )
    {
      p_Lock = &a1->Lock;
      if ( ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v6 = 0;
LABEL_10:
        FirstPendingPacket->Private.NdisPacketFlags &= ~0x10u;
        if ( v6 == -1073741670 )
        {
          a1->FirstPendingPacket = FirstPendingPacket;
          _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
        }
        else
        {
          v7 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
          v8 = v14;
          v9 = *(_QWORD *)v14;
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
          if ( *(unsigned __int64 *)((char *)FirstPendingPacket->Reserved
                                   + FirstPendingPacket->Private.NdisPacketOobOffset) )
            ndisMFreeSGList(a1, FirstPendingPacket, v11);
          *((_DWORD *)v8 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0
            && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
          {
            ndisFreePaddedMdl(FirstPendingPacket);
          }
          NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
          FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
          if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, FirstPendingPacket, v6);
          else
            (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v9 + 112))(v9, FirstPendingPacket, v6);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
        continue;
      }
    }
    else
    {
      p_Lock = &a1->Lock;
    }
    Flags = FirstPendingPacket->Private.Flags;
    FirstPendingPacket->Private.NdisPacketFlags |= 0x10u;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    v6 = a1->SendHandler(a1->MiniportAdapterContext, FirstPendingPacket, Flags);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    if ( v6 != 259 )
      goto LABEL_10;
  }
  return 0;
}
