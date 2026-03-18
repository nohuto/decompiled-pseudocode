/*
 * XREFs of ?Invoke@FxIoQueueIoCanceledOnQueue@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x14000576C
 * Callers:
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x140005618 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1400055F0 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueueIoCanceledOnQueue::Invoke(
        FxIoQueueIoCanceledOnQueue *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request)
{
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v7; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Request);
    LOBYTE(v7) = irql;
    FxLockedCallback::CallbackEnd(this, v7);
  }
}
