/*
 * XREFs of ?FlushAndRundownInternal@FxInterrupt@@AEAAXXZ @ 0x1400829B0
 * Callers:
 *     ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x140082934 (-FlushAndRundown@FxInterrupt@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::FlushAndRundownInternal(FxInterrupt *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx

  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  if ( this->m_DisposeWaitLock )
  {
    this->m_WaitLock->DeleteObject(this->m_WaitLock);
    this->m_WaitLock = 0LL;
    this->m_DisposeWaitLock = 0;
  }
}
