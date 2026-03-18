/*
 * XREFs of ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x14004F320
 * Callers:
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14004F264 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchInternalEvents(
        FxIoQueue *this,
        KIRQL PreviousIrql,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  if ( this->m_Dispatching )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *(_QWORD *)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized )
      FxVerifierLock::Unlock(*(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized, PreviousIrql, a3);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
  }
  else
  {
    FxIoQueue::DispatchEvents(this, PreviousIrql, 0LL, a4);
  }
}
