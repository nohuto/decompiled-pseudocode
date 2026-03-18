/*
 * XREFs of ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x14006E614
 * Callers:
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x14006E5BC (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z @ 0x140084550 (-PowerCompleteWakeRequestFromWithinMachine@FxPkgPnp@@IEAAXJ@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxPkgPnp::PowerMakeWakeRequestNonCancelable(FxPkgPnp *this, int WaitWakeStatus)
{
  unsigned __int64 *p_m_Lock; // r14
  char v5; // bl
  KIRQL v6; // al
  _IRP *m_WaitWakeIrp; // rsi
  KIRQL v8; // r15
  __int64 v10; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_ListEntry; // rsi
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rdx

  p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
  m_WaitWakeIrp = this->m_SharedPower.m_WaitWakeIrp;
  v8 = v6;
  if ( m_WaitWakeIrp && _InterlockedExchange64((volatile __int64 *)&m_WaitWakeIrp->CancelRoutine, 0LL) )
  {
    if ( WaitWakeStatus >= 0 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 920) )
        {
          PoSetSystemWake(m_WaitWakeIrp);
          if ( this->m_PowerPolicyMachine.m_Owner )
          {
            m_DeviceBase = this->m_DeviceBase;
            _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DeviceBase->m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqq(
              this->m_Globals,
              4u,
              0xCu,
              0x23u,
              WPP_PowerStateMachine_cpp_Traceguids,
              _a1,
              m_DeviceBase->m_DeviceObject.m_DeviceObject,
              this->m_SharedPower.m_WaitWakeIrp);
            this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 1;
          }
        }
      }
    }
    m_WaitWakeIrp->IoStatus.Status = WaitWakeStatus;
    Blink = this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink;
    p_ListEntry = &m_WaitWakeIrp->Tail.Overlay.ListEntry;
    if ( Blink->Flink != &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList )
      __fastfail(3u);
    p_ListEntry->Flink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
    p_ListEntry->Blink = Blink;
    Blink->Flink = p_ListEntry;
    this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = p_ListEntry;
    this->m_SharedPower.m_WaitWakeIrp = 0LL;
    v5 = 1;
  }
  KeReleaseSpinLock(p_m_Lock, v8);
  return v5;
}
