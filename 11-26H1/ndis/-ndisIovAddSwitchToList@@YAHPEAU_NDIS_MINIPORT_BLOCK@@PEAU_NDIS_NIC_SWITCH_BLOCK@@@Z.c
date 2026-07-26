/*
 * XREFs of ?ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1400DF9E0
 * Callers:
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E0A04 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisIovAddSwitchToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_NIC_SWITCH_BLOCK *a2)
{
  unsigned int v3; // esi
  _LIST_ENTRY *i; // rax
  unsigned int v6; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  KIRQL v9; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( i = a1->NicSwitchList.Flink; i != &a1->NicSwitchList; i = i->Flink )
  {
    v6 = *((_DWORD *)a2 + 9);
    if ( HIDWORD(i[2].Flink) == v6 )
    {
      v3 = -1073741270;
      goto LABEL_10;
    }
    if ( HIDWORD(i[2].Flink) > v6 )
      break;
  }
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  *(_QWORD *)a2 = Flink;
  *((_QWORD *)a2 + 1) = Blink;
  Flink->Blink = (_LIST_ENTRY *)a2;
  Blink->Flink = (_LIST_ENTRY *)a2;
  ++a1->NumSwitches;
LABEL_10:
  v9 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v9);
  return v3;
}
