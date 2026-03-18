/*
 * XREFs of ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1400714AC
 * Callers:
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x140071460 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::DeferredDispatchRequestsFromDpc(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v7; // al
  unsigned __int16 v8; // r9
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  irql = 0;
  if ( m_ObjectFlags < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, a3);
    v7 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v7;
  }
  this->m_RequeueDeferredDispatcher = 0;
  FxIoQueue::DispatchEvents(this, v7, 0LL, v8);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v9);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  if ( this->m_Deleted || !this->m_RequeueDeferredDispatcher )
  {
    this->m_RequeueDeferredDispatcher = 0;
    this->m_DpcQueued = 0;
  }
  else
  {
    KeInsertQueueDpc(&this->m_Dpc, 0LL, 0LL);
  }
  FxNonPagedObject::Unlock(this, v10, v11);
}
