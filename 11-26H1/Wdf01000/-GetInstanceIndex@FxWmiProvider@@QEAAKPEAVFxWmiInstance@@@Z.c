/*
 * XREFs of ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x140073414
 * Callers:
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1400732A8 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

__int64 __fastcall FxWmiProvider::GetInstanceIndex(FxWmiProvider *this, _LIST_ENTRY **Instance, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  FxWmiIrpHandler *m_Parent; // rcx
  unsigned __int8 v7; // al
  unsigned int m_NumInstances; // r8d
  _LIST_ENTRY *Flink; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  m_Parent = this->m_Parent;
  irql = 0;
  if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0 && m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
  {
    FxVerifierLock::Lock(
      (FxVerifierLock *)m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
      &irql,
      a3);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&m_Parent->m_NPLock.m_Lock);
  }
  m_NumInstances = this->m_NumInstances;
  Flink = this->m_InstanceListHead.Flink;
  if ( m_NumInstances )
  {
    do
    {
      if ( &Flink[-8].Blink == Instance )
        break;
      Flink = Flink->Flink;
      ++v3;
    }
    while ( v3 < m_NumInstances );
  }
  FxNonPagedObject::Unlock(this->m_Parent, v7, m_NumInstances);
  return v3;
}
