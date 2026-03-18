/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1400489BC
 * Callers:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x140008C90 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     imp_WdfTimerStop @ 0x140009810 (imp_WdfTimerStop.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14002F214 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140031790 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x140046A60 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x140047D00 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400481E0 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  BOOLEAN result; // al
  struct _EX_TIMER *m_KernelExTimer; // rcx

  result = 1;
  if ( !this->m_Timer.m_IsExtTimer )
    return KeCancelTimer(&this->m_Timer.KernelTimer);
  m_KernelExTimer = this->m_Timer.m_KernelExTimer;
  if ( m_KernelExTimer )
    return ExCancelTimer(m_KernelExTimer, 0LL);
  return result;
}
