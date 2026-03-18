/*
 * XREFs of ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x14006E23C
 * Callers:
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x14006E1A4 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     imp_WdfControlFinishInitializing @ 0x1400940C0 (imp_WdfControlFinishInitializing.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxWmiIrpHandler::Register(FxWmiIrpHandler *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  NTSTATUS _a1; // edi
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v5 = irql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v5;
  }
  this->m_RegisteredState = WmiRegistered;
  FxNonPagedObject::Unlock(this, v5, v6);
  _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 1u);
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
    FxNonPagedObject::Lock(this, &irql, v10);
    v11 = irql;
    this->m_RegisteredState = WmiUnregistered;
    FxNonPagedObject::Unlock(this, v11, v12);
  }
  return (unsigned int)_a1;
}
