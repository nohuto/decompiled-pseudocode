/*
 * XREFs of ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E067C
 * Callers:
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140079530 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E19B0 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008DCB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E0C0C (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  _LIST_ENTRY *SwitchBySwitchId; // rax
  _LIST_ENTRY *v4; // rsi
  _LIST_ENTRY *Blink; // rbp
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  void *v7; // rdx
  struct _NDIS_VPORT_BLOCK *v8; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *v11; // rdx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // r8
  _LIST_ENTRY *v14; // rdx
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  v4 = SwitchBySwitchId;
  if ( SwitchBySwitchId )
  {
    Blink = SwitchBySwitchId[2].Blink;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, 0);
    v8 = VPortByVPortIdInternal;
    Flink = VPortByVPortIdInternal->AdapterLink.Flink;
    if ( (struct _NDIS_VPORT_BLOCK *)VPortByVPortIdInternal->AdapterLink.Flink->Blink != VPortByVPortIdInternal )
      goto LABEL_10;
    v10 = VPortByVPortIdInternal->AdapterLink.Blink;
    if ( (struct _NDIS_VPORT_BLOCK *)v10->Flink != v8 )
      goto LABEL_10;
    v10->Flink = Flink;
    Flink->Blink = v10;
    --a1->NumActiveVPorts;
    a1->MiniportThread = v7;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    a1->PFBlock = 0LL;
    v11 = v8->SwitchLink.Flink;
    if ( v11->Blink != &v8->SwitchLink
      || (v12 = v8->SwitchLink.Blink, v12->Flink != &v8->SwitchLink)
      || (v12->Flink = v11,
          v11->Blink = v12,
          --LODWORD(v4[3].Flink),
          v13 = v8->FunctionLink.Flink,
          v13->Blink != &v8->FunctionLink)
      || (v14 = v8->FunctionLink.Blink, v14->Flink != &v8->FunctionLink) )
    {
LABEL_10:
      __fastfail(3u);
    }
    v14->Flink = v13;
    v13->Blink = v14;
    --HIDWORD(Blink[1].Blink);
    ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(Blink, 0);
  }
}
