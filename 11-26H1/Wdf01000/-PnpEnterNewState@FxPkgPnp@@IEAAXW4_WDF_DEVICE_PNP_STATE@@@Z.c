/*
 * XREFs of ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x140021B50
 * Callers:
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1400218AC (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_PNP_NOTIFICATION_DATA@@@Z @ 0x1400A4C84 (-Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWD.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PnpEnterNewState(FxPkgPnp *this, _WDF_DEVICE_PNP_STATE State)
{
  _WDF_DEVICE_PNP_STATE _a3; // ebx
  _WDF_DEVICE_PNP_STATE _a4; // esi
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rdx
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPnpStateCallback *v9; // rcx
  FxStateMachineBreak *m_StateMachineBreak; // rax
  _WDF_DEVICE_PNP_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPnpStateCallback *v12; // rcx
  FxDeviceBase *v13; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v15; // r9
  FxDeviceBase *v16; // r9
  unsigned __int16 v17; // ax
  WDFDEVICE__ *v18; // r9
  FxDeviceBase *v19; // r9
  unsigned __int16 v20; // ax
  WDFDEVICE__ *v21; // r9
  _WDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData; // [rsp+58h] [rbp-20h] BYREF

  if ( State != WdfDevStatePnpNull )
  {
    _a3 = State;
    *(_QWORD *)&NotificationData.Type = 0LL;
    NotificationData.Data.EnterState.NewState = WdfDevStatePnpInvalid;
    _a4 = (_WDF_DEVICE_PNP_STATE)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    do
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xEu,
        WPP_PnpStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3,
        _a4);
      m_PnpStateCallbacks = this->m_PnpStateCallbacks;
      if ( m_PnpStateCallbacks )
      {
        v13 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationLeaveState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        m_ObjectSize = v13->m_ObjectSize;
        v15 = (WDFDEVICE__ *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v15 = 0LL;
        FxPnpStateCallback::Invoke(m_PnpStateCallbacks, _a4, StateNotificationLeaveState, v15, &NotificationData);
      }
      m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
      this->m_PnpMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
      this->m_PnpMachine.m_States.History[m_HistoryIndex] = _a3;
      v9 = this->m_PnpStateCallbacks;
      if ( v9 )
      {
        v16 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationEnterState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        v17 = v16->m_ObjectSize;
        v18 = (WDFDEVICE__ *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v17 )
          v18 = 0LL;
        FxPnpStateCallback::Invoke(v9, _a3, StateNotificationEnterState, v18, &NotificationData);
      }
      _a4 = _a3;
      LODWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
      m_StateMachineBreak = this->m_StateMachineBreak;
      if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && m_StateMachineBreak->PnpState == _a3 )
        DbgBreakPoint();
      StateFunc = FxPkgPnp::m_WdfPnpStates[(_a3 & 0xFFFF7FFF) - 256].StateFunc;
      if ( StateFunc )
        _a3 = StateFunc(this);
      else
        _a3 = WdfDevStatePnpNull;
      v12 = this->m_PnpStateCallbacks;
      if ( v12 )
      {
        v19 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationPostProcessState;
        NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
        v20 = v19->m_ObjectSize;
        v21 = (WDFDEVICE__ *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20 )
          v21 = 0LL;
        FxPnpStateCallback::Invoke(v12, _a4, StateNotificationPostProcessState, v21, &NotificationData);
      }
    }
    while ( _a3 != WdfDevStatePnpNull );
  }
}
