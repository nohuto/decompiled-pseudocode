/*
 * XREFs of ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DD4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14002C7C0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007FE50 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DED60 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int v6; // ebp
  KIRQL v7; // di
  unsigned int v8; // r12d
  _LIST_ENTRY *p_PacketList; // r8
  struct _NDIS_PACKET *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rdx
  __int64 v16; // r14
  _LIST_ENTRY **v17; // rcx
  __int64 NdisPacketOobOffset; // rax
  PMDL *v19; // rdi
  __int64 v20; // rax
  KIRQL v21; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v21 = v7;
  v8 = 0;
  a1->MiniportThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_PacketList = &a1->PacketList;
    do
    {
      v10 = *a2;
      if ( (a1->SendFlags & 8) != 0 )
      {
        v6 = ndisMCheckPacketAndPad(a1, *a2);
        p_PacketList = &a1->PacketList;
      }
      *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
      v11 = *(unsigned int *)&v10[-1].ProtocolReserved[4];
      if ( (unsigned int)v11 >= ndisPacketStackSize )
        v12 = 16LL;
      else
        v12 = (__int64)v10 + 48 * (v11 - ndisPacketStackSize);
      v13 = (_LIST_ENTRY *)&v10->MacReserved[16];
      *(_QWORD *)&v10->MacReserved[24] = &v10->MacReserved[16];
      *(_QWORD *)&v10->MacReserved[16] = &v10->MacReserved[16];
      Blink = p_PacketList->Blink;
      if ( Blink->Flink != p_PacketList )
LABEL_26:
        __fastfail(3u);
      v13->Flink = p_PacketList;
      *(_QWORD *)&v10->MacReserved[24] = Blink;
      Blink->Flink = v13;
      p_PacketList->Blink = v13;
      if ( v6 )
      {
        Flink = v13->Flink;
        v16 = *(_QWORD *)v12;
        if ( v13->Flink->Blink != v13 )
          goto LABEL_26;
        v17 = *(_LIST_ENTRY ***)&v10->MacReserved[24];
        if ( *v17 != v13 )
          goto LABEL_26;
        *v17 = Flink;
        Flink->Blink = (_LIST_ENTRY *)v17;
        *(_QWORD *)&v10->MacReserved[24] = v13;
        v13->Flink = v13;
        _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
        *(_QWORD *)v12 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *(_DWORD *)(v12 + 8) = 0;
        if ( (a1->SendFlags & 8) != 0 )
        {
          NdisPacketOobOffset = v10->Private.NdisPacketOobOffset;
          if ( *(void **)((char *)&v10[1].Private.Pool + NdisPacketOobOffset) )
          {
            v10->Private.Flags &= ~0x10000u;
            v19 = *(PMDL **)((char *)&v10[1].Private.Pool + NdisPacketOobOffset);
            *(void **)((char *)&v10[1].Private.Pool + NdisPacketOobOffset) = 0LL;
            IoFreeMdl(*v19);
            *v19 = 0LL;
            v10->Private.ValidCounts = 0;
          }
        }
        v20 = v10->Private.NdisPacketOobOffset;
        v10->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v10[1].Private.Head + v20) )
          ndisMSendCompletePacketToNetBufferLists(&a1->Header, v10, v6);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v16 + 112))(v16, v10, v6);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        p_PacketList = &a1->PacketList;
        a1->MiniportThread = KeGetCurrentThread();
        v6 = 0;
      }
      else if ( !a1->FirstPendingPacket )
      {
        a1->FirstPendingPacket = v10;
      }
      ++v8;
      ++a2;
    }
    while ( v8 < a3 );
    v7 = v21;
  }
  ndisMQueueWorkItem(a1, 1, 0LL);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
}
