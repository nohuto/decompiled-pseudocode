/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140031790
 * Callers:
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x140030640 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     ??1MxTimer@@QEAA@XZ @ 0x1400308C0 (--1MxTimer@@QEAA@XZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1400489BC (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x14006061C (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1400652C0 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1400654C4 (-GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEV.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x140071B6C (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x14007DE4C (-AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqLLL @ 0x1400809D8 (WPP_IFR_SF_qqLLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083E48 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1400A4CC4 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rdx
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // r13
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // edi
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r14d
  FxDeviceBase *v8; // rcx
  const void *_a1; // rdx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  __int64 v12; // rdx
  FxPowerPolicyStateCallback *v13; // rcx
  FxStateMachineBreak *v14; // rax
  __int64 v15; // rsi
  FxPowerPolicyStateCallback *v16; // rcx
  unsigned int v17; // r15d
  __int64 v18; // rsi
  KIRQL v19; // al
  __int64 v20; // rcx
  KIRQL v21; // di
  FxStateMachineBreak *m_StateMachineBreak; // rax
  FxPowerPolicyEvent v23; // r14d
  unsigned int v24; // ecx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rdx
  int j; // ecx
  const POWER_POLICY_EVENT_TARGET_STATE *v27; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  unsigned __int8 m_QueueFlags; // al
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *NotPowerPolicyOwnerTableEntry; // rsi
  KIRQL v32; // al
  __int64 m_QueueHead; // rdx
  FxPowerPolicyEvent v34; // r14d
  unsigned int m_SingularEventsPresent; // ecx
  unsigned int TargetStatesCount; // eax
  unsigned int i; // edx
  __int64 v38; // r8
  _LARGE_INTEGER v39; // rdx
  FxDeviceBase *v40; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v42; // r9
  FxDeviceBase *v43; // r9
  unsigned __int16 v44; // ax
  WDFDEVICE__ *v45; // r9
  FxDeviceBase *v46; // r9
  unsigned __int16 v47; // ax
  WDFDEVICE__ *v48; // r9
  FxDeviceBase *v49; // rdx
  const void *v50; // r8
  FxDeviceBase *v51; // rcx
  const void *v52; // rdx
  MxTimer v54; // [rsp+68h] [rbp-A0h] BYREF
  FxPkgPnp *v55; // [rsp+100h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+0h]
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+118h] [rbp+10h] BYREF

  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_45:
        NotPowerPolicyOwnerTableEntry = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry((_WDF_DEVICE_POWER_POLICY_STATE)*(_DWORD *)&this->m_DeviceBase[1].m_Type);
        v32 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
        m_QueueHead = this->m_PowerPolicyMachine.m_QueueHead;
        if ( (_BYTE)m_QueueHead == this->m_PowerPolicyMachine.m_QueueTail
          || (v34 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead], (v34 & 0x60030) == 0)
          && !NotPowerPolicyOwnerTableEntry->QueueOpen )
        {
          KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v32);
          return;
        }
        m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
        if ( (m_SingularEventsPresent & v34) != 0 )
          this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v34;
        this->m_PowerPolicyMachine.m_QueueHead = ((int)m_QueueHead + 1)
                                               % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
        KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v32);
        if ( NotPowerPolicyOwnerTableEntry )
        {
          TargetStatesCount = NotPowerPolicyOwnerTableEntry->TargetStatesCount;
          if ( (_BYTE)TargetStatesCount )
            break;
        }
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= TargetStatesCount )
          goto LABEL_45;
        v38 = (__int64)&NotPowerPolicyOwnerTableEntry->TargetStates[i];
        if ( v34 == *(_DWORD *)v38 )
          break;
      }
      FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, *(_WDF_DEVICE_POWER_POLICY_STATE *)(v38 + 4));
    }
  }
  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  while ( 1 )
  {
    v17 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    v18 = (v17 & 0xFFFF7FFF) - 1280;
    v19 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v20 = p_m_PowerPolicyMachine->m_QueueHead;
    v21 = v19;
    if ( (_BYTE)v20 == this->m_PowerPolicyMachine.m_QueueTail )
      break;
    m_StateMachineBreak = this->m_StateMachineBreak;
    v23 = this->m_PowerPolicyMachine.m_Queue[v20];
    if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (v23 & m_StateMachineBreak->PowerPolicyEvents) != 0 )
      DbgBreakPoint();
    if ( (v23 & 0x3A3F07F0) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v18].StateInfo.Bits & 1) == 0 )
      goto LABEL_44;
    v24 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v24 & v23) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v24 & ~v23;
    p_m_PowerPolicyMachine->m_QueueHead = ((unsigned int)p_m_PowerPolicyMachine->m_QueueHead + 1)
                                        % this->m_PowerPolicyMachine.m_QueueDepth;
    KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v21);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v18].FirstTargetState.PowerPolicyEvent == v23 )
    {
      _a3 = FxPkgPnp::m_WdfPowerPolicyStates[v18].FirstTargetState.TargetState;
LABEL_4:
      if ( _a3 != WdfDevStatePwrPolNull )
      {
        v54.m_Timer.m_TimerContext = 0LL;
        *(_QWORD *)&NotificationData.Type = 0LL;
        NotificationData.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
        m_DeviceBase = this->m_DeviceBase;
        v54.m_Timer.m_TimerCallback = 0LL;
        v54.m_Timer.m_Period = 0;
        v54.m_Timer.m_KernelExTimer = 0LL;
        v55 = this;
        _a4 = *(_DWORD *)&m_DeviceBase[1].m_Type;
        do
        {
          v8 = this->m_DeviceBase;
          _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v8->m_ObjectSize )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            this->m_Globals,
            4u,
            0x15u,
            0x15u,
            WPP_PowerPolicyStateMachine_cpp_Traceguids,
            _a1,
            v8->m_DeviceObject.m_DeviceObject,
            _a3,
            _a4);
          m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
          if ( m_PowerPolicyStateCallbacks )
          {
            v40 = this->m_DeviceBase;
            NotificationData.Type = StateNotificationLeaveState;
            NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
            m_ObjectSize = v40->m_ObjectSize;
            v42 = (WDFDEVICE__ *)((unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v42 = 0LL;
            FxPowerPolicyStateCallback::Invoke(
              m_PowerPolicyStateCallbacks,
              _a4,
              StateNotificationLeaveState,
              v42,
              &NotificationData);
          }
          m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
          v12 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
          this->m_PowerPolicyMachine.m_HistoryIndex = v12;
          this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
          v13 = this->m_PowerPolicyStateCallbacks;
          if ( v13 )
          {
            v43 = this->m_DeviceBase;
            NotificationData.Type = StateNotificationEnterState;
            NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
            v44 = v43->m_ObjectSize;
            v45 = (WDFDEVICE__ *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v44 )
              v45 = 0LL;
            FxPowerPolicyStateCallback::Invoke(v13, _a3, StateNotificationEnterState, v45, &NotificationData);
          }
          _a4 = _a3;
          *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
          v14 = this->m_StateMachineBreak;
          v15 = 32LL * ((_a3 & 0xFFFF7FFF) - 1280) + 724848;
          if ( v14 && v14->BreakEnabled && v14->PowerPolicyState == _a3 )
            DbgBreakPoint();
          if ( *(_QWORD *)(v15 + 0x140000000LL) )
          {
            if ( (_a3 & 0x8000) != 0 )
            {
              v54.m_Timer.m_Period = 0;
              v54.m_Timer.m_TimerContext = &v54;
              v54.m_Timer.m_TimerCallback = FxWatchdog::_WatchdogDpc;
              KeInitializeTimerEx(&v54.m_Timer.KernelTimer, NotificationTimer);
              KeInitializeDpc(&v54.m_Timer.TimerDpc, v54.m_Timer.m_TimerCallback, v54.m_Timer.m_TimerContext);
              v54.m_Timer.m_IsExtTimer = 0;
              v39.QuadPart = -864000000000LL;
              CurrentThread = KeGetCurrentThread();
              if ( !v55->m_SharedPower.m_ExtendWatchDogTimer )
                v39.QuadPart = -6000000000LL;
              MxTimer::Start(&v54, v39, 0);
              _a3 = (*(unsigned int (__fastcall **)(FxPkgPnp *))(v15 + 0x140000000LL))(this);
              MxTimer::Stop(&v54);
            }
            else
            {
              _a3 = (*(unsigned int (__fastcall **)(FxPkgPnp *))(v15 + 0x140000000LL))(this);
            }
          }
          else
          {
            _a3 = WdfDevStatePwrPolNull;
          }
          v16 = this->m_PowerPolicyStateCallbacks;
          if ( v16 )
          {
            v46 = this->m_DeviceBase;
            NotificationData.Type = StateNotificationPostProcessState;
            NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
            v47 = v46->m_ObjectSize;
            v48 = (WDFDEVICE__ *)((unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v47 )
              v48 = 0LL;
            FxPowerPolicyStateCallback::Invoke(v16, _a4, StateNotificationPostProcessState, v48, &NotificationData);
          }
        }
        while ( _a3 != WdfDevStatePwrPolNull );
        p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
        MxTimer::~MxTimer(&v54, v12);
        goto $LC317;
      }
    }
    else
    {
      OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v18].OtherTargetStates;
      if ( OtherTargetStates )
      {
        for ( j = 0; ; ++j )
        {
          v27 = &OtherTargetStates[j];
          if ( v27->PowerPolicyEvent == PwrPolNull )
            break;
          if ( v27->PowerPolicyEvent == v23 )
          {
            _a3 = v27->TargetState;
            goto LABEL_4;
          }
        }
      }
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v49 = this->m_DeviceBase;
      v50 = (const void *)((unsigned __int64)v49 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v49->m_ObjectSize )
        v50 = 0LL;
      WPP_IFR_SF_qqLL(
        m_Globals,
        5u,
        0xCu,
        0x13u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        v50,
        v49->m_DeviceObject.m_DeviceObject,
        v17,
        v23);
    }
    globals = *(_DWORD *)&FxPkgPnp::m_WdfPowerPolicyStates[v18].StateInfo.Bits >> 1;
    if ( (globals & v23) == 0 )
    {
      v51 = this->m_DeviceBase;
      v52 = (const void *)((unsigned __int64)v51 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v51->m_ObjectSize )
        v52 = 0LL;
      WPP_IFR_SF_qqLLL(
        this->m_Globals,
        2u,
        globals,
        0x14u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        v52,
        v51->m_DeviceObject.m_DeviceObject,
        v17,
        v23,
        globals);
      if ( v23 >= PwrPolDeviceDirectedPowerDown || (v17 & 0xFFFF7FFF) >= 0x599 )
        MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", v17, v23);
    }
    if ( v23 <= PwrPolWakeFailed )
    {
      switch ( v23 )
      {
        case PwrPolWakeFailed:
          goto LABEL_66;
        case PwrPolSx:
          FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
          break;
        case PwrPolS0:
          switch ( v17 )
          {
            case 0x500u:
            case 0x58Eu:
              goto $LC317;
            case 0x505u:
            case 0x508u:
            case 0x531u:
            case 0x53Eu:
            case 0x563u:
            case 0x565u:
            case 0x56Eu:
            case 0x584u:
            case 0x589u:
              FxPowerPolicyMachine::AcknowledgeS0(p_m_PowerPolicyMachine);
              break;
            default:
              MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", v17, 8u);
              break;
          }
          break;
        case PwrPolWakeSuccess:
LABEL_66:
          this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
          break;
        default:
          break;
      }
$LC317:
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
    }
    else
    {
      if ( v23 == PwrPolUsbSelectiveSuspendCallback )
      {
        KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
        goto $LC317;
      }
      p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
      if ( v23 == PwrPolUsbSelectiveSuspendCompleted )
      {
        this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
        goto $LC317;
      }
    }
  }
  m_QueueFlags = this->m_PowerPolicyMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerPolicyMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerPolicyMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
    }
    if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PowerPolicyMachine.m_WorkItemFinished;
      this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_44:
  KeReleaseSpinLock(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock, v21);
}
