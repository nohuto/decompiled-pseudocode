/*
 * XREFs of NdisMWanSendComplete @ 0x1400DE200
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall NdisMWanSendComplete(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, int a3)
{
  KIRQL v3; // di
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  __int64 Number; // rax
  _NDIS_MINIPORT_STATS *v9; // r8
  __int64 v10; // rdx
  _NDIS_OPEN_BLOCK *i; // rsi

  v3 = 0;
  if ( (a1->Flags & 0x40000) != 0 )
    v3 = KfRaiseIrql(2u);
  if ( !a3 )
  {
    BottomIfStats = a1->BottomIfStats;
    if ( BottomIfStats )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++BottomIfStats[Number].ifHCOutUcastPkts;
    }
    v9 = a1->BottomIfStats;
    if ( v9 )
    {
      v10 = KeGetPcr()->Prcb.Number;
      v9[v10].ifHCOutUcastOctets += *(unsigned int *)(a2 + 24);
      v9[v10].ifHCOutOctets += *(unsigned int *)(a2 + 24);
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  for ( i = a1->OpenQueue; ; i = i->MiniportNextOpen )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    if ( !i )
      break;
    i->ProtocolHandle->_NDIS_COMMON_OPEN_BLOCK::SendCompleteHandler(i->ProtocolBindingContext, (_NDIS_PACKET *)a2, a3);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  }
  if ( (a1->Flags & 0x40000) != 0 && v3 != 2 )
    KeLowerIrql(v3);
}
