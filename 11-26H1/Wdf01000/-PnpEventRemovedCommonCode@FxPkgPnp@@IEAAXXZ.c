/*
 * XREFs of ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x140038B3C
 * Callers:
 *     ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x140038B20 (-PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x140038CB0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140036A80 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140037310 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140038C0C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x140043980 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045920 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 */

void __fastcall FxPkgPnp::PnpEventRemovedCommonCode(FxPkgPnp *this)
{
  unsigned __int8 v2; // r8
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxObject *m_ParentObject; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  FxDeviceBase *v8; // rcx
  FxVerifierLock *v9; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerPurgeNonManaged);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventCleanup, 0LL);
  m_DeviceBase = this->m_DeviceBase;
  PreviousIrql = 0;
  m_ParentObject = m_DeviceBase[3].m_ParentObject;
  if ( SLOBYTE(m_ParentObject->m_ObjectFlags) < 0 && (v9 = (FxVerifierLock *)m_ParentObject[-1].m_ParentObject) != 0LL )
  {
    FxVerifierLock::Lock(v9, &PreviousIrql, v2);
    v6 = PreviousIrql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&m_ParentObject[1].m_Type);
  }
  HIDWORD(m_ParentObject[1].m_ChildListHead.Flink) = 3;
  FxNonPagedObject::Unlock((FxNonPagedObject *)m_ParentObject, v6, v7);
  v8 = this->m_DeviceBase;
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFFCFF | 0x100;
  FxObject::EarlyDispose(v8);
  FxObject::DestroyChildren(this->m_DeviceBase);
  FxDisposeList::WaitForEmpty(this->m_DeviceBase->m_DisposeList);
}
