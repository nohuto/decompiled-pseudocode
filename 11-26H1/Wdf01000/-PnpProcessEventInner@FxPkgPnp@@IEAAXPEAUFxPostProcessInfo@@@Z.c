/*
 * XREFs of ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1400218AC
 * Callers:
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x140021650 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     ?FxBreakOnPnpEvent@@YAXPEAVFxPkgPnp@@W4FxPnpEvent@@@Z @ 0x140021B1C (-FxBreakOnPnpEvent@@YAXPEAVFxPkgPnp@@W4FxPnpEvent@@@Z.c)
 *     ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x140021B50 (-PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x14002F544 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1400736A8 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1400809D8 (WPP_IFR_SF_qqLLL.c)
 */

void __fastcall FxPkgPnp::PnpProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r12
  FxPnpMachine *p_m_PnpMachine; // r14
  __int64 v6; // rsi
  KIRQL v7; // bp
  __int64 m_QueueHead; // rax
  FxPnpEvent _a4; // edi
  const PNP_EVENT_TARGET_STATE *OtherTargetStates; // rdx
  _IRP *m_PendingPnPIrp; // rax
  unsigned __int64 *v12; // rcx
  int i; // eax
  FxPnpEvent PnpEvent; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // r8
  unsigned int globals; // r8d
  FxDeviceBase *v19; // rcx
  const void *v20; // rdx

  p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
  p_m_PnpMachine = &this->m_PnpMachine;
  while ( 1 )
  {
    v6 = ((__int64)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable & 0xFFFF7FFF) - 256;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PnpMachine->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_PnpMachine.m_QueueTail )
      break;
    _a4 = this->m_PnpMachine.m_Queue[m_QueueHead];
    FxBreakOnPnpEvent(this, _a4);
    if ( (_a4 & 0x3C3000) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPnpStates[v6].StateInfo.Bits & 1) == 0 )
    {
      v12 = p_m_Lock;
      goto LABEL_13;
    }
    p_m_PnpMachine->m_QueueHead = ((unsigned int)p_m_PnpMachine->m_QueueHead + 1) % this->m_PnpMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPnpStates[v6].FirstTargetState.PnpEvent == _a4 )
    {
      LODWORD(OtherTargetStates) = FxPkgPnp::m_WdfPnpStates[v6].FirstTargetState.TargetState;
LABEL_6:
      if ( (_DWORD)OtherTargetStates == 314 )
        goto LABEL_20;
      FxPkgPnp::PnpEnterNewState(this, (_WDF_DEVICE_PNP_STATE)OtherTargetStates);
    }
    else
    {
      OtherTargetStates = FxPkgPnp::m_WdfPnpStates[v6].OtherTargetStates;
      if ( OtherTargetStates )
      {
        for ( i = 0; ; ++i )
        {
          PnpEvent = OtherTargetStates[i].PnpEvent;
          if ( PnpEvent == PnpEventNull )
            break;
          if ( PnpEvent == _a4 )
          {
            LODWORD(OtherTargetStates) = OtherTargetStates[i].TargetState;
            goto LABEL_6;
          }
        }
      }
LABEL_20:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0xCu,
          WPP_PnpStateMachine_cpp_Traceguids,
          _a1,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable,
          _a4);
      }
      globals = *(_DWORD *)&FxPkgPnp::m_WdfPnpStates[v6].StateInfo.Bits >> 1;
      if ( (globals & _a4) == 0 )
      {
        v19 = this->m_DeviceBase;
        v20 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v19->m_ObjectSize )
          v20 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PnpStateMachine_cpp_Traceguids,
          v20,
          v19->m_DeviceObject.m_DeviceObject,
          (unsigned int)v19[1].FxNonPagedObject::FxObject::__vftable,
          _a4,
          globals);
      }
      if ( (_a4 & 0xDF4) != 0 )
        FxPkgPnp::PnpFinishProcessingIrp(this, (unsigned __int8)OtherTargetStates);
    }
  }
  FxEventQueue::GetFinishedState(p_m_PnpMachine, Info);
  if ( this->m_PnpMachine.m_FireAndForget )
  {
    m_PendingPnPIrp = this->m_PendingPnPIrp;
    this->m_PendingPnPIrp = 0LL;
    this->m_PnpMachine.m_FireAndForget = 0;
    Info->m_FireAndForgetIrp = m_PendingPnPIrp;
  }
  v12 = &p_m_PnpMachine->m_QueueLock.m_Lock;
  Info->m_SetRemovedEvent = this->m_SetDeviceRemoveProcessed;
  this->m_SetDeviceRemoveProcessed = 0;
LABEL_13:
  KeReleaseSpinLock(v12, v7);
}
