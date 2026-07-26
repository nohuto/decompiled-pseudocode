/*
 * XREFs of ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14002B930
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x14002BAB0 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14002BB60 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisMPauseComplete @ 0x140066AD0 (NdisMPauseComplete.c)
 */

void __fastcall ndisReturnNetBufferListsToPackets(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  KIRQL v3; // r15
  int v5; // ebp
  char v7; // si
  struct _NET_BUFFER_LIST *Alignment; // r14
  struct _NDIS_PACKET *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // eax
  bool v13; // zf

  v3 = 0;
  v5 = 0;
  if ( (a3 & 1) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v3 = KfRaiseIrql(2u);
  }
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      v9 = ndisXlateReturnNetBufferListToPacket(a2);
      if ( v9 )
      {
        v10 = *(_DWORD *)&v9[-1].ProtocolReserved[4] + 1;
        *(_DWORD *)&v9[-1].ProtocolReserved[4] = v10;
        if ( v10 >= ndisPacketStackSize )
          v11 = 16LL;
        else
          v11 = (__int64)v9 + 48 * (v10 - (unsigned __int64)ndisPacketStackSize);
        *(_QWORD *)v11 = a1;
        ++v5;
        ndisReturnPacketToMiniport(a1, v9);
      }
      a2 = Alignment;
    }
    while ( Alignment );
  }
  KeAcquireSpinLockAtDpcLevel(&a1->RecvLock);
  v12 = a1->OutstandingReceives - v5;
  v13 = a1->RecvState == NdisMiniportPausing;
  a1->OutstandingReceives = v12;
  if ( !v13 || v12 )
  {
    a1->MiniportRecvLockThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->RecvLock);
  }
  else
  {
    a1->RecvState = NdisMiniportPaused;
    a1->MiniportRecvLockThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->RecvLock);
    NdisMPauseComplete(a1);
  }
  if ( !v7 && v3 != 2 )
    KeLowerIrql(v3);
}
