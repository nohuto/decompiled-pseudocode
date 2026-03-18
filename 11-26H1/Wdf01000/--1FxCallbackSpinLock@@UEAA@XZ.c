/*
 * XREFs of ??1FxCallbackSpinLock@@UEAA@XZ @ 0x14003B9A0
 * Callers:
 *     ??1FxIoQueue@@UEAA@XZ @ 0x14003B588 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x14003BE60 (--_EFxCallbackSpinLock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007EAA8 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackSpinLock::~FxCallbackSpinLock(FxCallbackSpinLock *this, unsigned int a2)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackSpinLock_vtbl *)FxCallbackSpinLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier, a2);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackSpinLock_vtbl *)FxCallbackLock::`vftable';
}
