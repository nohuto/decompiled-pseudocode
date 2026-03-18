/*
 * XREFs of StopIdleWorker @ 0x140011570
 * Callers:
 *     imp_WdfDeviceStopIdleNoTrack @ 0x14007D150 (imp_WdfDeviceStopIdleNoTrack.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400326D0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StopIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  int v6; // r14d
  void *v7; // rbp
  FxDevice *v9; // rbx
  __int64 v10; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned int v13; // r13d
  FxPowerPolicyOwnerSettings *v14; // rsi
  KIRQL v15; // al
  unsigned __int8 m_Flags; // cl
  __int64 m_EventHistoryIndex; // rax
  void *m_PkgPnp; // r10
  const FxIdleStateTable *v19; // r8
  unsigned int i; // eax
  __int64 v21; // rdx
  LONG StateEvent; // eax
  unsigned __int64 *p_m_Lock; // rcx
  int _a3; // ebx
  _FX_DRIVER_GLOBALS *v26; // rcx
  $960502E47C9DF6615B5929388F661F48 *v27; // r13
  KIRQL v28; // r12
  unsigned __int8 v29; // al
  FxTagTracker *m_TagTracker; // rcx
  FxPkgPnp *v31; // rcx
  unsigned int PowerIdleState; // ebx
  __int64 v33; // rcx
  const void *v34; // rdx
  char v35; // al
  void (__fastcall *v36)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  unsigned int v37; // eax
  KIRQL CurrentIrql; // al
  FxDevice_vtbl *v39; // rax
  unsigned __int8 v40; // dl
  unsigned int v41; // r8d
  unsigned __int16 v42; // r9
  const void *v43; // r8
  _FX_DRIVER_GLOBALS *v44; // r11
  const void *v45; // r10
  const void *v46; // rdx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-78h]
  unsigned int v52; // [rsp+50h] [rbp-58h]
  FxDevice *pDevice; // [rsp+58h] [rbp-50h] BYREF
  FxDevice **p_pDevice; // [rsp+60h] [rbp-48h] BYREF
  __int16 v55; // [rsp+68h] [rbp-40h]
  __int16 v56; // [rsp+6Ah] [rbp-3Eh]
  int v57; // [rsp+6Ch] [rbp-3Ch]
  KIRQL v58; // [rsp+B8h] [rbp+10h]
  FxPkgPnp *v59; // [rsp+B8h] [rbp+10h]

  v6 = WaitForD0;
  v7 = Tag;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    v56 = v10;
    pDevice = 0LL;
    v57 = 0;
    v39 = v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    p_pDevice = &pDevice;
    v55 = 4098;
    if ( v39->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v40, v41, v42, traceGuid, (const void *)Device, 0x1002u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    v9 = pDevice;
  }
  m_Globals = v9->m_Globals;
  if ( (_BYTE)v6 && m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
    v9 = pDevice;
  }
  m_Owner = v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 12, 5);
    v13 = 0;
    v14 = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v15 = KeAcquireSpinLockRaiseToDpc(&v14->m_PowerIdleMachine.m_Lock.m_Lock);
    m_Flags = v14->m_PowerIdleMachine.m_Flags;
    v58 = v15;
    if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
    {
      KeReleaseSpinLock(&v14->m_PowerIdleMachine.m_Lock.m_Lock, v15);
      _a3 = -1073741101;
    }
    else
    {
      m_EventHistoryIndex = v14->m_PowerIdleMachine.m_EventHistoryIndex;
      v13 = ++v14->m_PowerIdleMachine.m_IoCount;
      m_PkgPnp = v14->m_PkgPnp;
      v14->m_PowerIdleMachine.m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoIncrement;
      LOBYTE(m_EventHistoryIndex) = v14->m_PowerIdleMachine.m_EventHistoryIndex + 1;
      v52 = v13;
      p_pDevice = (FxDevice **)m_PkgPnp;
      v14->m_PowerIdleMachine.m_EventHistoryIndex = m_EventHistoryIndex & 7;
      v19 = &FxPowerIdleMachine::m_StateTable[v14->m_PowerIdleMachine.m_CurrentIdleState];
      for ( i = 0;
            i < FxPowerIdleMachine::m_StateTable[v14->m_PowerIdleMachine.m_CurrentIdleState - 1].TargetStatesCount;
            ++i )
      {
        v21 = i;
        if ( v19[-1].TargetStates[v21].PowerIdleEvent == PowerIdleEventIoIncrement )
        {
          _mm_lfence();
          PowerIdleState = v19[-1].TargetStates[v21].PowerIdleState;
          if ( PowerIdleState != 35 )
          {
            do
            {
              v33 = *((_QWORD *)m_PkgPnp + 12);
              v34 = (const void *)(v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v33 + 10) )
                v34 = 0LL;
              WPP_IFR_SF_qqLL(
                *((_FX_DRIVER_GLOBALS **)m_PkgPnp + 2),
                4u,
                0x15u,
                0x11u,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                v34,
                *(const void **)(v33 + 144),
                PowerIdleState,
                v14->m_PowerIdleMachine.m_CurrentIdleState);
              v14->m_PowerIdleMachine.m_StateHistory[v14->m_PowerIdleMachine.m_StateHistoryIndex] = PowerIdleState;
              v35 = v14->m_PowerIdleMachine.m_StateHistoryIndex + 1;
              v14->m_PowerIdleMachine.m_CurrentIdleState = PowerIdleState;
              v14->m_PowerIdleMachine.m_StateHistoryIndex = v35 & 7;
              v36 = funcs_140011152[3 * (int)PowerIdleState];
              if ( !v36 )
                break;
              v37 = ((__int64 (__fastcall *)(FxPowerPolicyOwnerSettings *))v36)(v14);
              m_PkgPnp = p_pDevice;
              PowerIdleState = v37;
            }
            while ( v37 != 35 );
          }
          break;
        }
      }
      StateEvent = KeReadStateEvent(&v14->m_PowerIdleMachine.m_D0NotificationEvent.m_Event.m_Event);
      p_m_Lock = &v14->m_PowerIdleMachine.m_Lock.m_Lock;
      if ( StateEvent )
      {
        KeReleaseSpinLock(p_m_Lock, v58);
        v7 = Tag;
        _a3 = 0;
      }
      else
      {
        KeReleaseSpinLock(p_m_Lock, v58);
        _a3 = 259;
        if ( (_BYTE)v6 )
        {
          v59 = v14->m_PkgPnp;
          v26 = v59->m_Globals;
          v27 = &v59->96;
          if ( v26->FxVerboseOn )
          {
            _a3 = 0;
            _a2 = KeGetCurrentThread();
            v43 = (const void *)((unsigned __int64)v27->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v27->m_DeviceBase->m_ObjectSize )
              v43 = 0LL;
            WPP_IFR_SF_qq(v26, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v43, _a2);
          }
          else
          {
            _a3 = 0;
          }
          FxCREvent::EnterCRAndWaitAndLeave(&v14->m_PowerIdleMachine.m_D0NotificationEvent);
          v28 = KeAcquireSpinLockRaiseToDpc(&v14->m_PowerIdleMachine.m_Lock.m_Lock);
          v29 = v14->m_PowerIdleMachine.m_Flags;
          if ( (v29 & 0x10) != 0 || (v29 & 0x20) == 0 )
          {
            _a3 = -1073741101;
            v44 = v59->m_Globals;
            if ( v44->FxVerboseOn )
            {
              if ( (v29 & 0x10) != 0 )
              {
                _a2a = KeGetCurrentThread();
                v45 = (const void *)((unsigned __int64)v27->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v27->m_DeviceBase->m_ObjectSize )
                  v45 = 0LL;
                WPP_IFR_SF_qqd(v44, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v45, _a2a, 0xC00002D3);
              }
              else
              {
                _a2b = KeGetCurrentThread();
                v46 = (const void *)((unsigned __int64)v27->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v27->m_DeviceBase->m_ObjectSize )
                  v46 = 0LL;
                WPP_IFR_SF_qqd(v44, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v46, _a2b, 0xC00002D3);
              }
            }
            --v14->m_PowerIdleMachine.m_IoCount;
            FxPowerIdleMachine::ProcessEventLocked(&v14->m_PowerIdleMachine, PowerIdleEventIoDecrement);
          }
          KeReleaseSpinLock(&v14->m_PowerIdleMachine.m_Lock.m_Lock, v28);
          v13 = v52;
        }
        v7 = Tag;
      }
    }
    m_TagTracker = v14->m_PowerIdleMachine.m_TagTracker;
    if ( m_TagTracker && (!_a3 || _a3 == 259) )
      FxTagTracker::UpdateTagHistory(m_TagTracker, v7, Line, File, TagAddRef, v13);
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids, (const void *)Device, v6, _a3);
    if ( _a3 >= 0 )
    {
      v31 = pDevice->m_PkgPnp;
      if ( v31->m_SleepStudyTrackReferences == 1 && _InterlockedIncrement(&v31->m_SleepStudyPowerRefIoCount) == 1 )
      {
        m_SleepStudy = v31->m_SleepStudy;
        if ( m_SleepStudy )
        {
          if ( m_SleepStudy->ComponentPowerRef )
            SleepstudyHelper_ComponentActive();
        }
      }
    }
    return (unsigned int)_a3;
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, (const void *)Device, -1073741436);
    return 3221225860LL;
  }
}
