/*
 * XREFs of ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x140072C10
 * Callers:
 *     ?ndisVerifierFreePacketPool@@YAXPEAX@Z @ 0x1400C93F0 (-ndisVerifierFreePacketPool@@YAXPEAX@Z.c)
 *     NdisFreePacketPool @ 0x1400DAFB0 (NdisFreePacketPool.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1400DAF24 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __fastcall ndisFreePacketPoolInternal(struct _NDIS_PKT_POOL *a1)
{
  KIRQL v2; // bp
  _LIST_ENTRY *p_AgingBlocks; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *p_FreeBlocks; // rdi
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *p_UsedBlocks; // rdi
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // r8
  _LIST_ENTRY *Blink; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  p_AgingBlocks = &a1->AgingBlocks;
  while ( 1 )
  {
    Flink = p_AgingBlocks->Flink;
    if ( p_AgingBlocks->Flink == p_AgingBlocks )
      break;
    if ( Flink->Blink != p_AgingBlocks )
      goto LABEL_19;
    v5 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_19;
    p_AgingBlocks->Flink = v5;
    v5->Blink = p_AgingBlocks;
    ndisFreePacketPoolHdr(Flink, a1);
  }
  p_FreeBlocks = &a1->FreeBlocks;
  while ( 1 )
  {
    v7 = p_FreeBlocks->Flink;
    if ( p_FreeBlocks->Flink == p_FreeBlocks )
      break;
    if ( v7->Blink != p_FreeBlocks )
      goto LABEL_19;
    v8 = v7->Flink;
    if ( v7->Flink->Blink != v7 )
      goto LABEL_19;
    p_FreeBlocks->Flink = v8;
    v8->Blink = p_FreeBlocks;
    ndisFreePacketPoolHdr(v7, a1);
  }
  p_UsedBlocks = &a1->UsedBlocks;
  while ( 1 )
  {
    v10 = p_UsedBlocks->Flink;
    if ( p_UsedBlocks->Flink == p_UsedBlocks )
      break;
    if ( v10->Blink != p_UsedBlocks )
      goto LABEL_19;
    v11 = v10->Flink;
    if ( v10->Flink->Blink != v10 )
      goto LABEL_19;
    p_UsedBlocks->Flink = v11;
    v11->Blink = p_UsedBlocks;
    ndisFreePacketPoolHdr(v10, a1);
  }
  KeAcquireSpinLockAtDpcLevel(&ndisGlobalPacketPoolListLock);
  v12 = a1->GlobalPacketPoolList.Flink;
  if ( v12->Blink != &a1->GlobalPacketPoolList
    || (Blink = a1->GlobalPacketPoolList.Blink, Blink->Flink != &a1->GlobalPacketPoolList) )
  {
LABEL_19:
    __fastfail(3u);
  }
  Blink->Flink = v12;
  v12->Blink = Blink;
  KeReleaseSpinLockFromDpcLevel(&ndisGlobalPacketPoolListLock);
  KeReleaseSpinLock(&a1->Lock, v2);
  ExFreePoolWithTag(a1, 0);
}
