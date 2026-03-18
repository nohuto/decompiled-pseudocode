/*
 * XREFs of ?RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z @ 0x140063870
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1400638C8 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDevice::RemoveIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  FxTransactionedList::Remove(&this->m_IoTargetsList, this->m_Globals, &IoTarget->m_TransactionedEntry);
  IoTarget->Release(IoTarget, this, 1844, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
}
