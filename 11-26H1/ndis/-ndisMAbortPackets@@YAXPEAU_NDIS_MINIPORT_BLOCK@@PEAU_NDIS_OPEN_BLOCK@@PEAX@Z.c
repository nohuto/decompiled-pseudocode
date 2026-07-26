/*
 * XREFs of ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007EE80
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A0E2C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x14002C840 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14002C9F0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400CA3A0 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAbortPackets(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2, void *a3)
{
  _SINGLE_LIST_ENTRY *Next; // rcx
  _LIST_ENTRY *p_PacketList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY **p_Flink; // rdx
  __int64 v9; // rax
  struct _NDIS_PACKET *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 NdisPacketOobOffset; // rax
  PMDL *v15; // rbx
  __int64 v16; // rax
  struct _NET_BUFFER_LIST *v17; // rax
  _QWORD *v18; // [rsp+40h] [rbp-48h] BYREF
  _LIST_ENTRY *v19; // [rsp+48h] [rbp-40h]
  _QWORD v20[2]; // [rsp+50h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x45u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      0LL);
  Next = a1->WorkQueue[1].Next;
  if ( Next )
  {
    a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
    a1->SingleWorkItems[1].Next = Next;
  }
  v20[1] = v20;
  p_PacketList = &a1->PacketList;
  v20[0] = v20;
  v19 = (_LIST_ENTRY *)&v18;
  v18 = &v18;
  a1->FirstPendingPacket = 0LL;
  while ( 1 )
  {
    Flink = p_PacketList->Flink;
    if ( p_PacketList->Flink == p_PacketList )
      break;
    if ( Flink->Blink != p_PacketList
      || (v7 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_PacketList->Flink = v7, v7->Blink = p_PacketList, p_Flink = &v19->Flink, v19->Flink != (_LIST_ENTRY *)&v18) )
    {
LABEL_29:
      __fastfail(3u);
    }
    Flink->Blink = v19;
    Flink->Flink = (_LIST_ENTRY *)&v18;
    *p_Flink = Flink;
    v19 = Flink;
  }
  a1->FirstPendingPacket = 0LL;
  while ( v18 != &v18 )
  {
    if ( (_QWORD **)v18[1] != &v18 )
      goto LABEL_29;
    v9 = *v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 )
      goto LABEL_29;
    v10 = (struct _NDIS_PACKET *)(v18 - 8);
    v18 = (_QWORD *)*v18;
    *(_QWORD *)(v9 + 8) = &v18;
    v11 = *(_DWORD *)&v10[-1].ProtocolReserved[4];
    if ( v11 >= ndisPacketStackSize )
      v12 = 16LL;
    else
      v12 = (__int64)v10 + 48 * (v11 - (unsigned __int64)ndisPacketStackSize);
    v13 = *(_QWORD *)v12;
    *(_QWORD *)v12 = 1297040183LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)v10->Reserved + v10->Private.NdisPacketOobOffset) )
      ndisMFreeSGList(a1, v10);
    if ( (a1->SendFlags & 8) != 0 )
    {
      NdisPacketOobOffset = v10->Private.NdisPacketOobOffset;
      if ( *(void **)((char *)&v10[1].Private.Pool + NdisPacketOobOffset) )
      {
        v10->Private.Flags &= ~0x10000u;
        v15 = *(PMDL **)((char *)&v10[1].Private.Pool + NdisPacketOobOffset);
        *(void **)((char *)&v10[1].Private.Pool + NdisPacketOobOffset) = 0LL;
        IoFreeMdl(*v15);
        *v15 = 0LL;
        v10->Private.ValidCounts = 0;
      }
    }
    v16 = v10->Private.NdisPacketOobOffset;
    v10->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v10[1].Private.Head + v16) )
    {
      v17 = ndisXlateSendCompletePacketToNetBufferList(v10, -1071448052);
      if ( v17 )
      {
        v17->Status = -1071448052;
        ndisInvokeNextSendCompleteHandler(
          v17,
          0,
          (struct _NDIS_FILTER_BLOCK *)a1,
          a1->Next.SendNetBufferListsCompleteObject,
          a1->Next.SendNetBufferListsCompleteContext,
          (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))a1->Next.SendNetBufferListsCompleteHandler);
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v13 + 112))(v13, v10, 3221291020LL);
    }
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x46u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      0LL);
}
