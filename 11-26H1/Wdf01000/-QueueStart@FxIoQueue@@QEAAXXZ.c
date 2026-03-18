/*
 * XREFs of ?QueueStart@FxIoQueue@@QEAAXXZ @ 0x1400611DC
 * Callers:
 *     imp_WdfIoQueueStart @ 0x1400610E0 (imp_WdfIoQueueStart.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::QueueStart(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // di
  unsigned __int16 v6; // r9
  _FX_IO_QUEUE_STATE m_QueueState; // ecx
  FxVerifierLock *v8; // rcx
  const void *_a1; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v8 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v8, &irql, a3);
    v5 = irql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  m_QueueState = this->m_QueueState;
  if ( (m_QueueState & 0x10000) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  else
  {
    this->m_QueueState = m_QueueState | 1;
  }
  this->m_QueueState |= 2u;
  this->m_CancelDispatchedRequests = 0;
  if ( this->m_Queue.m_RequestCount > 0 )
  {
    this->m_TransitionFromEmpty = 1;
    this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  }
  FxIoQueue::DispatchEvents(this, v5, 0LL, v6);
}
