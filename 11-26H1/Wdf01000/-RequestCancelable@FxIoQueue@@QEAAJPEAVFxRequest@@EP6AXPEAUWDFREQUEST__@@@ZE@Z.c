/*
 * XREFs of ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14000A2A0
 * Callers:
 *     imp_WdfRequestMarkCancelable @ 0x14000A110 (imp_WdfRequestMarkCancelable.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14004F264 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DD710 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1400E4DFC (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

int __fastcall FxIoQueue::RequestCancelable(
        FxIoQueue *this,
        FxRequest *pRequest,
        unsigned __int8 Cancelable,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *),
        unsigned __int8 FailIfIrpIsCancelled)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned __int8 v11; // r12
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxIrpQueue *p_m_DriverCancelable; // r15
  int inserted; // r14d
  unsigned int RefCount; // edx
  _IRP *m_Irp; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v17; // rcx
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  _IRP *Irp; // r8
  unsigned __int8 v21; // r12
  _FX_DRIVER_GLOBALS *v22; // r13
  _FX_DRIVER_GLOBALS *v23; // rdx
  int v24; // esi
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *v26; // rdx
  _LIST_ENTRY *v27; // rcx
  FxRequest_vtbl *v28; // rax
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v30; // rax
  FxRequest_vtbl *v31; // rax
  FxVerifierLock *v32; // rcx
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *v34; // rcx
  FxVerifierLock *v35; // rcx
  FxVerifierLock *v36; // rcx
  const void *v37; // rdx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyRequestCancelable(this, m_Globals, pRequest, Cancelable), result >= 0) )
  {
    if ( Cancelable )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(pRequest, 16);
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v32 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v32, &irql, Cancelable);
        v11 = irql;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      }
      pRequest->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( this->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
        goto LABEL_54;
      }
      v12 = pRequest->m_Globals;
      p_m_DriverCancelable = &this->m_DriverCancelable;
      if ( v12->FxVerifierOn )
      {
        inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v12, &this->m_DriverCancelable);
        if ( inserted < 0 )
        {
LABEL_54:
          if ( FailIfIrpIsCancelled )
          {
            pRequest->m_CancelRoutine.m_Cancel = 0LL;
            FxNonPagedObject::Unlock(this, v11);
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::ClearVerifierFlags(pRequest, 16);
          }
          else
          {
            inserted = 0;
            pRequest->m_Canceled = 1;
            FxNonPagedObject::Unlock(this, v11);
            FxObject::AddRef(
              pRequest,
              (void *)0x75657551,
              2210,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForDriver(this, pRequest);
          }
          return inserted;
        }
      }
      RefCount = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            RefCount);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v17 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_DriverCancelable;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_DriverCancelable;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v17;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_DriverCancelable;
        v17->m_CsqContext.Type = 1;
      }
      v18 = this->m_DriverCancelable.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v18->Flink == p_m_DriverCancelable )
      {
        m_Irp->Tail.Overlay.ListEntry.Blink = v18;
        p_ListEntry->Flink = &p_m_DriverCancelable->m_Queue;
        v18->Flink = p_ListEntry;
        this->m_DriverCancelable.m_Queue.Blink = p_ListEntry;
        ++this->m_DriverCancelable.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          inserted = 0;
          goto LABEL_37;
        }
        Flink = p_ListEntry->Flink;
        if ( p_ListEntry->Flink->Blink == p_ListEntry )
        {
          v30 = m_Irp->Tail.Overlay.ListEntry.Blink;
          if ( v30->Flink == p_ListEntry )
          {
            v30->Flink = Flink;
            Flink->Blink = v30;
            m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
            p_ListEntry->Flink = p_ListEntry;
            --this->m_DriverCancelable.m_RequestCount;
            if ( pRequest != (FxRequest *)-120LL )
              pRequest->m_CsqContext.Irp = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v31 = pRequest->__vftable;
            pRequest->m_IrpQueue = 0LL;
            inserted = -1073741536;
            v31->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_37:
            if ( inserted >= 0 )
            {
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v34 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v34, v11, (unsigned __int8)p_ListEntry);
              }
              else
              {
                KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
              }
              return inserted;
            }
            goto LABEL_54;
          }
        }
      }
LABEL_53:
      __fastfail(3u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v35 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v35, &irql, Cancelable);
      v21 = irql;
    }
    else
    {
      v21 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    v22 = pRequest->m_Globals;
    if ( !pRequest->m_CsqContext.Irp )
      goto LABEL_42;
    v23 = this->m_DriverCancelable.m_LockObject->m_Globals;
    if ( v23->FxVerifierOn )
      FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(&this->m_DriverCancelable, v23, &pRequest->m_CsqContext);
    Irp = pRequest->m_CsqContext.Irp;
    v24 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    {
      v25 = &Irp->Tail.Overlay.ListEntry;
      v26 = Irp->Tail.Overlay.ListEntry.Flink;
      if ( (void **)v26->Blink != &Irp->Tail.CompletionKey + 6 )
        goto LABEL_53;
      v27 = Irp->Tail.Overlay.ListEntry.Blink;
      if ( v27->Flink != v25 )
        goto LABEL_53;
      v27->Flink = v26;
      v26->Blink = v27;
      Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
      v25->Flink = v25;
      --this->m_DriverCancelable.m_RequestCount;
      pRequest->m_CsqContext.Irp = 0LL;
      Irp->Tail.Overlay.DriverContext[3] = 0LL;
      if ( v22->FxVerifierOn && !pRequest->m_IrpQueue )
      {
        v37 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !pRequest->m_ObjectSize )
          v37 = 0LL;
        WPP_IFR_SF_q(v22, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, v37);
        FxVerifierDbgBreakPoint(v22);
      }
      v28 = pRequest->__vftable;
      pRequest->m_IrpQueue = 0LL;
      v28->Release(pRequest, (void *)1969583441, 2030, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      pRequest->m_CancelRoutine.m_Cancel = 0LL;
    }
    else
    {
LABEL_42:
      v24 = -1073741536;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v36 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v36, v21, (unsigned __int8)Irp);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v21);
    }
    if ( m_Globals->FxVerifierOn && v24 >= 0 )
      FxRequestBase::ClearVerifierFlags(pRequest, 16);
    return v24;
  }
  return result;
}
