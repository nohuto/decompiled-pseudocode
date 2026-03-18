/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1400322B0
 * Callers:
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x140041148 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1400A6CE4 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400326D0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  void *v6; // rsi
  char v8; // r15
  unsigned int v9; // r13d
  KIRQL v10; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v12; // bp
  __int64 m_EventHistoryIndex; // rax
  FxTagTracker *m_TagTracker; // r14
  const FxIdleStateTable *v15; // r8
  unsigned int i; // eax
  __int64 v17; // rdx
  LONG StateEvent; // eax
  unsigned __int64 *p_m_Lock; // rcx
  unsigned int v20; // ebx
  FxTagTracker *v21; // rcx
  FxPowerIdleStates _a3; // ebx
  unsigned __int64 v24; // rcx
  const void *_a1; // rdx
  char v26; // al
  void (__fastcall *v27)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  FxTagTracker *v28; // r15
  _FX_DRIVER_GLOBALS *m_OwningObject; // rcx
  KIRQL v30; // bp
  unsigned __int8 v31; // al
  unsigned __int64 v32; // r8
  __int16 v33; // ax
  const void *v34; // r8
  _FX_DRIVER_GLOBALS *v35; // r11
  unsigned __int64 v36; // r10
  __int16 v37; // ax
  const void *v38; // r10
  unsigned __int64 v39; // rdx
  __int16 v40; // ax
  const void *v41; // rdx
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-58h]

  v6 = Tag;
  v8 = Flags;
  v9 = 0;
  v10 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v12 = v10;
  if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
  {
    KeReleaseSpinLock(&this->m_Lock.m_Lock, v10);
    v20 = -1073741101;
  }
  else
  {
    m_EventHistoryIndex = this->m_EventHistoryIndex;
    v9 = ++this->m_IoCount;
    m_TagTracker = this[2].m_TagTracker;
    this->m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoIncrement;
    this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
    v15 = &FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState];
    for ( i = 0; i < FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount; ++i )
    {
      v17 = i;
      if ( v15[-1].TargetStates[v17].PowerIdleEvent == PowerIdleEventIoIncrement )
      {
        _mm_lfence();
        for ( _a3 = v15[-1].TargetStates[v17].PowerIdleState;
              _a3 != FxIdleMax;
              _a3 = ((unsigned int (__fastcall *)(FxPowerIdleMachine *))v27)(this) )
        {
          v24 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
          _a1 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v24 + 10) )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            *(const void **)(v24 + 144),
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v26 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v26 & 7;
          v27 = funcs_140011152[3 * _a3];
          if ( !v27 )
            break;
        }
        break;
      }
    }
    StateEvent = KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event);
    p_m_Lock = &this->m_Lock.m_Lock;
    if ( StateEvent )
    {
      KeReleaseSpinLock(p_m_Lock, v12);
      v20 = 0;
    }
    else
    {
      if ( (v8 & 1) != 0 )
        this->m_Flags |= 0x80u;
      KeReleaseSpinLock(p_m_Lock, v12);
      v20 = 259;
      if ( WaitForD0 )
      {
        v28 = this[2].m_TagTracker;
        m_OwningObject = (_FX_DRIVER_GLOBALS *)v28->m_OwningObject;
        if ( m_OwningObject->FxVerboseOn )
        {
          v32 = (unsigned __int64)v28->m_TagHistory[0].Tag;
          _a2 = KeGetCurrentThread();
          v33 = *(_WORD *)(v32 + 10);
          v34 = (const void *)(v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v33 )
            v34 = 0LL;
          WPP_IFR_SF_qq(m_OwningObject, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v34, _a2);
        }
        FxCREvent::EnterCRAndWaitAndLeave(&this->m_D0NotificationEvent);
        v30 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
        v31 = this->m_Flags;
        if ( (v31 & 0x10) != 0 || (v31 & 0x20) == 0 )
        {
          v35 = (_FX_DRIVER_GLOBALS *)v28->m_OwningObject;
          v20 = -1073741101;
          if ( v35->FxVerboseOn )
          {
            if ( (v31 & 0x10) != 0 )
            {
              v36 = (unsigned __int64)v28->m_TagHistory[0].Tag;
              _a2a = KeGetCurrentThread();
              v37 = *(_WORD *)(v36 + 10);
              v38 = (const void *)(v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v37 )
                v38 = 0LL;
              WPP_IFR_SF_qqd(v35, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v38, _a2a, 0xC00002D3);
            }
            else
            {
              v39 = (unsigned __int64)v28->m_TagHistory[0].Tag;
              _a2b = KeGetCurrentThread();
              v40 = *(_WORD *)(v39 + 10);
              v41 = (const void *)(v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v40 )
                v41 = 0LL;
              WPP_IFR_SF_qqd(v35, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v41, _a2b, 0xC00002D3);
            }
          }
          --this->m_IoCount;
          FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
        }
        else
        {
          v20 = 0;
        }
        KeReleaseSpinLock(&this->m_Lock.m_Lock, v30);
      }
    }
    v6 = Tag;
  }
  v21 = this->m_TagTracker;
  if ( v21 && (!v20 || v20 == 259) )
    FxTagTracker::UpdateTagHistory(v21, v6, Line, File, TagAddRef, v9);
  return v20;
}
