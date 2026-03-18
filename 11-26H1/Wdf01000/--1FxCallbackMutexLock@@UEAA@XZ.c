/*
 * XREFs of ??1FxCallbackMutexLock@@UEAA@XZ @ 0x14003B9E0
 * Callers:
 *     ??1FxIoQueue@@UEAA@XZ @ 0x14003B588 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x14003C014 (--1FxDriver@@UEAA@XZ.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x140094DA0 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007EAA8 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackMutexLock::~FxCallbackMutexLock(FxCallbackMutexLock *this, unsigned int a2)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackMutexLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier, a2);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackLock::`vftable';
}
