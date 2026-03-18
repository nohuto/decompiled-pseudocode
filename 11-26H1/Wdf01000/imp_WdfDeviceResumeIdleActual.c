/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x14004AD80
 * Callers:
 *     imp_WdfDeviceResumeIdleNoTrack @ 0x14004C610 (imp_WdfDeviceResumeIdleNoTrack.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        void *Tag,
        int Line,
        char *File)
{
  int v5; // r15d
  void *v6; // r12
  __int64 v8; // rax
  FxDevice *v9; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rbx
  FxPkgPnp *m_PkgPnp; // rsi
  unsigned __int64 *p_m_Lock; // rbp
  _FX_DRIVER_GLOBALS *v14; // rdi
  KIRQL v15; // r14
  __int64 m_EventHistoryIndex; // rax
  unsigned int v17; // esi
  FxPkgPnp *v18; // r13
  __int64 v19; // rcx
  __int64 m_CurrentIdleState; // rax
  FxPowerIdleStates _a3; // edi
  FxDeviceBase *v22; // rcx
  const void *_a1; // rdx
  char v24; // al
  void (__fastcall *v25)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  FxTagTracker *m_TagTracker; // rcx
  FxPkgPnp *v27; // rcx
  FxDevice_vtbl *v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // r8d
  unsigned __int16 v31; // r9
  FxDeviceBase *m_DeviceBase; // rax
  const void *v33; // rdx
  bool v34; // zf
  _DEVICE_OBJECT *_a2; // rax
  unsigned int v36; // edx
  FxVerifierDownlevelOption v37; // r9d
  _FX_DRIVER_GLOBALS *v38; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  FxDevice *pDevice; // [rsp+50h] [rbp-58h] BYREF
  FxDevice **p_pDevice; // [rsp+58h] [rbp-50h] BYREF
  __int16 v43; // [rsp+60h] [rbp-48h]
  __int16 v44; // [rsp+62h] [rbp-46h]
  int v45; // [rsp+64h] [rbp-44h]

  v5 = Line;
  v6 = Tag;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v8) = 0;
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v8 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v8);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    v44 = v8;
    pDevice = 0LL;
    v45 = 0;
    v28 = v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    p_pDevice = &pDevice;
    v43 = 4098;
    if ( v28->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v29, v30, v31, traceGuid, (const void *)Device, 0x1002u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    v9 = pDevice;
  }
  m_Globals = v9->m_Globals;
  m_Owner = v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    m_PkgPnp = m_Owner->m_PkgPnp;
    p_m_Lock = &m_Owner->m_PowerIdleMachine.m_Lock.m_Lock;
    v14 = m_PkgPnp->m_Globals;
    v15 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
    if ( !m_Owner->m_PowerIdleMachine.m_IoCount )
    {
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      v33 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      v34 = m_DeviceBase->m_ObjectSize == 0;
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( v34 )
        v33 = 0LL;
      WPP_IFR_SF_qq(v14, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v33, _a2);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(v14, v36, 0xBu, v37) )
        FxVerifierDbgBreakPoint(v38);
    }
    m_EventHistoryIndex = m_Owner->m_PowerIdleMachine.m_EventHistoryIndex;
    v17 = --m_Owner->m_PowerIdleMachine.m_IoCount;
    v18 = m_Owner->m_PkgPnp;
    m_Owner->m_PowerIdleMachine.m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoDecrement;
    m_Owner->m_PowerIdleMachine.m_EventHistoryIndex = (m_Owner->m_PowerIdleMachine.m_EventHistoryIndex + 1) & 7;
    v19 = 0LL;
    m_CurrentIdleState = m_Owner->m_PowerIdleMachine.m_CurrentIdleState;
    while ( (unsigned int)v19 < FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStatesCount )
    {
      if ( FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStates[v19].PowerIdleEvent == PowerIdleEventIoDecrement )
      {
        _mm_lfence();
        _a3 = FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStates[v19].PowerIdleState;
        if ( _a3 != FxIdleMax )
        {
          do
          {
            v22 = v18->m_DeviceBase;
            _a1 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v22->m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqLL(
              v18->m_Globals,
              4u,
              0x15u,
              0x11u,
              WPP_PowerIdleStateMachine_cpp_Traceguids,
              _a1,
              v22->m_DeviceObject.m_DeviceObject,
              _a3,
              m_Owner->m_PowerIdleMachine.m_CurrentIdleState);
            m_Owner->m_PowerIdleMachine.m_StateHistory[m_Owner->m_PowerIdleMachine.m_StateHistoryIndex] = _a3;
            v24 = m_Owner->m_PowerIdleMachine.m_StateHistoryIndex + 1;
            m_Owner->m_PowerIdleMachine.m_CurrentIdleState = _a3;
            m_Owner->m_PowerIdleMachine.m_StateHistoryIndex = v24 & 7;
            v25 = funcs_140011152[3 * _a3];
            if ( !v25 )
              break;
            _a3 = ((unsigned int (__fastcall *)(FxPowerPolicyOwnerSettings *))v25)(m_Owner);
          }
          while ( _a3 != FxIdleMax );
          v5 = Line;
          p_m_Lock = &m_Owner->m_PowerIdleMachine.m_Lock.m_Lock;
          v6 = Tag;
        }
        break;
      }
      v19 = (unsigned int)(v19 + 1);
    }
    KeReleaseSpinLock(p_m_Lock, v15);
    m_TagTracker = m_Owner->m_PowerIdleMachine.m_TagTracker;
    if ( m_TagTracker )
      FxTagTracker::UpdateTagHistory(m_TagTracker, v6, v5, File, TagRelease, v17);
    v27 = pDevice->m_PkgPnp;
    if ( v27->m_SleepStudyTrackReferences == 1
      && _InterlockedExchangeAdd(&v27->m_SleepStudyPowerRefIoCount, 0xFFFFFFFF) == 1 )
    {
      m_SleepStudy = v27->m_SleepStudy;
      if ( m_SleepStudy )
      {
        if ( m_SleepStudy->ComponentPowerRef )
          SleepstudyHelper_ComponentInactive();
      }
    }
  }
  else
  {
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x27u, WPP_FxDeviceApi_cpp_Traceguids);
  }
}
