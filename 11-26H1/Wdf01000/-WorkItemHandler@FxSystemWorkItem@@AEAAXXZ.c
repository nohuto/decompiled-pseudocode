/*
 * XREFs of ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x14005CE88
 * Callers:
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005CE40 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxSystemWorkItem::WorkItemHandler(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxVerifierLock **p_m_WorkItemRunningCount; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  char m_ObjectFlags; // al
  void (__fastcall *m_Callback)(void *); // rbp
  void *m_CallbackArg; // r14
  unsigned __int8 v12; // r8
  KIRQL v13; // bp
  unsigned __int8 v14; // r8
  bool v15; // zf
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = m_Globals;
  p_m_WorkItemRunningCount = (FxVerifierLock **)&this[-1].m_WorkItemRunningCount;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
  {
    FxVerifierLock::Lock(*p_m_WorkItemRunningCount, &irql, a3);
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
  m_Callback = this->m_Callback;
  m_CallbackArg = this->m_CallbackArg;
  this->m_Enqueued = 0;
  this->m_Callback = 0LL;
  if ( m_ObjectFlags < 0 && *p_m_WorkItemRunningCount )
    FxVerifierLock::Unlock(*p_m_WorkItemRunningCount, v7, v8);
  else
    KeReleaseSpinLock(p_m_Lock, v7);
  m_Callback(m_CallbackArg);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
  {
    FxVerifierLock::Lock(*p_m_WorkItemRunningCount, &irql, v12);
    v13 = irql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  v15 = this->m_WorkItemRunningCount-- == 1;
  if ( v15 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemRunningCount )
    FxVerifierLock::Unlock(*p_m_WorkItemRunningCount, v13, v14);
  else
    KeReleaseSpinLock(p_m_Lock, v13);
}
