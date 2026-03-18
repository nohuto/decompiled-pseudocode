/*
 * XREFs of ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x14006223C
 * Callers:
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1400621F0 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x140007938 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::DeferredDispatchRequestsFromWorkerThread(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rdi
  unsigned __int64 *p_m_Lock; // rbp
  unsigned __int8 v6; // al
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // r8
  KIRQL v9; // si
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, a3);
    v6 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  this->m_RequeueDeferredDispatcher = 0;
  FxIoQueue::DispatchEvents(this, v6, 0LL, v7);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v8);
    v9 = irql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  if ( this->m_Deleted
    || !this->m_RequeueDeferredDispatcher
    || !FxSystemWorkItem::EnqueueWorker(
          this->m_SystemWorkItem,
          (void (__fastcall *)(void *))FxIoQueue::_DeferredDispatchThreadThunk,
          this,
          1u) )
  {
    *(_WORD *)&this->m_WorkItemQueued = 0;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v9, v10);
  else
    KeReleaseSpinLock(p_m_Lock, v9);
}
