/*
 * XREFs of ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x140053664
 * Callers:
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1400534A0 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1400AB1B0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x14002F544 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x14005A770 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?Compare@FxTransactionedList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z @ 0x1400846C0 (-Compare@FxTransactionedList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v4; // al
  __int64 m_QueueHead; // rdx
  FxWakeInterruptEvents _a4; // ebp
  __int64 m_CurrentState; // r10
  unsigned int i; // eax
  const FxWakeInterruptTargetState *TargetStates; // rcx
  unsigned int _a3; // edi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  __int64 m_HistoryIndex; // r8
  __int64 (__fastcall *v16)(FxMemoryObject *__hidden, struct FxQueryInterfaceParams *); // rax
  KIRQL v17; // r9
  FxPkgPnp *v18; // rcx
  FxDeviceBase *v19; // rdx
  _FX_DRIVER_GLOBALS *v20; // rcx
  const void *v21; // r8

  p_m_Lock = &this->m_QueueLock.m_Lock;
LABEL_2:
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v4);
    m_CurrentState = this->m_CurrentState;
    for ( i = 0; i < FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount; ++i )
    {
      TargetStates = FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStates;
      if ( TargetStates[i].WakeInterruptEvent == _a4 )
      {
        _a3 = TargetStates[i].WakeInterruptState;
        if ( _a3 != 10 )
        {
          do
          {
            m_PkgPnp = this->m_PkgPnp;
            m_DeviceBase = m_PkgPnp->m_DeviceBase;
            m_Globals = m_PkgPnp->m_Globals;
            _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DeviceBase->m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqLL(
              m_Globals,
              4u,
              0x15u,
              0xCu,
              WPP_WakeInterruptStateMachine_cpp_Traceguids,
              _a1,
              m_DeviceBase->m_DeviceObject.m_DeviceObject,
              _a3,
              this->m_CurrentState);
            m_HistoryIndex = this->m_HistoryIndex;
            this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
            this->m_States.History[m_HistoryIndex] = _a3;
            this->m_CurrentState = _a3;
            v16 = funcs_1400537A2[3 * (unsigned __int8)_a3];
            if ( !v16 )
              break;
            _a3 = ((__int64 (__fastcall *)(FxWakeInterruptMachine *))v16)(this);
          }
          while ( _a3 != 10 );
          goto LABEL_2;
        }
        break;
      }
    }
    v18 = this->m_PkgPnp;
    v19 = v18->m_DeviceBase;
    v20 = v18->m_Globals;
    v21 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v19->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qqLL(
      v20,
      4u,
      0xCu,
      0xBu,
      WPP_WakeInterruptStateMachine_cpp_Traceguids,
      v21,
      v19->m_DeviceObject.m_DeviceObject,
      m_CurrentState,
      _a4);
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v17);
}
