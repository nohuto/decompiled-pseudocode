/*
 * XREFs of ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x140008BA8
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1400088E0 (-Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::ProcessPurgeComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  FxIoQueueIoState m_PurgeComplete; // xmm0
  void *m_PurgeCompleteContext; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v7; // dl
  WDFQUEUE__ *v8; // rbx
  const void *_a1; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-28h] BYREF

  m_PurgeComplete = this->m_PurgeComplete;
  m_PurgeCompleteContext = this->m_PurgeCompleteContext;
  m_Globals = this->m_Globals;
  this->m_PurgeComplete.Method = 0LL;
  this->m_PurgeCompleteContext = 0LL;
  v7 = *PreviousIrql;
  callback = m_PurgeComplete;
  FxNonPagedObject::Unlock(this, v7);
  v8 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x52u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( callback.Method )
  {
    if ( !this->m_ObjectSize )
      v8 = 0LL;
    FxIoQueueIoState::Invoke(&callback, v8, m_PurgeCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql);
}
