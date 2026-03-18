/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400326D0
 * Callers:
 *     imp_WdfDeviceStopIdleActual @ 0x140010F50 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140011570 (StopIdleWorker.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1400322B0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x140044AFC (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x140066090 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x140066644 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x140082450 (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1400A780C (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  FxTagTracker *m_TagTracker; // rbp
  __int64 m_CurrentIdleState; // r11
  unsigned int v6; // eax
  const FxIdleStateTable *v7; // r8
  __int64 v8; // rdx
  FxPowerIdleStates _a3; // ebx
  unsigned __int64 Tag; // rcx
  const void *_a1; // rdx
  char v12; // al
  void (__fastcall *v13)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  unsigned __int64 v14; // rdx
  const void *v15; // r8

  m_TagTracker = this[2].m_TagTracker;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  m_CurrentIdleState = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v6 = 0;
  v7 = &FxPowerIdleMachine::m_StateTable[m_CurrentIdleState];
  while ( v6 < FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStatesCount )
  {
    v8 = v6;
    if ( v7[-1].TargetStates[v8].PowerIdleEvent == Event )
    {
      _mm_lfence();
      _a3 = v7[-1].TargetStates[v8].PowerIdleState;
      if ( _a3 != FxIdleMax )
      {
        do
        {
          Tag = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
          _a1 = (const void *)(Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(Tag + 10) )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            *(const void **)(Tag + 144),
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v12 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v12 & 7;
          v13 = funcs_140011152[3 * _a3];
          if ( !v13 )
            break;
          _a3 = ((unsigned int (__fastcall *)(FxPowerIdleMachine *))v13)(this);
        }
        while ( _a3 != FxIdleMax );
        return;
      }
      break;
    }
    ++v6;
  }
  switch ( Event )
  {
    case PowerIdleEventIoDecrement:
      return;
    case PowerIdleEventEnabled:
      if ( (this->m_Flags & 1) != 0 )
        return;
      break;
    case PowerIdleEventIoIncrement:
      return;
  }
  v14 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
  v15 = (const void *)(v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v14 + 10) )
    v15 = 0LL;
  WPP_IFR_SF_qqLL(
    (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
    4u,
    0xCu,
    0x10u,
    WPP_PowerIdleStateMachine_cpp_Traceguids,
    v15,
    *(const void **)(v14 + 144),
    m_CurrentIdleState,
    Event);
}
