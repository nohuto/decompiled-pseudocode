/*
 * XREFs of ?ndisMWanSend@@YAHPEAX00@Z @ 0x1400DE040
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007FE50 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMWanSend(_QWORD *a1, _LIST_ENTRY *a2, _LIST_ENTRY *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  char v4; // si
  _LIST_ENTRY *Blink; // rcx
  unsigned int v9; // ebp
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  __int64 Number; // rax
  _NDIS_MINIPORT_STATS *v12; // r8
  __int64 v13; // rdx
  KIRQL v14; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
  v4 = 0;
  NewIrql = 0;
  if ( (v3->Flags & 0x80000000) != 0 )
    return 3221225473LL;
  if ( (v3->Flags & 0x40000) == 0 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    if ( !v3->LockAcquired )
    {
      v3->LockAcquired = 1;
      v4 = 1;
      v3->LockThread = KeGetCurrentThread();
    }
  }
  if ( (v3->Flags & 0x40000) != 0 || v4 )
  {
    if ( (v3->Flags & 0x40000) == 0 )
    {
      v3->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v3->Lock);
    }
    v9 = ((__int64 (__fastcall *)(void *, _LIST_ENTRY *, _LIST_ENTRY *))v3->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
           v3->MiniportAdapterContext,
           a2,
           a3);
    if ( (v3->Flags & 0x40000) == 0 )
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v3);
    if ( !v9 )
    {
      BottomIfStats = v3->BottomIfStats;
      if ( BottomIfStats )
      {
        Number = KeGetPcr()->Prcb.Number;
        ++BottomIfStats[Number].ifHCOutUcastPkts;
      }
      v12 = v3->BottomIfStats;
      if ( v12 )
      {
        v13 = KeGetPcr()->Prcb.Number;
        v12[v13].ifHCOutUcastOctets += LODWORD(a3[1].Blink);
        v12[v13].ifHCOutOctets += LODWORD(a3[1].Blink);
      }
    }
  }
  else
  {
    a3->Blink = a3;
    a3->Flink = a3;
    Blink = v3->PacketList.Blink;
    if ( Blink->Flink != &v3->PacketList )
      __fastfail(3u);
    a3->Blink = Blink;
    a3->Flink = &v3->PacketList;
    Blink->Flink = a3;
    v3->PacketList.Blink = a3;
    a3[5].Flink = a2;
    ndisMQueueWorkItem(v3, 1, 0LL);
    v9 = 259;
  }
  if ( (v3->Flags & 0x40000) == 0 )
  {
    if ( v4 )
    {
      v3->LockAcquired = 0;
      v3->LockThread = 0LL;
    }
    v14 = NewIrql;
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, v14);
  }
  return v9;
}
