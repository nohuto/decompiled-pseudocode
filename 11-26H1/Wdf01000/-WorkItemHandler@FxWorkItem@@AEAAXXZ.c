/*
 * XREFs of ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x14005A4B0
 * Callers:
 *     ?WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005A420 (-WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxWorkItem::WorkItemHandler(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxVerifierLock **p_m_WorkItemCompleted; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  char m_ObjectFlags; // cl
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *v11)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char); // rax
  WDFWORKITEM__ *v12; // rcx
  unsigned __int8 v13; // r8
  FxVerifierLock **v14; // rdi
  unsigned __int64 *v15; // rsi
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  bool v18; // zf
  void (__fastcall *v19)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char); // rax
  WDFWORKITEM__ *v20; // rcx
  __int64 v21; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = m_Globals;
  p_m_WorkItemCompleted = (FxVerifierLock **)&this[-1].m_WorkItemCompleted;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemCompleted )
  {
    FxVerifierLock::Lock(*p_m_WorkItemCompleted, &irql, a3);
    v7 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v7;
  }
  ++this->m_WorkItemRunningCount;
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_Enqueued = 0;
  if ( m_ObjectFlags < 0 && *p_m_WorkItemCompleted )
    FxVerifierLock::Unlock(*p_m_WorkItemCompleted, v7, v8);
  else
    KeReleaseSpinLock(p_m_Lock, v7);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v19 = *(void (__fastcall **)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char))(unk_1400C90A8 + 24LL);
    if ( v19 )
      v19(&this->m_Callback, 8LL, 1207959552LL, 3943LL, 2);
    v20 = (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    this->m_Callback(v20);
    LOBYTE(v21) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v21);
  }
  else
  {
    v11 = *(void (__fastcall **)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char))(unk_1400C90A8 + 24LL);
    if ( v11 )
      v11(&this->m_Callback, 8LL, 1207959552LL, 3943LL, 2);
    v12 = (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    this->m_Callback(v12);
  }
  v14 = (FxVerifierLock **)&this[-1].m_WorkItemCompleted;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *v14 )
  {
    FxVerifierLock::Lock(*v14, &irql, v13);
    v16 = irql;
    v15 = &this->m_NPLock.m_Lock;
  }
  else
  {
    v15 = &this->m_NPLock.m_Lock;
    v16 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v16;
  }
  v18 = this->m_WorkItemRunningCount-- == 1;
  if ( v18 && !this->m_Enqueued )
  {
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
    v16 = irql;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *v14 )
    FxVerifierLock::Unlock(*v14, v16, v17);
  else
    KeReleaseSpinLock(v15, v16);
}
