/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14002EF4C
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1400464FC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x140068BC0 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14002F214 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x14002F544 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x14003F8E0 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqLLL @ 0x1400809D8 (WPP_IFR_SF_qqLLL.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r12
  FxPowerMachine *p_m_PowerMachine; // r14
  __int64 v6; // rbp
  KIRQL v7; // si
  __int64 m_QueueHead; // rax
  unsigned int _a5; // ebx
  FxStateMachineBreak *m_StateMachineBreak; // rax
  unsigned __int16 m_SingularEventsPresent; // cx
  unsigned __int64 TargetState; // rdx
  unsigned __int64 *v13; // rcx
  unsigned int i; // eax
  FxPowerEvent v15; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  FxDeviceBase *v22; // rcx
  const void *_a2; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v25; // r8

  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  p_m_PowerMachine = &this->m_PowerMachine;
  while ( 1 )
  {
    v6 = (HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF) - 768;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PowerMachine->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_PowerMachine.m_QueueTail )
    {
      FxEventQueue::GetFinishedState(p_m_PowerMachine, Info);
      v13 = &p_m_PowerMachine->m_QueueLock.m_Lock;
      goto LABEL_12;
    }
    _a5 = this->m_PowerMachine.m_Queue.Events[m_QueueHead];
    m_StateMachineBreak = this->m_StateMachineBreak;
    if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (_a5 & m_StateMachineBreak->PowerEvents) != 0 )
      DbgBreakPoint();
    if ( (_a5 & 0x3900) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v6].StateInfo.Bits & 1) == 0 )
      break;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & (unsigned __int16)_a5) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)_a5;
    p_m_PowerMachine->m_QueueHead = ((unsigned int)p_m_PowerMachine->m_QueueHead + 1)
                                  % this->m_PowerMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerStates[v6].FirstTargetState.PowerEvent == _a5 )
    {
      TargetState = (unsigned int)FxPkgPnp::m_WdfPowerStates[v6].FirstTargetState.TargetState;
LABEL_9:
      if ( (_DWORD)TargetState == 873 )
        goto LABEL_18;
      FxPkgPnp::PowerEnterNewState(this, (_WDF_DEVICE_POWER_STATE)TargetState);
    }
    else
    {
      TargetState = (unsigned __int64)FxPkgPnp::m_WdfPowerStates[v6].OtherTargetStates;
      if ( TargetState )
      {
        for ( i = 0; ; ++i )
        {
          v15 = *(_DWORD *)(TargetState + 8LL * i);
          if ( v15 == PowerEventMaximum )
            break;
          if ( v15 == _a5 )
          {
            TargetState = *(unsigned int *)(TargetState + 8LL * i + 4);
            goto LABEL_9;
          }
        }
      }
LABEL_18:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v25 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          v25 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0xCu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v25,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
          _a5);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerStates[v6].StateInfo.Bits >> 1;
      if ( (globals & _a5) == 0 )
      {
        v22 = this->m_DeviceBase;
        _a2 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          _a2,
          v22->m_DeviceObject.m_DeviceObject,
          HIDWORD(v22[1].FxNonPagedObject::FxObject::__vftable),
          _a5,
          globals);
      }
      v18 = _a5 - 1;
      if ( v18 && (v19 = v18 - 1) != 0 )
      {
        v20 = v19 - 6;
        if ( !v20 || (v21 = v20 - 8) == 0 || v21 == 16 )
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
      }
      else
      {
        LOBYTE(TargetState) = 1;
        this->PowerReleasePendingDeviceIrp(this, TargetState);
      }
    }
  }
  v13 = &this->m_PowerMachine.m_QueueLock.m_Lock;
LABEL_12:
  KeReleaseSpinLock(v13, v7);
}
