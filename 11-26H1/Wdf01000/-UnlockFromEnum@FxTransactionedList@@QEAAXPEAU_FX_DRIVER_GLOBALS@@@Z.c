/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004326C
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x140023540 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14003C0F8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140042D64 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1400431B8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1400434F8 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140044670 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x140045404 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006001C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x14006DDCC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x1400724A8 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x140074924 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008BB40 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1400928D0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // r14
  __int64 v5; // r8
  _LIST_ENTRY *p_m_TransactionHead; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rdi
  int v11; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *v16; // rdx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF

  irql = 0;
  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  if ( this->m_ListLockedRecursionCount-- == 1 )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( 1 )
    {
      Flink = p_m_TransactionHead->Flink;
      if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        break;
      if ( Flink->Blink != p_m_TransactionHead || (v9 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_21:
        __fastfail(3u);
      p_m_TransactionHead->Flink = v9;
      v10 = Flink - 1;
      v9->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v11 = (int)Flink[1].Flink;
      if ( v11 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          goto LABEL_21;
        v10->Flink = &this->m_ListHead;
        v10->Blink = Blink;
        Blink->Flink = v10;
        this->m_ListHead.Blink = v10;
        this->EntryAdded(this, (FxTransactionedEntry *)v10);
      }
      else if ( v11 == 3 )
      {
        v16 = v10->Flink;
        if ( v10->Flink->Blink != v10 )
          goto LABEL_21;
        v17 = v10->Blink;
        if ( v17->Flink != v10 )
          goto LABEL_21;
        v17->Flink = v16;
        v16->Blink = v17;
        v18 = releaseHead.Blink;
        if ( releaseHead.Blink->Flink != &releaseHead )
          goto LABEL_21;
        Flink->Blink = releaseHead.Blink;
        Flink->Flink = &releaseHead;
        v18->Flink = Flink;
        releaseHead.Blink = Flink;
        this->EntryRemoved(this, (FxTransactionedEntry *)v10);
      }
      LODWORD(v10[2].Flink) = 1;
    }
  }
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  LOBYTE(v5) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v5);
  while ( 1 )
  {
    v13 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    if ( releaseHead.Flink->Blink != &releaseHead )
      goto LABEL_21;
    v14 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Flink->Blink != releaseHead.Flink )
      goto LABEL_21;
    releaseHead.Flink = releaseHead.Flink->Flink;
    v15 = v13 - 1;
    v14->Blink = &releaseHead;
    v13->Blink = v13;
    v13->Flink = v13;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v13[1].Blink->Flink[1].Flink)(
      v13[1].Blink,
      &v13[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v15[2].Blink->Flink[3].Flink)(v15[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
