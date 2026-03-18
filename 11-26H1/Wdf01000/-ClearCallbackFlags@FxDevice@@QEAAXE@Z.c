/*
 * XREFs of ?ClearCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140038E78
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1400397FC (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxDevice::ClearCallbackFlags(FxDevice *this, unsigned __int8 Flags, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxVerifierLock *m_PkgWmi; // rcx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = Flags;
  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (m_PkgWmi = (FxVerifierLock *)this[-1].m_PkgWmi) != 0LL )
  {
    FxVerifierLock::Lock(m_PkgWmi, &irql, a3);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  this->m_CallbackFlags &= ~1u;
  FxNonPagedObject::Unlock(this, v7, v6);
}
