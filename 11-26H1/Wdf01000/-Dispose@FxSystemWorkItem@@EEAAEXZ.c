/*
 * XREFs of ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x140066230
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1400662A0 (-DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::Dispose(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  FxVerifierLock *v8; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v8 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
  {
    FxVerifierLock::Lock(v8, &irql, a3);
    v5 = irql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v5, v6);
  FxSystemWorkItem::DecrementWorkItemQueued(this);
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_RemoveEvent);
  return 1;
}
