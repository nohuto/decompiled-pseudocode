/*
 * XREFs of ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DCE40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14005A6F0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008BF10 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400DED08 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // ecx
  struct _NDIS_PACKET **p_FirstPendingPacket; // rsi
  unsigned int v4; // ebp
  struct _NDIS_PACKET **v5; // r12
  struct _NDIS_PACKET *v6; // rbx
  unsigned __int8 *WrapperReserved; // r14
  __int64 v8; // rax
  __int64 v9; // r10
  struct _NDIS_PACKET *v10; // rcx
  struct _NDIS_STACK_RESERVED *v11; // r15
  __int64 v12; // r13
  struct _NDIS_PACKET **v13; // rdx
  __int64 NdisPacketOobOffset; // rax
  __int64 *v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned int v18; // r14d
  struct _NDIS_STACK_RESERVED *v19; // r12
  __int64 v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v29; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v30; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-C8h]
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // [rsp+38h] [rbp-C0h]
  _QWORD v33[16]; // [rsp+40h] [rbp-B8h] BYREF

  v30 = 0LL;
  memset(v33, 0, sizeof(v33));
  MaxSendPackets = a1->MaxSendPackets;
  p_FirstPendingPacket = &a1->FirstPendingPacket;
  v29 = MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  if ( a1->PacketList.Flink == &a1->PacketList )
    *p_FirstPendingPacket = 0LL;
  if ( *p_FirstPendingPacket )
  {
    while ( 1 )
    {
      if ( (a1->Flags & 0x400000) == 0 )
        return 0;
      v4 = 0;
      v5 = (struct _NDIS_PACKET **)v33;
      if ( !MaxSendPackets )
        return 0;
      do
      {
        v6 = *p_FirstPendingPacket;
        if ( !*p_FirstPendingPacket )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET(*p_FirstPendingPacket, &v30);
        WrapperReserved = v6->WrapperReserved;
        *p_FirstPendingPacket = 0LL;
        v8 = *(_QWORD *)&v6->MacReserved[16];
        if ( v8 != v9 )
          *p_FirstPendingPacket = (struct _NDIS_PACKET *)(v8 - 64);
        if ( ((a1->Flags & 0x4000) != 0 || (v6->Private.Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0)
          && ndisMLoopbackPacketX(a1, v6) )
        {
          v10 = *(struct _NDIS_PACKET **)WrapperReserved;
          v11 = v30;
          v12 = *(_QWORD *)v30;
          if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
            || (v13 = *(struct _NDIS_PACKET ***)&v6->MacReserved[24], *v13 != (struct _NDIS_PACKET *)&v6->MacReserved[16]) )
          {
LABEL_46:
            __fastfail(3u);
          }
          *v13 = v10;
          v10->Private.Head = (_MDL *)v13;
          *(_QWORD *)&v6->MacReserved[24] = &v6->MacReserved[16];
          *(_QWORD *)&v6->MacReserved[16] = &v6->MacReserved[16];
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          *(_QWORD *)v11 = 1297040178LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          *((_DWORD *)v11 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v6[1].Private.Pool + v6->Private.NdisPacketOobOffset) )
            ndisFreePaddedMdl(v6);
          NdisPacketOobOffset = v6->Private.NdisPacketOobOffset;
          v6->Private.NdisPacketFlags &= 0xC0u;
          if ( *(_MDL **)((char *)&v6[1].Private.Head + NdisPacketOobOffset) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, v6, 0);
          else
            (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v12 + 112))(v12, v6, 0LL);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
        else
        {
          *v5 = v6;
          ++v4;
          v6->Private.NdisPacketFlags |= 0x18u;
          ++v5;
          *(unsigned int *)((char *)&v6->Private.Count + v6->Private.NdisPacketOobOffset) = 0;
        }
      }
      while ( v4 < v29 );
      if ( !v4 )
        return 0;
      v15 = v33;
      a1->MiniportThread = 0LL;
      v31 = v33;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      WSendPacketsHandler(a1->MiniportAdapterContext, (_NDIS_PACKET **)v33, v4);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      v16 = 0LL;
      while ( 1 )
      {
        v17 = *v15;
        v18 = *(_DWORD *)(*(unsigned __int16 *)(v17 + 42) + v17 + 32);
        *(_BYTE *)(v17 + 41) &= ~8u;
        if ( v18 == 259 )
          goto LABEL_40;
        if ( v18 == -1073741670 )
          break;
        if ( !v18 )
          NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v17);
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v17, &v30);
        v19 = v30;
        v20 = *(_QWORD *)v30;
        if ( (*(_QWORD *)v30 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v21 = (_QWORD *)(v17 + 64);
          v22 = *(_QWORD *)(v17 + 64);
          if ( *(_QWORD *)(v22 + 8) != v17 + 64 )
            goto LABEL_46;
          v23 = *(_QWORD **)(v17 + 72);
          if ( (_QWORD *)*v23 != v21 )
            goto LABEL_46;
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          *(_QWORD *)(v17 + 72) = v21;
          *v21 = v21;
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          *(_QWORD *)v19 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          *((_DWORD *)v19 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v17 + 42) + v17 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v17);
          v24 = *(unsigned __int16 *)(v17 + 42);
          *(_BYTE *)(v17 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v24 + v17 + 112) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v17, v18);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v20 + 112))(v20, v17, v18);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
LABEL_40:
        v16 = (unsigned int)(v16 + 1);
        v15 = ++v31;
        if ( (unsigned int)v16 >= v4 )
          goto LABEL_44;
      }
      *p_FirstPendingPacket = (struct _NDIS_PACKET *)v17;
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
      v25 = &v33[v16];
      v26 = v4 - (unsigned int)v16;
      do
      {
        v27 = *v25++;
        *(_BYTE *)(v27 + 41) &= ~0x10u;
        --v26;
      }
      while ( v26 );
LABEL_44:
      if ( !*p_FirstPendingPacket )
        return 0;
      MaxSendPackets = v29;
    }
  }
  return 0;
}
