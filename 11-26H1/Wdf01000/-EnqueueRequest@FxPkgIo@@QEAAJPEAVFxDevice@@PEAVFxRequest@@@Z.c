/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x14002F7F0
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x14002F590 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140037FB0 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140038164 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140050150 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?HasContext@FxRequestBase@@QEAAEXZ @ 0x140092D8C (-HasContext@FxRequestBase@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DD378 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1400E4E9C (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a3; // r14
  __int16 v5; // r15
  int result; // eax
  FxIoQueue *m_InternalContext; // rbx
  int MajorFunction; // edx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned __int8 m_CompletionState; // al
  char m_ObjectFlags; // al
  unsigned __int8 v18; // r13
  unsigned int _a4; // edx
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxIrpQueue *p_m_Queue; // rbp
  unsigned int v22; // edx
  _IRP *m_Irp; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v24; // rcx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  int v27; // ebp
  const void *globals; // rax
  const char *_a5; // rcx
  int v30; // ebp
  unsigned __int8 v31; // r8
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v33; // rax
  FxRequest_vtbl *v34; // rax
  FxRequest *v35; // rcx
  _FX_DRIVER_GLOBALS *v36; // rdx
  FxPkgIo *v37; // rcx
  FxVerifierLock *v38; // rcx
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *v40; // rcx
  _LIST_ENTRY *v41; // rcx
  FxVerifierLock *v42; // rcx
  unsigned __int16 v43; // ax
  const void *v44; // rcx
  const void *v45; // r13
  unsigned __int16 v46; // ax
  const void *v47; // r13
  const void *v48; // rcx
  unsigned int v49; // r12d
  unsigned __int8 v50; // r8
  const void *v51; // rcx
  FxVerifierLock *v52; // rcx
  _LIST_ENTRY *v53; // rcx
  const void *v54; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-68h]
  __int16 origVerifierFlags; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 m_IrpAllocation; // [rsp+A0h] [rbp+18h]

  m_Globals = this->m_Globals;
  _a3 = 0LL;
  v5 = 0;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v54 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v54 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v54);
  }
  if ( m_Globals->FxVerifierOn )
  {
    result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, pRequest, &origVerifierFlags);
    if ( result < 0 )
      return result;
    v5 = origVerifierFlags;
  }
  m_InternalContext = (FxIoQueue *)pRequest->m_InternalContext;
  pRequest->m_InternalContext = 0LL;
  if ( !m_InternalContext )
  {
    m_InternalContext = this->m_DispatchTable[pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction];
    if ( !m_InternalContext )
    {
      if ( !this->m_Filter )
      {
        v30 = -1073741808;
        v43 = *(_WORD *)(Device + 10);
        v44 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !pRequest->m_ObjectSize )
          v44 = 0LL;
        v45 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v43 )
          v45 = 0LL;
        WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v45, v44, 0xC0000010);
LABEL_91:
        FxVerifierDbgBreakPoint(m_Globals);
$Error:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v37, v36, pRequest, v5);
        return v30;
      }
$Forward_0:
      if ( !FxRequestBase::HasContext(pRequest) )
      {
        FxRequest::PreProcessSendAndForget(v35);
        IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), pRequest->m_Irp.m_Irp);
        FxRequest::PostProcessSendAndForget(pRequest);
        return 0;
      }
      v30 = -1073741808;
      v46 = *(_WORD *)(Device + 10);
      v47 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v46 )
        v47 = 0LL;
      v48 = (const void *)((unsigned __int64)v35 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v48 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v48, v47, 0xC0000010);
      goto LABEL_91;
    }
  }
  if ( this->m_Filter
    && m_InternalContext == this->m_DefaultQueue
    && m_InternalContext->m_Type != WdfIoQueueDispatchManual
    && !m_InternalContext->m_IoDefault.Method )
  {
    MajorFunction = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    if ( MajorFunction == 15 )
    {
      if ( !m_InternalContext->m_IoInternalDeviceControl.Method )
        goto $Forward_0;
    }
    else
    {
      if ( !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
        goto $Forward_0;
      v12 = MajorFunction - 3;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 10 || !m_InternalContext->m_IoDeviceControl.Method )
            goto $Forward_0;
        }
        else if ( !m_InternalContext->m_IoWrite.Method )
        {
          goto $Forward_0;
        }
      }
      else if ( !m_InternalContext->m_IoRead.Method )
      {
        goto $Forward_0;
      }
    }
  }
  v14 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
  if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
  {
    Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v14);
  }
  v15 = _InterlockedIncrement(&pRequest->m_Refcnt);
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
  {
    v40 = pRequest[-1].m_OwnerListEntry2.Blink;
    if ( v40 )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v40,
        (void *)0x74617453,
        690,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
        TagAddRef,
        v15);
  }
  if ( pRequest->m_Completed )
  {
    v51 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v51 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v51);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 0;
    if ( m_CompletionState )
      pRequest->Release(pRequest, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  m_ObjectFlags = m_InternalContext->m_ObjectFlags;
  LOBYTE(origVerifierFlags) = 0;
  if ( m_ObjectFlags < 0 && (v38 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v38, (unsigned __int8 *)&origVerifierFlags, (unsigned __int8)pRequest);
    v18 = origVerifierFlags;
  }
  else
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
    LOBYTE(origVerifierFlags) = v18;
  }
  _a4 = m_InternalContext->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    v20 = pRequest->m_Globals;
    p_m_Queue = &m_InternalContext->m_Queue;
    m_IrpAllocation = pRequest->m_IrpAllocation;
    if ( v20->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v20, &m_InternalContext->m_Queue) < 0 )
    {
      pRequest->m_IoQueue = m_InternalContext;
      goto LABEL_93;
    }
    v22 = _InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      v41 = pRequest[-1].m_OwnerListEntry2.Blink;
      if ( v41 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v41,
          (void *)0x75657551,
          1900,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v22);
    }
    m_Irp = pRequest->m_Irp.m_Irp;
    v24 = &pRequest->120;
    pRequest->m_IrpQueue = p_m_Queue;
    if ( pRequest == (FxRequest *)-120LL )
    {
      m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
    }
    else
    {
      m_Irp->Tail.Overlay.DriverContext[3] = v24;
      pRequest->m_CsqContext.Irp = m_Irp;
      pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
      v24->m_CsqContext.Type = 1;
    }
    v25 = m_InternalContext->m_Queue.m_Queue.Blink;
    p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
    if ( (FxIrpQueue *)v25->Flink == p_m_Queue )
    {
      m_Irp->Tail.Overlay.ListEntry.Blink = v25;
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      v25->Flink = p_ListEntry;
      m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
      ++m_InternalContext->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        v27 = 0;
        goto LABEL_48;
      }
      Flink = p_ListEntry->Flink;
      if ( p_ListEntry->Flink->Blink == p_ListEntry )
      {
        v33 = m_Irp->Tail.Overlay.ListEntry.Blink;
        if ( v33->Flink == p_ListEntry )
        {
          v33->Flink = Flink;
          Flink->Blink = v33;
          m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --m_InternalContext->m_Queue.m_RequestCount;
          if ( pRequest != (FxRequest *)-120LL )
            pRequest->m_CsqContext.Irp = 0LL;
          m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
          v34 = pRequest->__vftable;
          pRequest->m_IrpQueue = 0LL;
          v27 = -1073741536;
          v34->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_48:
          pRequest->m_IoQueue = m_InternalContext;
          if ( v27 >= 0 )
          {
            if ( m_InternalContext->m_Queue.m_RequestCount == 1
              || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
            {
              FxIoQueue::SetTransitionFromEmpty(m_InternalContext);
            }
LABEL_51:
            if ( m_IrpAllocation && m_InternalContext->m_Dispatching )
              FxNonPagedObject::Unlock(m_InternalContext, v18, (unsigned __int8)p_ListEntry);
            else
              FxIoQueue::DispatchEvents(m_InternalContext, v18, 0LL);
            v30 = 0;
            goto LABEL_54;
          }
LABEL_93:
          v49 = _InterlockedIncrement(&pRequest->m_Refcnt);
          if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
          {
            v53 = pRequest[-1].m_OwnerListEntry2.Blink;
            if ( v53 )
              FxTagTracker::UpdateTagHistory(
                (FxTagTracker *)v53,
                (void *)0x75657551,
                2459,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                TagAddRef,
                v49);
          }
          FxIoQueue::CancelForQueue(m_InternalContext, pRequest, v18);
          if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
            && (v52 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v52, (unsigned __int8 *)&origVerifierFlags, v50);
            v18 = origVerifierFlags;
          }
          else
          {
            v18 = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
          }
          goto LABEL_51;
        }
      }
    }
    __fastfail(3u);
  }
  globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = "power stopping (Drain) in progress,";
  if ( !pRequest->m_ObjectSize )
    globals = 0LL;
  if ( (_a4 & 0x10000) == 0 )
    _a5 = a5;
  if ( m_InternalContext->m_ObjectSize )
    _a3 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
  v30 = -1071644156;
  WPP_IFR_SF_qLsqd(
    m_InternalContext->m_Globals,
    3u,
    (unsigned int)a5,
    0x2Bu,
    RefType,
    _a3,
    _a4,
    _a5,
    globals,
    -1071644156);
  if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
    && (v42 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v42, v18, v31);
  }
  else
  {
    KeReleaseSpinLock(&m_InternalContext->m_NPLock.m_Lock, v18);
  }
LABEL_54:
  m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
  if ( v30 < 0 )
  {
    FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateIoPkg);
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      722,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    goto $Error;
  }
  return v30;
}
