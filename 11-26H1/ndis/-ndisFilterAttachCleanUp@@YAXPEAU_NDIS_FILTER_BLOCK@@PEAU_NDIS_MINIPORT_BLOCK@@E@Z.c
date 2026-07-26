/*
 * XREFs of ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001CBA0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIfAddIfStackEntry @ 0x14001D270 (NdisIfAddIfStackEntry.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140054860 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x140167E70 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1401698F0 (NdisIfDeregisterInterface.c)
 */

void __fastcall ndisFilterAttachCleanUp(_NDIS_FILTER_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2, char a3)
{
  _NET_LUID_LH v5; // rdi
  KIRQL v6; // dl
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  _NDIS_FILTER_BLOCK *HigherFilter; // rcx
  _NDIS_FILTER_BLOCK *v9; // rcx
  _NDIS_FILTER_BLOCK *v10; // rax
  _NDIS_FILTER_BLOCK *v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // di
  _NDIS_FILTER_BLOCK *v14; // rax
  NET_IFINDEX IfIndex; // edx
  KIRQL v16; // di

  if ( a3 )
  {
    v5.Value = (ULONG64)this->IfBlock->NetLuid;
    NdisIfDeregisterInterface(this->IfIndex);
    NdisIfFreeNetLuidIndex(*((NET_IFTYPE *)&v5.Info + 3), (v5.Value >> 24) & 0xFFFFFF);
    this->IfBlock = 0LL;
    this->IfIndex = 0;
  }
  if ( a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    LowerFilter = this->LowerFilter;
    HigherFilter = this->HigherFilter;
    if ( LowerFilter )
      LowerFilter->HigherFilter = HigherFilter;
    else
      a2->LowestFilter = HigherFilter;
    v9 = this->HigherFilter;
    v10 = this->LowerFilter;
    if ( v9 )
      v9->LowerFilter = v10;
    else
      a2->HighestFilter = v10;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v6);
    v11 = this->HigherFilter;
    if ( v11 )
    {
      v14 = this->LowerFilter;
      if ( v14 )
        IfIndex = v14->IfIndex;
      else
        IfIndex = this->Miniport->IfIndex;
      NdisIfAddIfStackEntry(v11->IfIndex, IfIndex);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      ndisIfUpdateFilterIfStack(this->Miniport);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v16);
    }
    v12 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v13 = v12;
    ndisSetupLwfMiniportHandlers(a2);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v13);
  }
  ndisDereferenceFilter(this, (enum _NDIS_LWF_REFTAG)255);
}
