/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004E7B8
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045B54 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueuePurge @ 0x14004DA90 (imp_WdfIoQueuePurge.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x14004E3A0 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x14004E540 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     imp_WdfIoQueueDrain @ 0x1400A10C0 (imp_WdfIoQueueDrain.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1A64 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x14004BC44 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x14004ECC0 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x14004ED90 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14004F264 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v11; // di
  unsigned __int8 v12; // r8
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned __int64 *p_m_Lock; // r13
  unsigned __int8 v15; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // r12
  unsigned __int8 v17; // di
  unsigned __int64 NextRequest; // rax
  unsigned __int8 v19; // r8
  FxRequest *v20; // rsi
  unsigned __int8 v21; // si
  FxRequest *v22; // rax
  unsigned __int8 v23; // r8
  FxRequest *v24; // rdi
  unsigned __int8 v25; // al
  unsigned __int16 v26; // r9
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  unsigned int v29; // esi
  const void *_a1; // rcx
  unsigned __int8 v31; // r8
  FxVerifierLock *v32; // rcx
  FxVerifierLock *v33; // rcx
  FxVerifierLock *v34; // rcx
  FxVerifierLock *v35; // rcx
  unsigned int v36; // eax
  FxTagTracker *v37; // rcx
  FxVerifierLock *v38; // rcx
  const void *v39; // r8
  const void *v40; // rdx
  unsigned int v41; // edx
  FxTagTracker *Blink; // rcx
  const void *v43; // r8
  const void *v44; // rcx
  const void *v45; // rcx
  unsigned __int8 irql; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int8 v47; // [rsp+88h] [rbp+48h]
  unsigned __int8 v48; // [rsp+90h] [rbp+50h]

  v48 = CancelDriverRequests;
  v47 = CancelQueueRequests;
  m_ObjectFlags = this->m_ObjectFlags;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v32 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v32, &irql, CancelDriverRequests);
    v11 = irql;
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v11;
  }
  if ( this->m_Deleted )
  {
    v29 = -1073741738;
    v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v43 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, v43, -1073741738);
    goto LABEL_37;
  }
  if ( !PurgeComplete )
    goto LABEL_5;
  _a2 = this->m_PurgeComplete.Method;
  if ( _a2 )
  {
    v29 = -1073741808;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2, 0xC0000010);
LABEL_37:
    FxNonPagedObject::Unlock(this, v11, v31);
    return v29;
  }
  this->m_PurgeCompleteContext = Context;
  this->m_PurgeComplete.Method = PurgeComplete;
LABEL_5:
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests )
  {
    if ( CancelDriverRequests )
    {
      WdfBindInfo = m_Globals->WdfBindInfo;
      if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
        this->m_CancelDispatchedRequests = 1;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
        (v35 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL) )
  {
    FxVerifierLock::Unlock(v35, v11, v12);
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
    p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  }
  if ( v47 )
  {
    while ( 1 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      {
        FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v15);
        v17 = irql;
      }
      else
      {
        v17 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        irql = v17;
      }
      NextRequest = (unsigned __int64)FxRequest::GetNextRequest(&this->m_Queue);
      v20 = (FxRequest *)NextRequest;
      if ( !NextRequest )
        break;
      v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v39 = 0LL;
      v40 = (const void *)(NextRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(NextRequest + 10) )
        v40 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v40, v39);
      v41 = _InterlockedIncrement(&v20->m_Refcnt);
      if ( SLOBYTE(v20->m_ObjectFlags) < 0 )
      {
        Blink = (FxTagTracker *)v20[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            (void *)0x75657551,
            4048,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v41);
      }
      FxIoQueue::CancelForQueue(this, v20, v17);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v44 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v44);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v17, v19);
    else
      KeReleaseSpinLock(p_m_Lock, v17);
  }
  if ( v48 )
  {
    while ( 1 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v34 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v34, &irql, v15);
        v21 = irql;
      }
      else
      {
        v21 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        irql = v21;
      }
      v22 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v24 = v22;
      if ( !v22 )
        break;
      v22->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v21, v23);
      v36 = _InterlockedIncrement(&v24->m_Refcnt);
      if ( SLOBYTE(v24->m_ObjectFlags) < 0 )
      {
        v37 = (FxTagTracker *)v24[-1].m_OwnerListEntry2.Blink;
        if ( v37 )
          FxTagTracker::UpdateTagHistory(
            v37,
            (void *)0x75657551,
            4093,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v36);
      }
      FxIoQueue::CancelForDriver(this, v24);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v45 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v45);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v38 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v38, v21, v23);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v21);
    }
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v33 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v33, &irql, v15);
    v25 = irql;
  }
  else
  {
    v25 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  FxIoQueue::DispatchEvents(this, v25, 0LL, v26);
  return 0LL;
}
