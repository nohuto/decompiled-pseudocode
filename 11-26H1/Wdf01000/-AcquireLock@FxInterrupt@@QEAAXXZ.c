/*
 * XREFs of ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x140053190
 * Callers:
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x140052EB0 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x140052F70 (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x140053000 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x140071894 (-InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x140071964 (-InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::AcquireLock(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxWaitLock *m_WaitLock; // rbx
  const void *_a1; // rcx

  if ( this->m_PassiveHandling )
  {
    m_WaitLock = this->m_WaitLock;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&m_WaitLock->FxWaitLockInternal, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_WaitLock->m_OwningThread = KeGetCurrentThread();
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
    {
      this->m_OldIrql = KeAcquireInterruptSpinLock(m_Interrupt);
    }
    else
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x1Cu, WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(this->m_Globals);
      this->m_OldIrql = KeGetCurrentIrql();
    }
  }
}
