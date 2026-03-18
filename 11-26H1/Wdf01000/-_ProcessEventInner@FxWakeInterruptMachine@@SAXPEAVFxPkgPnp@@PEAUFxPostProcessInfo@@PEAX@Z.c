/*
 * XREFs of ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1400AB1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x140053664 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::_ProcessEventInner(
        FxPkgPnp *PkgPnp,
        _FX_DRIVER_GLOBALS *Info,
        FxWakeInterruptMachine *WorkerContext)
{
  _FX_DRIVER_GLOBALS *v5; // rdx

  FxWaitLockInternal::AcquireLock(&WorkerContext->m_StateMachineLock, Info, 0LL);
  FxWakeInterruptMachine::ProcessEventInner(WorkerContext, (FxPostProcessInfo *)Info);
  FxWaitLockInternal::ReleaseLock(&WorkerContext->m_StateMachineLock, v5);
}
