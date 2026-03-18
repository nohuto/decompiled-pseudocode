/*
 * XREFs of ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1400651CC
 * Callers:
 *     ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x140095080 (-AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A318C (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1400A63F8 (-AddChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A6474 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A663C (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxTransactionedList::Add(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTransactionedEntry *Entry)
{
  __int64 v6; // r8
  int v7; // esi
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  if ( this->m_Deleting )
  {
    v7 = -1073741436;
    goto LABEL_6;
  }
  v7 = this->ProcessAdd(this, Entry);
  if ( v7 >= 0 )
  {
    if ( this->m_ListLockedRecursionCount )
    {
      Entry->m_Transaction = FxTransactionActionAdd;
      Blink = this->m_TransactionHead.Blink;
      p_m_TransactionLink = &Entry->m_TransactionLink;
      if ( Blink->Flink == &this->m_TransactionHead )
      {
        p_m_TransactionLink->Flink = &this->m_TransactionHead;
        Entry->m_TransactionLink.Blink = Blink;
        Blink->Flink = p_m_TransactionLink;
        this->m_TransactionHead.Blink = p_m_TransactionLink;
        goto LABEL_6;
      }
    }
    else
    {
      v8 = this->m_ListHead.Blink;
      if ( v8->Flink == &this->m_ListHead )
      {
        Entry->m_ListLink.Flink = &this->m_ListHead;
        Entry->m_ListLink.Blink = v8;
        v8->Flink = &Entry->m_ListLink;
        this->m_ListHead.Blink = &Entry->m_ListLink;
        this->EntryAdded(this, Entry);
        goto LABEL_6;
      }
    }
    __fastfail(3u);
  }
LABEL_6:
  LOBYTE(v6) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v6);
  return (unsigned int)v7;
}
