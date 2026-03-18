/*
 * XREFs of ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x14005AE7C
 * Callers:
 *     imp_WdfWorkItemEnqueue @ 0x14005AD80 (imp_WdfWorkItemEnqueue.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxWorkItem::Enqueue(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v6; // bp
  KIRQL v7; // si
  unsigned __int8 v8; // r8
  unsigned int v9; // edx
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rcx
  const void *_a1; // rax
  FxVerifierLock *v12; // rcx
  FxVerifierLock *v13; // rcx
  const void *v14; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  m_Globals = this->m_Globals;
  irql = 0;
  v6 = 0;
  if ( m_ObjectFlags < 0 && (v12 = *(FxVerifierLock **)&this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.Lock) != 0LL )
  {
    FxVerifierLock::Lock(v12, &irql, a3);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_Enqueued )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0x12u, 0xEu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    }
  }
  else if ( this->m_RunningDown )
  {
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxWorkItem_cpp_Traceguids, v14);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
    this->m_Enqueued = 1;
    v9 = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      m_Callback = this[-1].m_Callback;
      if ( m_Callback )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)m_Callback,
          FxWorkItem::WorkItemThunk,
          322,
          "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
          TagAddRef,
          v9);
    }
    _InterlockedIncrement(&m_Globals->Refcnt);
    v6 = 1;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v13 = *(FxVerifierLock **)&this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.Lock) != 0LL )
  {
    FxVerifierLock::Unlock(v13, v7, v8);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v7);
  }
  if ( v6 )
    IoQueueWorkItem(
      this->m_WorkItem.m_WorkItem,
      (PIO_WORKITEM_ROUTINE)FxWorkItem::WorkItemThunk,
      DelayedWorkQueue,
      this);
}
