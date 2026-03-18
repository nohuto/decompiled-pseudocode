/*
 * XREFs of ?InitializeResources@FxDmaPacketTransaction@@UEAAJXZ @ 0x140073F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::InitializeResources(
        FxDmaPacketTransaction *this,
        __int64 a2,
        unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  FxVerifierLock *v8; // rcx
  unsigned __int8 oldIrql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  oldIrql = 0;
  this->m_DeviceAddressOffset = 0;
  if ( m_ObjectFlags < 0 && (v8 = *(FxVerifierLock **)&this[-1].m_MapRegisterBaseSet) != 0LL )
  {
    FxVerifierLock::Lock(v8, &oldIrql, a3);
    v5 = oldIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  this->m_IsCancelled = 0;
  FxNonPagedObject::Unlock(this, v5, v6);
  return 0LL;
}
