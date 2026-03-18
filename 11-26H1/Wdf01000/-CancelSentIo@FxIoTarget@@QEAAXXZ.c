/*
 * XREFs of ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x140022DF8
 * Callers:
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x140004494 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x140022B30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x14009F1DC (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400054FC (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x140022ED4 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::CancelSentIo(FxIoTarget *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoTarget *v5; // rcx
  unsigned __int8 v6; // di
  unsigned __int8 v7; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 sentAdded; // [rsp+58h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY sentRequestListHead; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  sentAdded = 0;
  irql = 0;
  sentRequestListHead.Next = 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  FxIoTarget::GetSentRequestsListLocked(v5, &sentRequestListHead, &this->m_SentIoListHead, &sentAdded);
  FxNonPagedObject::Unlock(this, v6, v7);
  m_ObjectSize = this->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x38u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  if ( sentAdded )
    FxIoTarget::_CancelSentRequests(&sentRequestListHead);
}
