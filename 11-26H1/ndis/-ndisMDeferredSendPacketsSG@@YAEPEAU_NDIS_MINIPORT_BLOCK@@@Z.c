/*
 * XREFs of ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DE390
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008BF10 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400CA3A0 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPacketsSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int Flags; // eax
  unsigned int MaxSendPackets; // r12d
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  _NDIS_PACKET **v5; // rbp
  unsigned int v6; // esi
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r15
  __int64 v9; // rax
  __int64 v10; // r10
  _NDIS_PACKET *v11; // rcx
  struct _NDIS_STACK_RESERVED *v12; // r14
  __int64 v13; // r13
  _NDIS_PACKET **v14; // rdx
  __int64 v15; // r8
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v17; // r12
  unsigned int v18; // ebp
  __int64 v19; // rdi
  unsigned int v20; // r14d
  struct _NDIS_STACK_RESERVED *v21; // r15
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  struct _NDIS_STACK_RESERVED *v32; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-D0h]
  void (__fastcall *v34)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v35[16]; // [rsp+40h] [rbp-B8h] BYREF

  v32 = 0LL;
  memset(v35, 0, sizeof(v35));
  Flags = a1->Flags;
  MaxSendPackets = a1->MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  v33 = MaxSendPackets;
  v34 = WSendPacketsHandler;
  if ( (Flags & 0x400000) == 0 && !a1->FirstPendingPacket )
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
  if ( a1->PacketList.Flink == &a1->PacketList )
    a1->FirstPendingPacket = 0LL;
  if ( a1->FirstPendingPacket )
  {
    while ( 1 )
    {
      if ( (a1->Flags & 0x400000) == 0 )
        return 0;
      v5 = (_NDIS_PACKET **)v35;
      v6 = 0;
      if ( !MaxSendPackets )
        return 0;
      do
      {
        FirstPendingPacket = a1->FirstPendingPacket;
        if ( !FirstPendingPacket )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v32);
        a1->FirstPendingPacket = 0LL;
        WrapperReserved = FirstPendingPacket->WrapperReserved;
        v9 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
        if ( v9 != v10 )
          a1->FirstPendingPacket = (_NDIS_PACKET *)(v9 - 64);
        if ( ((a1->Flags & 0x4000) != 0
           || (FirstPendingPacket->Private.Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0)
          && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
        {
          v11 = *(_NDIS_PACKET **)WrapperReserved;
          v12 = v32;
          v13 = *(_QWORD *)v32;
          if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
            || (v14 = *(_NDIS_PACKET ***)&FirstPendingPacket->MacReserved[24],
                *v14 != (_NDIS_PACKET *)&FirstPendingPacket->MacReserved[16]) )
          {
LABEL_51:
            __fastfail(3u);
          }
          *v14 = v11;
          v11->Private.Head = (_MDL *)v14;
          *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
          *(_QWORD *)&FirstPendingPacket->MacReserved[16] = &FirstPendingPacket->MacReserved[16];
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          *(_QWORD *)v12 = 1297040178LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(unsigned __int64 *)((char *)FirstPendingPacket->Reserved
                                   + FirstPendingPacket->Private.NdisPacketOobOffset) )
            ndisMFreeSGList(a1, FirstPendingPacket, v15);
          *((_DWORD *)v12 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0
            && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
          {
            ndisFreePaddedMdl(FirstPendingPacket);
          }
          NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
          FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
          if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, FirstPendingPacket, 0);
          else
            (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v13 + 112))(v13, FirstPendingPacket, 0LL);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
        else
        {
          *v5 = FirstPendingPacket;
          FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
          ++v6;
          ++v5;
          *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        }
      }
      while ( v6 < MaxSendPackets );
      if ( !v6 )
        return 0;
      a1->MiniportThread = 0LL;
      v17 = v35;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v34(a1->MiniportAdapterContext, (_NDIS_PACKET **)v35, v6);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      v18 = 0;
      while ( 1 )
      {
        v19 = *v17;
        v20 = *(_DWORD *)(*(unsigned __int16 *)(*v17 + 42LL) + *v17 + 32LL);
        *(_BYTE *)(*v17 + 41LL) &= ~8u;
        if ( v20 == 259 )
          goto LABEL_45;
        if ( v20 == -1073741670 )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v19, &v32);
        v21 = v32;
        v22 = *(_QWORD *)v32;
        if ( (*(_QWORD *)v32 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v23 = (_QWORD *)(v19 + 64);
          v24 = *(_QWORD *)(v19 + 64);
          if ( *(_QWORD *)(v24 + 8) != v19 + 64 )
            goto LABEL_51;
          v25 = *(_QWORD **)(v19 + 72);
          if ( (_QWORD *)*v25 != v23 )
            goto LABEL_51;
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          *(_QWORD *)(v19 + 72) = v23;
          *v23 = v23;
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          *(_QWORD *)v21 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 80) )
            ndisMFreeSGList(a1, (struct _NDIS_PACKET *)v19, v26);
          *((_DWORD *)v21 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v19);
          v27 = *(unsigned __int16 *)(v19 + 42);
          *(_BYTE *)(v19 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v27 + v19 + 112) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v19, v20);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v22 + 112))(v22, v19, v20);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
LABEL_45:
        ++v18;
        ++v17;
        if ( v18 >= v6 )
          goto LABEL_49;
      }
      a1->FirstPendingPacket = (_NDIS_PACKET *)v19;
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
      v28 = v6 - v18;
      v29 = &v35[v18];
      do
      {
        v30 = *v29++;
        *(_BYTE *)(v30 + 41) &= ~0x10u;
        --v28;
      }
      while ( v28 );
LABEL_49:
      if ( !a1->FirstPendingPacket )
        return 0;
      MaxSendPackets = v33;
    }
  }
  return 0;
}
