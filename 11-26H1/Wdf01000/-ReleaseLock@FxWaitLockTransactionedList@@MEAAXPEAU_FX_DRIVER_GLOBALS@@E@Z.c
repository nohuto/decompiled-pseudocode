/*
 * XREFs of ?ReleaseLock@FxWaitLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400659E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockTransactionedList::ReleaseLock(
        FxWaitLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Irql)
{
  FxWaitLockInternal *p_m_StateChangeListLock; // rcx

  p_m_StateChangeListLock = &this->m_StateChangeListLock;
  p_m_StateChangeListLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateChangeListLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
