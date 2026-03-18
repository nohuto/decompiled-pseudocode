/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004DD20
 * Callers:
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x14004D970 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x14004DB00 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueueStop @ 0x14004DBE0 (imp_WdfIoQueueStop.c)
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
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14004BC80 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x14004BCE4 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x14004ECC0 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x14004EED0 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14004F264 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x140050074 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned __int8 v10; // bp
  _FX_IO_QUEUE_STATE m_QueueState; // eax
  unsigned __int8 v12; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rsi
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // al
  unsigned __int16 v17; // r9
  FxVerifierLock *v19; // rcx
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  unsigned __int8 v21; // di
  FxRequest *NextRequest; // rax
  unsigned __int8 v23; // r8
  FxRequest *v24; // rsi
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // bp
  FxRequest *v27; // rax
  unsigned __int8 v28; // r8
  FxRequest *v29; // r13
  FxIoQueue *v30; // rcx
  FxIrpQueue *p_m_Queue; // rsi
  FxNonPagedObject *v32; // rdi
  FxIrpQueue *Flink; // rax
  FxNonPagedObject *v34; // rcx
  bool v35; // dl
  FxNonPagedObject *m_LockObject; // rdi
  unsigned int v37; // edx
  FxNonPagedObject_vtbl *v38; // rax
  const void *_a1; // r8
  unsigned __int8 v40; // r8
  const void *v41; // rcx
  unsigned __int8 v42; // r8
  FxRequest *v43; // rcx
  unsigned int *v44; // r8
  const void *v45; // rcx
  const void *v46; // rax
  unsigned int v47; // edx
  FxVerifierLock *v48; // rcx
  FxVerifierLock *v49; // rcx
  FxTagTracker *v50; // rcx
  unsigned int v51; // eax
  FxTagTracker *Blink; // rcx
  FxTagTracker *v53; // rcx
  const void *v54; // rdx
  const void *v55; // rcx
  const void *v56; // rcx
  _FX_DRIVER_GLOBALS *globals; // [rsp+40h] [rbp-48h]
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  m_Globals = this->m_Globals;
  globals = m_Globals;
  irql = 0;
  fwrIrpList = 0LL;
  if ( m_ObjectFlags < 0 && (v19 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v19, &irql, (unsigned __int8)IdleComplete);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v10;
  }
  if ( this->m_Deleted )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741738);
    FxNonPagedObject::Unlock(this, v10, v40);
    return 3221225558LL;
  }
  else
  {
    if ( IdleComplete )
    {
      _a2 = this->m_IdleComplete.Method;
      if ( _a2 )
      {
        v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v41 = 0LL;
        WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, v41, _a2, 0xC0000010);
        FxNonPagedObject::Unlock(this, v10, v42);
        return 3221225488LL;
      }
      this->m_IdleComplete.Method = IdleComplete;
      this->m_IdleCompleteContext = Context;
    }
    m_QueueState = this->m_QueueState;
    if ( (m_QueueState & 0x10000) != 0 )
    {
      v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v54 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, v54);
    }
    else
    {
      this->m_QueueState = m_QueueState | 1;
    }
    this->m_QueueState &= ~2u;
    v12 = 1;
    if ( CancelRequests )
    {
      this->m_CancelDispatchedRequests = 1;
      p_m_Queue = &this->m_Queue;
      v32 = 0LL;
LABEL_32:
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      v34 = v32 + 1;
      if ( !v32 )
        v34 = 0LL;
      v35 = v34 == 0LL;
      while ( Flink != p_m_Queue )
      {
        if ( !BYTE4(Flink[-3].m_LockObject) )
        {
          m_LockObject = Flink[-1].m_LockObject;
          if ( v35 )
          {
            v32 = m_LockObject - 1;
            v37 = _InterlockedIncrement(&v32->m_Refcnt);
            if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
            {
              v50 = (FxTagTracker *)v32[-1].m_ChildEntry.Flink;
              if ( v50 )
                FxTagTracker::UpdateTagHistory(
                  v50,
                  0LL,
                  447,
                  "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp",
                  TagAddRef,
                  v37);
            }
            v38 = v32->__vftable;
            HIBYTE(v32[1].m_DisposeSingleEntry.Next) = 1;
            v38->Release(v32, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            v12 = 1;
            goto LABEL_32;
          }
          v35 = m_LockObject == v34;
        }
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( this->m_SupportForwardProgress )
      {
        fwrIrpList.Blink = &fwrIrpList;
        fwrIrpList.Flink = &fwrIrpList;
        FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
      }
    }
    p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    {
      FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v10, v12);
      p_m_Lock = &this->m_NPLock.m_Lock;
    }
    else
    {
      p_m_Lock = &this->m_NPLock.m_Lock;
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v10);
    }
    if ( CancelRequests )
    {
      while ( 1 )
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v48 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v48, &irql, v15);
          v21 = irql;
        }
        else
        {
          v21 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v21;
        }
        NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
        v24 = NextRequest;
        if ( !NextRequest )
          break;
        if ( !FxRequest::IsCancelled(NextRequest) && FxRequest::InsertHeadIrpQueue(v43, &this->m_Queue, v44) >= 0 )
          goto LABEL_24;
        v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v45 = 0LL;
        if ( v24->m_ObjectSize )
          v46 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v46 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v46, v45);
        v47 = _InterlockedIncrement(&v24->m_Refcnt);
        if ( SLOBYTE(v24->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)v24[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x75657551,
              3782,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagAddRef,
              v47);
        }
        FxIoQueue::CancelForQueue(this, v24, v21);
      }
      if ( m_Globals->FxVerboseOn )
      {
        v55 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v55 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v55);
      }
LABEL_24:
      FxNonPagedObject::Unlock(this, v21, v23);
      while ( 1 )
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v49 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
              p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
              v49) )
        {
          FxVerifierLock::Lock(v49, &irql, v25);
          v26 = irql;
          p_m_Lock = &this->m_NPLock.m_Lock;
        }
        else
        {
          p_m_Lock = &this->m_NPLock.m_Lock;
          v26 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v26;
          p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
        }
        v27 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
        v29 = v27;
        if ( !v27 )
          break;
        v27->m_Canceled = 1;
        FxNonPagedObject::Unlock(this, v26, v28);
        v51 = _InterlockedIncrement(&v29->m_Refcnt);
        if ( SLOBYTE(v29->m_ObjectFlags) < 0 )
        {
          v53 = (FxTagTracker *)v29[-1].m_OwnerListEntry2.Blink;
          if ( v53 )
            FxTagTracker::UpdateTagHistory(
              v53,
              (void *)0x75657551,
              3823,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagAddRef,
              v51);
        }
        FxIoQueue::CancelForDriver(this, v29);
      }
      if ( globals->FxVerboseOn )
      {
        v56 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v56 = 0LL;
        WPP_IFR_SF_q(globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v56);
        p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
      }
      FxNonPagedObject::Unlock(this, v26, v28);
      if ( this->m_SupportForwardProgress )
        FxIoQueue::CancelIrps(v30, &fwrIrpList);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    {
      FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v15);
      v16 = irql;
    }
    else
    {
      v16 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    }
    FxIoQueue::DispatchEvents(this, v16, 0LL, v17);
    return 0LL;
  }
}
