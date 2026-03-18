/*
 * XREFs of ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x140045E24
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045920 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  KIRQL v4; // di
  MxEvent *p_m_PowerIdle; // rbp
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 *p_m_ObjectSize; // rsi
  const void *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rdi
  FxVerifierLock *v12; // rcx
  const void *_a1; // rax
  __int64 irql; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(irql) = 0;
  if ( this->m_PowerManaged )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v12 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v12, (unsigned __int8 *)&irql, a3);
      v4 = irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    p_m_PowerIdle = &this->m_PowerIdle;
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, v4, 0LL, v6) )
    {
      p_m_Globals = &this->m_Globals;
      m_Globals = this->m_Globals;
      p_m_ObjectSize = &this->m_ObjectSize;
      v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( m_Globals->FxVerboseOn )
      {
        _a1 = v10;
        if ( !*p_m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x66u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      }
      v11 = *p_m_Globals;
      if ( !*p_m_ObjectSize )
        v10 = 0LL;
      irql = -10000000LL * v11->FxVerifierDbgWaitForSignalTimeoutInSec;
      while ( KeWaitForSingleObject(
                p_m_PowerIdle,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)((unsigned __int64)&irql & -(__int64)(irql != 0))) == 258 )
      {
        DbgPrint(
          "Thread 0x%p is %s 0x%p\n",
          KeGetCurrentThread(),
          "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
          v10);
        if ( v11->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
      }
    }
  }
}
