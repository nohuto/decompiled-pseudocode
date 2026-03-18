/*
 * XREFs of ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x14002FF74
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
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
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E5908 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::ForwardRequest(FxIoQueue *this, FxIoQueue *pDestQueue, FxRequest *pRequest)
{
  int inserted; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoQueue *v7; // rdi
  int result; // eax
  _FX_DRIVER_GLOBALS *v9; // r14
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxRequestCompletionState m_CompletionState; // r13d
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r15
  _FX_IO_QUEUE_STATE _a4; // r10d
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxIrpQueue *p_m_Queue; // r14
  unsigned __int8 m_IrpAllocation; // r13
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v23; // r8
  unsigned int v24; // edx
  _LIST_ENTRY *v25; // rcx
  _IRP *m_Irp; // rdx
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v29; // r9
  _LIST_ENTRY *v30; // rax
  FxRequest_vtbl *v31; // rax
  unsigned __int8 v32; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rbx
  int v34; // r12d
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v36; // dl
  unsigned __int8 v37; // r8
  const void *globals; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r8
  unsigned __int8 v43; // al
  unsigned __int8 v44; // r8
  _LIST_ENTRY *v45; // rdx
  FxVerifierLock *v46; // rcx
  FxVerifierLock *v47; // rcx
  FxVerifierLock *v48; // rcx
  FxVerifierLock *v49; // rcx
  unsigned int v50; // r8d
  _LIST_ENTRY *v51; // rcx
  unsigned __int8 v52; // r8
  const void *v53; // rcx
  FxVerifierLock *v54; // rcx
  FxVerifierLock *v55; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-40h]
  __int16 updated; // [rsp+50h] [rbp-10h]
  _FX_DRIVER_GLOBALS *v58; // [rsp+58h] [rbp-8h]
  unsigned __int8 PreviousIrql; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 v60; // [rsp+B8h] [rbp+58h] BYREF

  inserted = 0;
  m_Globals = this->m_Globals;
  v7 = this;
  if ( !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyForwardRequest(this, m_Globals, pDestQueue, pRequest), result >= 0) )
  {
    v9 = v7->m_Globals;
    v58 = v9;
    PreviousIrql = 0;
    v10 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      this = (FxIoQueue *)pRequest[-1].m_OwnerListEntry2.Blink;
      if ( this )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)this,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)v10);
    }
    if ( pRequest->m_Completed )
    {
      m_CompletionState = FxRequestCompletionStateNone;
      v53 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v53 = 0LL;
      WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v53);
      FxVerifierDbgBreakPoint(pRequest->m_Globals);
    }
    else
    {
      m_CompletionState = pRequest->m_CompletionState;
      pRequest->m_CompletionState = 0;
      if ( m_CompletionState )
        pRequest->Release(pRequest, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( v9->FxVerifierOn )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(this, v10, pRequest);
    else
      updated = 0;
    if ( (v7->m_ObjectFlags & 0x80) != 0
      && (v46 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v46, &PreviousIrql, (unsigned __int8)pRequest);
      v12 = PreviousIrql;
    }
    else
    {
      v12 = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      PreviousIrql = v12;
    }
    p_m_OwnerListEntry2 = &pRequest->m_OwnerListEntry2;
    Flink = pRequest->m_OwnerListEntry2.Flink;
    if ( Flink->Blink != &pRequest->m_OwnerListEntry2 )
      goto LABEL_84;
    Blink = pRequest->m_OwnerListEntry2.Blink;
    if ( Blink->Flink != p_m_OwnerListEntry2 )
      goto LABEL_84;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    pRequest->m_OwnerListEntry2.Blink = &pRequest->m_OwnerListEntry2;
    p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
    if ( (v7->m_ObjectFlags & 0x80) != 0
      && (v48 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v48, v12, v13);
    }
    else
    {
      KeReleaseSpinLock(&v7->m_NPLock.m_Lock, v12);
    }
    v60 = 0;
    if ( (pDestQueue->m_ObjectFlags & 0x80) != 0
      && (v47 = *(FxVerifierLock **)&pDestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v47, &v60, v17);
      v18 = v60;
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc(&pDestQueue->m_NPLock.m_Lock);
      v60 = v18;
    }
    _a4 = pDestQueue->m_QueueState;
    if ( (_a4 & 1) == 0 )
    {
      globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a5 = "power stopping (Drain) in progress,";
      if ( !pRequest->m_ObjectSize )
        globals = 0LL;
      if ( (_a4 & 0x10000) == 0 )
        _a5 = a5;
      _a3 = (const void *)((unsigned __int64)pDestQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pDestQueue->m_ObjectSize )
        _a3 = 0LL;
      v34 = -1071644156;
      WPP_IFR_SF_qLsqd(
        pDestQueue->m_Globals,
        3u,
        (unsigned int)globals,
        0x2Bu,
        RefType,
        _a3,
        _a4,
        _a5,
        globals,
        -1071644156);
      if ( SLOBYTE(pDestQueue->m_ObjectFlags) < 0
        && (v49 = *(FxVerifierLock **)&pDestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v49, v18, v41);
      }
      else
      {
        KeReleaseSpinLock(&pDestQueue->m_NPLock.m_Lock, v18);
      }
      FxRequest::SetCompletionState(pRequest, m_CompletionState);
      if ( v58->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(pRequest, updated);
      pRequest->Release(
        pRequest,
        (void *)1952543827,
        1461,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v54 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v54, &PreviousIrql, v42);
        v43 = PreviousIrql;
      }
      else
      {
        v43 = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      }
      v45 = v7->m_DriverOwned.Blink;
      if ( v45->Flink == &v7->m_DriverOwned )
      {
        p_m_OwnerListEntry2->Flink = &v7->m_DriverOwned;
        pRequest->m_OwnerListEntry2.Blink = v45;
        v45->Flink = p_m_OwnerListEntry2;
        v7->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        FxNonPagedObject::Unlock(v7, v43, v44);
        return v34;
      }
      goto LABEL_84;
    }
    v20 = pRequest->m_Globals;
    p_m_Queue = &pDestQueue->m_Queue;
    m_IrpAllocation = pRequest->m_IrpAllocation;
    if ( v20->FxVerifierOn )
    {
      inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v20, &pDestQueue->m_Queue);
      if ( inserted < 0 )
        goto LABEL_36;
      inserted = 0;
    }
    v24 = _InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      v25 = pRequest[-1].m_OwnerListEntry2.Blink;
      if ( v25 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v25,
          (void *)0x75657551,
          1900,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v24);
    }
    m_Irp = pRequest->m_Irp.m_Irp;
    v23 = &pRequest->120;
    pRequest->m_IrpQueue = p_m_Queue;
    if ( pRequest == (FxRequest *)-120LL )
    {
      m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
    }
    else
    {
      m_Irp->Tail.Overlay.DriverContext[3] = v23;
      pRequest->m_CsqContext.Irp = m_Irp;
      pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
      v23->m_CsqContext.Type = 1;
    }
    v27 = pDestQueue->m_Queue.m_Queue.Blink;
    p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
    if ( (FxIrpQueue *)v27->Flink != p_m_Queue )
      goto LABEL_84;
    m_Irp->Tail.Overlay.ListEntry.Blink = v27;
    p_ListEntry->Flink = &p_m_Queue->m_Queue;
    v27->Flink = p_ListEntry;
    pDestQueue->m_Queue.m_Queue.Blink = p_ListEntry;
    ++pDestQueue->m_Queue.m_RequestCount;
    m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
    if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
    {
      v29 = p_ListEntry->Flink;
      if ( p_ListEntry->Flink->Blink == p_ListEntry )
      {
        v30 = m_Irp->Tail.Overlay.ListEntry.Blink;
        if ( v30->Flink == p_ListEntry )
        {
          v30->Flink = v29;
          v29->Blink = v30;
          m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --pDestQueue->m_Queue.m_RequestCount;
          if ( pRequest != (FxRequest *)-120LL )
            pRequest->m_CsqContext.Irp = 0LL;
          m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
          v31 = pRequest->__vftable;
          pRequest->m_IrpQueue = 0LL;
          inserted = -1073741536;
          v31->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          goto LABEL_36;
        }
      }
LABEL_84:
      __fastfail(3u);
    }
LABEL_36:
    pRequest->m_IoQueue = pDestQueue;
    if ( inserted < 0 )
    {
      v50 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        v51 = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( v51 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v51,
            (void *)0x75657551,
            2459,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v50);
      }
      FxIoQueue::CancelForQueue(pDestQueue, pRequest, v18);
      if ( SLOBYTE(pDestQueue->m_ObjectFlags) < 0
        && (v55 = *(FxVerifierLock **)&pDestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v55, &v60, v52);
        v18 = v60;
      }
      else
      {
        v18 = KeAcquireSpinLockRaiseToDpc(&pDestQueue->m_NPLock.m_Lock);
      }
    }
    else if ( pDestQueue->m_Queue.m_RequestCount == 1 || pDestQueue->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      FxIoQueue::SetTransitionFromEmpty(pDestQueue);
    }
    if ( m_IrpAllocation && pDestQueue->m_Dispatching )
      FxNonPagedObject::Unlock(pDestQueue, v18, (unsigned __int8)v23);
    else
      FxIoQueue::DispatchEvents(pDestQueue, v18, 0LL);
    p_m_DbgFlagIsInitialized = (FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized;
    v34 = 0;
    if ( SLOBYTE(v7->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    {
      FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &PreviousIrql, v32);
      v36 = PreviousIrql;
      p_m_Lock = &v7->m_NPLock.m_Lock;
    }
    else
    {
      p_m_Lock = &v7->m_NPLock.m_Lock;
      v36 = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
    }
    --v7->m_DriverIoCount;
    if ( v7->m_Dispatching )
    {
      if ( SLOBYTE(v7->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
        FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v36, v37);
      else
        KeReleaseSpinLock(p_m_Lock, v36);
    }
    else
    {
      FxIoQueue::DispatchEvents(v7, v36, 0LL);
    }
    return v34;
  }
  return result;
}
