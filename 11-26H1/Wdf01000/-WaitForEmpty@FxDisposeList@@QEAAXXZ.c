/*
 * XREFs of ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140038C0C
 * Callers:
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x140038B3C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400399C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14007A8A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDriver@@UEAAEXZ @ 0x14007B780 (-Dispose@FxDriver@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1400946C0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x140038810 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::WaitForEmpty(FxDisposeList *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // r8
  char v6; // di
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Next = this[-1].m_List.Next) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Next, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  v6 = 1;
  if ( this->m_WorkItemThread == KeGetCurrentThread() )
  {
    FxDisposeList::DrainListLocked(this, &irql, v5);
    v6 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  if ( v6 )
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_SystemWorkItem->m_WorkItemCompleted);
}
