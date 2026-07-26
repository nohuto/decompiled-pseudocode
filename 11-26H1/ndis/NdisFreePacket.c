/*
 * XREFs of NdisFreePacket @ 0x14002D9B0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x14002BE50 (NdisAllocatePacketPoolEx.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14002C180 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x14002C840 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1400680C0 (ndisLWM5IndicateReceive.c)
 *     NdisMTransferDataComplete @ 0x1400DDC60 (NdisMTransferDataComplete.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1400DAF24 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __stdcall NdisFreePacket(PNDIS_PACKET Packet)
{
  struct _NDIS_PKT_POOL *Pool; // rdi
  unsigned __int64 Flink; // rsi
  unsigned __int16 v3; // bx
  KIRQL v4; // al
  unsigned __int16 PktsPerBlock; // bx
  KIRQL v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _NDIS_PKT_POOL **Blink; // rcx
  _LIST_ENTRY *p_AgingBlocks; // r14
  LONGLONG v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  struct _NDIS_PKT_POOL **v14; // rcx
  KIRQL v15; // bp
  _SLIST_HEADER *v16; // r15
  LONGLONG v17; // rcx
  _LIST_ENTRY *Alignment; // rax
  unsigned __int16 v19; // si
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *p_FreeBlocks; // rax

  Pool = (struct _NDIS_PKT_POOL *)Packet->Private.Pool;
  Flink = (unsigned __int64)Packet & 0xFFFFFFFFFFFFF000uLL;
  Packet->Private.NdisPacketFlags = 0;
  if ( Pool->BlockSize != 4096 )
    Flink = (unsigned __int64)Pool->FreeBlocks.Flink;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(Flink + 32), (PSLIST_ENTRY)Packet);
  if ( Pool->MaxBlocks > 1u )
  {
    if ( Pool->BlocksAllocated > 1 && (v3 = Pool->PktsPerBlock, ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == v3)
      || *(_DWORD *)(Flink + 48) == 1 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
      PktsPerBlock = Pool->PktsPerBlock;
      v6 = v4;
      if ( ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == PktsPerBlock )
      {
        *(_QWORD *)(Flink + 16) = MEMORY[0xFFFFF78000000320];
        v7 = *(_QWORD *)Flink;
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) != Flink )
          goto LABEL_10;
        v8 = *(_QWORD **)(Flink + 8);
        if ( *v8 != Flink )
          goto LABEL_10;
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        Blink = (struct _NDIS_PKT_POOL **)Pool->AgingBlocks.Blink;
        if ( *Blink != (struct _NDIS_PKT_POOL *)&Pool->AgingBlocks )
          goto LABEL_10;
        *(_QWORD *)Flink = &Pool->AgingBlocks;
        *(_QWORD *)(Flink + 8) = Blink;
        *Blink = (struct _NDIS_PKT_POOL *)Flink;
        Pool->AgingBlocks.Blink = (_LIST_ENTRY *)Flink;
        *(_DWORD *)(Flink + 48) = 2;
      }
      else if ( *(_DWORD *)(Flink + 48) == 1 )
      {
        v12 = *(_QWORD *)Flink;
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) != Flink
          || (v13 = *(_QWORD **)(Flink + 8), *v13 != Flink)
          || (*v13 = v12,
              *(_QWORD *)(v12 + 8) = v13,
              v14 = (struct _NDIS_PKT_POOL **)Pool->FreeBlocks.Blink,
              *v14 != (struct _NDIS_PKT_POOL *)&Pool->FreeBlocks) )
        {
LABEL_10:
          __fastfail(3u);
        }
        *(_QWORD *)Flink = &Pool->FreeBlocks;
        *(_QWORD *)(Flink + 8) = v14;
        *v14 = (struct _NDIS_PKT_POOL *)Flink;
        Pool->FreeBlocks.Blink = (_LIST_ENTRY *)Flink;
        *(_DWORD *)(Flink + 48) = 0;
      }
      KeReleaseSpinLock(&Pool->Lock, v6);
    }
    p_AgingBlocks = &Pool->AgingBlocks;
    if ( p_AgingBlocks->Flink != p_AgingBlocks )
    {
      v11 = MEMORY[0xFFFFF78000000320];
      if ( MEMORY[0xFFFFF78000000320] > Pool->NextScavengeTick.QuadPart )
      {
        v15 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
        while ( 1 )
        {
          v16 = (_SLIST_HEADER *)p_AgingBlocks->Flink;
          if ( p_AgingBlocks->Flink == p_AgingBlocks )
            break;
          v17 = v16[1].Alignment + PoolAgingTicks.QuadPart;
          if ( v11 <= v17 )
          {
            Pool->NextScavengeTick.QuadPart = v17;
            break;
          }
          if ( (_LIST_ENTRY *)v16->Region != p_AgingBlocks )
            goto LABEL_10;
          Alignment = (_LIST_ENTRY *)v16->Alignment;
          if ( *(_SLIST_HEADER **)(v16->Alignment + 8) != v16 )
            goto LABEL_10;
          p_AgingBlocks->Flink = Alignment;
          Alignment->Blink = p_AgingBlocks;
          v19 = Pool->PktsPerBlock;
          if ( ExQueryDepthSList(v16 + 2) == v19 )
          {
            ndisFreePacketPoolHdr(v16, Pool);
          }
          else
          {
            v20 = Pool->FreeBlocks.Flink;
            p_FreeBlocks = &Pool->FreeBlocks;
            if ( v20->Blink != &Pool->FreeBlocks )
              goto LABEL_10;
            v16->Alignment = (unsigned __int64)v20;
            v16->Region = (unsigned __int64)p_FreeBlocks;
            v20->Blink = (_LIST_ENTRY *)v16;
            p_FreeBlocks->Flink = (_LIST_ENTRY *)v16;
            LODWORD(v16[3].Alignment) = 0;
          }
        }
        KeReleaseSpinLock(&Pool->Lock, v15);
      }
    }
  }
}
