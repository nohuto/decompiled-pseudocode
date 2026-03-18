/*
 * XREFs of ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x140032D80 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14004F480 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DD248 (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxIoQueue::QueueDriverCreatedRequest(FxIoQueue *this, FxRequest *Request, unsigned __int8 ParentQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int inserted; // r14d
  __int16 v8; // bp
  int result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // r13
  char m_ObjectFlags; // al
  KIRQL v14; // si
  unsigned __int16 v15; // r9
  _FX_IO_QUEUE_STATE _a4; // r10d
  _FX_DRIVER_GLOBALS *v17; // rdx
  FxIrpQueue *p_m_Queue; // rbp
  unsigned __int8 m_IrpAllocation; // r15
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v20; // r8
  unsigned int v21; // edx
  _LIST_ENTRY *Blink; // rcx
  _IRP *v23; // rdx
  _LIST_ENTRY *v24; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v27; // rax
  FxRequest_vtbl *v28; // rax
  int v29; // r14d
  const void *v30; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v33; // r8
  _IRP *v34; // rax
  FxVerifierLock *v35; // rcx
  FxVerifierLock *v36; // rcx
  unsigned int v37; // r8d
  unsigned __int8 v38; // r8
  FxVerifierLock *v39; // rcx
  _LIST_ENTRY *v40; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-58h]
  __int16 oldFlags; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  inserted = 0;
  oldFlags = 0;
  v8 = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(this, m_Globals, Request, &oldFlags);
    if ( result < 0 )
      return result;
    v8 = oldFlags;
  }
  if ( ParentQueue )
  {
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    m_Irp = Request->m_Irp.m_Irp;
    --m_Irp->CurrentLocation;
    --m_Irp->Tail.Overlay.CurrentStackLocation;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  }
  m_DeviceBase = Request->m_DeviceBase;
  Request->m_DeviceBase = this->m_DeviceBase;
  m_ObjectFlags = this->m_ObjectFlags;
  LOBYTE(oldFlags) = 0;
  if ( m_ObjectFlags < 0 && (v35 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v35, (unsigned __int8 *)&oldFlags, ParentQueue);
    v14 = oldFlags;
  }
  else
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    LOBYTE(oldFlags) = v14;
  }
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) == 0 )
  {
    v30 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a5 = "power stopping (Drain) in progress,";
    if ( !Request->m_ObjectSize )
      v30 = 0LL;
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    v29 = -1071644156;
    WPP_IFR_SF_qLsqd(this->m_Globals, 3u, (unsigned int)v30, 0x2Bu, RefType, _a3, _a4, _a5, v30, -1071644156);
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v36 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v36, v14, v33);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v14);
    }
    Request->m_DeviceBase = m_DeviceBase;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, v8);
    if ( ParentQueue )
    {
      v34 = Request->m_Irp.m_Irp;
      ++v34->CurrentLocation;
      ++v34->Tail.Overlay.CurrentStackLocation;
      memset(
        &Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1],
        0,
        sizeof(Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1]));
    }
    return v29;
  }
  v17 = Request->m_Globals;
  p_m_Queue = &this->m_Queue;
  m_IrpAllocation = Request->m_IrpAllocation;
  if ( v17->FxVerifierOn )
  {
    inserted = FxRequest::Vf_VerifyInsertIrpQueue(Request, v17, &this->m_Queue);
    if ( inserted < 0 )
      goto LABEL_25;
    inserted = 0;
  }
  v21 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    Blink = Request[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Blink,
        (void *)0x75657551,
        1900,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        v21);
  }
  v23 = Request->m_Irp.m_Irp;
  v20 = &Request->120;
  Request->m_IrpQueue = p_m_Queue;
  if ( Request == (FxRequest *)-120LL )
  {
    v23->Tail.Overlay.DriverContext[3] = p_m_Queue;
  }
  else
  {
    v23->Tail.Overlay.DriverContext[3] = v20;
    Request->m_CsqContext.Irp = v23;
    Request->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
    v20->m_CsqContext.Type = 1;
  }
  v24 = this->m_Queue.m_Queue.Blink;
  p_ListEntry = &v23->Tail.Overlay.ListEntry;
  if ( (FxIrpQueue *)v24->Flink != p_m_Queue )
    goto LABEL_57;
  v23->Tail.Overlay.ListEntry.Blink = v24;
  p_ListEntry->Flink = &p_m_Queue->m_Queue;
  v24->Flink = p_ListEntry;
  this->m_Queue.m_Queue.Blink = p_ListEntry;
  ++this->m_Queue.m_RequestCount;
  v23->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&v23->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( v23->Cancel && _InterlockedExchange64((volatile __int64 *)&v23->CancelRoutine, 0LL) )
  {
    Flink = p_ListEntry->Flink;
    if ( p_ListEntry->Flink->Blink == p_ListEntry )
    {
      v27 = v23->Tail.Overlay.ListEntry.Blink;
      if ( v27->Flink == p_ListEntry )
      {
        v27->Flink = Flink;
        Flink->Blink = v27;
        v23->Tail.Overlay.ListEntry.Blink = &v23->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        --this->m_Queue.m_RequestCount;
        if ( Request != (FxRequest *)-120LL )
          Request->m_CsqContext.Irp = 0LL;
        v23->Tail.Overlay.DriverContext[3] = 0LL;
        v28 = Request->__vftable;
        Request->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v28->Release(Request, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        goto LABEL_25;
      }
    }
LABEL_57:
    __fastfail(3u);
  }
LABEL_25:
  Request->m_IoQueue = this;
  if ( inserted < 0 )
  {
    v37 = _InterlockedIncrement(&Request->m_Refcnt);
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      v40 = Request[-1].m_OwnerListEntry2.Blink;
      if ( v40 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v40,
          (void *)0x75657551,
          2459,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v37);
    }
    FxIoQueue::CancelForQueue(this, Request, v14);
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v39 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v39, (unsigned __int8 *)&oldFlags, v38);
      v14 = oldFlags;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  else if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
  {
    FxIoQueue::SetTransitionFromEmpty(this);
  }
  if ( m_IrpAllocation && this->m_Dispatching )
    FxNonPagedObject::Unlock(this, v14, (unsigned __int8)v20);
  else
    FxIoQueue::DispatchEvents(this, v14, 0LL, v15);
  return 0;
}
