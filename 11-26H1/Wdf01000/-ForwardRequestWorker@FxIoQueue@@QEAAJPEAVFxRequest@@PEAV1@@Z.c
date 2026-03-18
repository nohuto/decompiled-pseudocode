/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x140030910
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x14004FD0C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140050150 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E4FC4 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxIoQueue *v6; // rbx
  _FX_DRIVER_GLOBALS *v7; // rdx
  unsigned int v8; // r13d
  FxRequestCompletionState m_CompletionState; // r14d
  unsigned __int8 v10; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v14; // r8
  char m_ObjectFlags; // al
  unsigned __int8 v16; // r15
  _FX_IO_QUEUE_STATE _a4; // r10d
  _FX_DRIVER_GLOBALS *v18; // rdx
  FxIrpQueue *p_m_Queue; // rbp
  unsigned __int8 m_IrpAllocation; // r14
  unsigned int v21; // edx
  _IRP *m_Irp; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v23; // rcx
  _LIST_ENTRY *v24; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  int v26; // ebp
  const void *v27; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // al
  unsigned __int8 v33; // r8
  _LIST_ENTRY *v34; // rdx
  FxVerifierLock *v35; // rcx
  FxVerifierLock *v36; // rcx
  FxVerifierLock *v37; // rcx
  _LIST_ENTRY *v38; // rcx
  FxVerifierLock *v39; // rcx
  _LIST_ENTRY *v40; // r9
  _LIST_ENTRY *v41; // rax
  FxRequest_vtbl *v42; // rax
  unsigned __int8 v43; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v46; // dl
  unsigned __int8 v47; // r8
  unsigned int v49; // r12d
  unsigned __int8 v50; // r8
  const void *v51; // rcx
  FxVerifierLock *v52; // rcx
  FxVerifierLock *v53; // rcx
  _LIST_ENTRY *v54; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-78h]
  __int16 updated; // [rsp+50h] [rbp-48h]
  unsigned __int8 irql; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+A8h] [rbp+10h] BYREF
  FxRequestCompletionState NewState; // [rsp+B8h] [rbp+20h]

  m_Globals = this->m_Globals;
  irql = 0;
  v6 = this;
  v7 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement(&Request->m_Refcnt);
  v8 = 0;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    this = (FxIoQueue *)Request[-1].m_OwnerListEntry2.Blink;
    if ( this )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)this,
        (void *)0x74617453,
        1399,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        (unsigned int)v7);
  }
  if ( Request->m_Completed )
  {
    NewState = FxRequestCompletionStateNone;
    v51 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Request->m_ObjectSize )
      v51 = 0LL;
    WPP_IFR_SF_q(Request->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v51);
    FxVerifierDbgBreakPoint(Request->m_Globals);
  }
  else
  {
    m_CompletionState = Request->m_CompletionState;
    NewState = m_CompletionState;
    Request->m_CompletionState = 0;
    if ( m_CompletionState )
      Request->Release(Request, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(this, v7, Request);
  else
    updated = 0;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v35 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v35, &irql, (unsigned __int8)DestQueue);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
    irql = v10;
  }
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  if ( p_m_OwnerListEntry2->Flink->Blink != p_m_OwnerListEntry2 )
    goto LABEL_80;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Blink->Flink != p_m_OwnerListEntry2 )
    goto LABEL_80;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v37 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v37, v10, v10);
  else
    KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v10);
  m_ObjectFlags = DestQueue->m_ObjectFlags;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0 && (v36 = *(FxVerifierLock **)&DestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v36, &PreviousIrql, v14);
    v16 = PreviousIrql;
  }
  else
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&DestQueue->m_NPLock.m_Lock);
    PreviousIrql = v16;
  }
  _a4 = DestQueue->m_QueueState;
  if ( (_a4 & 1) == 0 )
  {
    v27 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a5 = "power stopping (Drain) in progress,";
    if ( !Request->m_ObjectSize )
      v27 = 0LL;
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    _a3 = (const void *)((unsigned __int64)DestQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !DestQueue->m_ObjectSize )
      _a3 = 0LL;
    v8 = -1071644156;
    WPP_IFR_SF_qLsqd(DestQueue->m_Globals, 3u, (unsigned int)v27, 0x2Bu, RefType, _a3, _a4, _a5, v27, -1071644156);
    if ( SLOBYTE(DestQueue->m_ObjectFlags) < 0
      && (v39 = *(FxVerifierLock **)&DestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v39, v16, v30);
    }
    else
    {
      KeReleaseSpinLock(&DestQueue->m_NPLock.m_Lock, v16);
    }
    FxRequest::SetCompletionState(Request, NewState);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1461,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v52 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v52, &irql, v31);
      v32 = irql;
    }
    else
    {
      v32 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
    }
    v34 = v6->m_DriverOwned.Blink;
    if ( v34->Flink == &v6->m_DriverOwned )
    {
      p_m_OwnerListEntry2->Flink = &v6->m_DriverOwned;
      Request->m_OwnerListEntry2.Blink = v34;
      v34->Flink = p_m_OwnerListEntry2;
      v6->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      FxNonPagedObject::Unlock(v6, v32, v33);
      return v8;
    }
    goto LABEL_80;
  }
  v18 = Request->m_Globals;
  p_m_Queue = &DestQueue->m_Queue;
  m_IrpAllocation = Request->m_IrpAllocation;
  if ( v18->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(Request, v18, &DestQueue->m_Queue) < 0 )
  {
    Request->m_IoQueue = DestQueue;
LABEL_77:
    v49 = _InterlockedIncrement(&Request->m_Refcnt);
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      v54 = Request[-1].m_OwnerListEntry2.Blink;
      if ( v54 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v54,
          (void *)0x75657551,
          2459,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v49);
    }
    FxIoQueue::CancelForQueue(DestQueue, Request, v16);
    if ( SLOBYTE(DestQueue->m_ObjectFlags) < 0
      && (v53 = *(FxVerifierLock **)&DestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v53, &PreviousIrql, v50);
      v16 = PreviousIrql;
    }
    else
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&DestQueue->m_NPLock.m_Lock);
    }
    goto LABEL_59;
  }
  v21 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v38 = Request[-1].m_OwnerListEntry2.Blink;
    if ( v38 )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v38,
        (void *)0x75657551,
        1900,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        v21);
  }
  m_Irp = Request->m_Irp.m_Irp;
  v23 = &Request->120;
  Request->m_IrpQueue = p_m_Queue;
  if ( Request == (FxRequest *)-120LL )
  {
    m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
  }
  else
  {
    m_Irp->Tail.Overlay.DriverContext[3] = v23;
    Request->m_CsqContext.Irp = m_Irp;
    Request->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
    v23->m_CsqContext.Type = 1;
  }
  v24 = DestQueue->m_Queue.m_Queue.Blink;
  p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
  if ( (FxIrpQueue *)v24->Flink != p_m_Queue )
    goto LABEL_80;
  m_Irp->Tail.Overlay.ListEntry.Blink = v24;
  p_ListEntry->Flink = &p_m_Queue->m_Queue;
  v24->Flink = p_ListEntry;
  DestQueue->m_Queue.m_Queue.Blink = p_ListEntry;
  ++DestQueue->m_Queue.m_RequestCount;
  m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
  {
    v26 = 0;
    goto LABEL_56;
  }
  v40 = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry
    || (v41 = m_Irp->Tail.Overlay.ListEntry.Blink, v41->Flink != p_ListEntry) )
  {
LABEL_80:
    __fastfail(3u);
  }
  v41->Flink = v40;
  v40->Blink = v41;
  m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --DestQueue->m_Queue.m_RequestCount;
  if ( Request != (FxRequest *)-120LL )
    Request->m_CsqContext.Irp = 0LL;
  m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
  v42 = Request->__vftable;
  Request->m_IrpQueue = 0LL;
  v26 = -1073741536;
  v42->Release(Request, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_56:
  Request->m_IoQueue = DestQueue;
  if ( v26 < 0 )
    goto LABEL_77;
  if ( DestQueue->m_Queue.m_RequestCount == 1 || DestQueue->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(DestQueue);
LABEL_59:
  if ( m_IrpAllocation && DestQueue->m_Dispatching )
    FxNonPagedObject::Unlock(DestQueue, v16, (unsigned __int8)p_ListEntry);
  else
    FxIoQueue::DispatchEvents(DestQueue, v16, 0LL);
  p_m_DbgFlagIsInitialized = (FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v43);
    v46 = irql;
    p_m_Lock = &v6->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &v6->m_NPLock.m_Lock;
    v46 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
  }
  --v6->m_DriverIoCount;
  if ( v6->m_Dispatching )
  {
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v46, v47);
    else
      KeReleaseSpinLock(p_m_Lock, v46);
  }
  else
  {
    FxIoQueue::DispatchEvents(v6, v46, 0LL);
  }
  return v8;
}
