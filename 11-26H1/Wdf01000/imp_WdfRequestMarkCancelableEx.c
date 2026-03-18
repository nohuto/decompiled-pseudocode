/*
 * XREFs of imp_WdfRequestMarkCancelableEx @ 0x1400093E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DD710 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestMarkCancelableEx(
        FxIoQueue *DriverGlobals,
        unsigned __int64 Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  FxRequest *flags; // rbx
  __int64 v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxIoQueue *m_IoQueue; // rdi
  _FX_DRIVER_GLOBALS *v9; // rsi
  int inserted; // r14d
  unsigned __int8 v11; // r15
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxIrpQueue *p_m_DriverCancelable; // rbp
  unsigned int v14; // edx
  _IRP *m_Irp; // rdx
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v16; // rcx
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  FxRequest_vtbl *v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  FxVerifierLock *v22; // rcx
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v25; // rax
  FxRequest_vtbl *v26; // rax
  FxVerifierLock *v28; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-68h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-38h] BYREF
  __int16 v31; // [rsp+58h] [rbp-30h]
  __int16 v32; // [rsp+5Ah] [rbp-2Eh]
  int v33; // [rsp+5Ch] [rbp-2Ch]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+A8h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-1].m_IoInternalDeviceControl.Method,
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    v32 = v6;
    pRequest = 0LL;
    v33 = 0;
    v19 = flags->__vftable;
    p_pRequest = &pRequest;
    v31 = 4104;
    if ( v19->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v20,
        (unsigned int)EvtRequestCancel,
        v21,
        RefType,
        (const void *)Request,
        0x1008u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( !flags->m_Completed )
  {
    m_IoQueue = flags->m_IoQueue;
    if ( m_IoQueue )
    {
      v9 = m_IoQueue->m_Globals;
      PreviousIrql = 0;
      if ( v9->FxVerifierOn )
      {
        inserted = FxIoQueue::Vf_VerifyRequestCancelable(DriverGlobals, v9, flags, 1u);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        if ( v9->FxVerifierOn )
          FxRequestBase::SetVerifierFlags(flags, 16);
      }
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v22 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v22, &PreviousIrql, (unsigned __int8)EvtRequestCancel);
        v11 = PreviousIrql;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      flags->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( m_IoQueue->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
        goto LABEL_48;
      }
      v12 = flags->m_Globals;
      p_m_DriverCancelable = &m_IoQueue->m_DriverCancelable;
      if ( v12->FxVerifierOn )
      {
        inserted = FxRequest::Vf_VerifyInsertIrpQueue(flags, v12, &m_IoQueue->m_DriverCancelable);
        if ( inserted < 0 )
        {
LABEL_48:
          flags->m_CancelRoutine.m_Cancel = 0LL;
          FxNonPagedObject::Unlock(m_IoQueue, v11);
          if ( v9->FxVerifierOn )
            FxRequestBase::ClearVerifierFlags(flags, 16);
          return (unsigned int)inserted;
        }
      }
      v14 = _InterlockedIncrement(&flags->m_Refcnt);
      if ( SLOBYTE(flags->m_ObjectFlags) < 0 )
      {
        Blink = (FxTagTracker *)flags[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v14);
      }
      m_Irp = flags->m_Irp.m_Irp;
      v16 = &flags->120;
      flags->m_IrpQueue = p_m_DriverCancelable;
      if ( flags == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_DriverCancelable;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v16;
        flags->m_CsqContext.Irp = m_Irp;
        flags->m_CsqContext.Csq = (_IO_CSQ *)p_m_DriverCancelable;
        v16->m_CsqContext.Type = 1;
      }
      v17 = m_IoQueue->m_DriverCancelable.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v17->Flink == p_m_DriverCancelable )
      {
        m_Irp->Tail.Overlay.ListEntry.Blink = v17;
        p_ListEntry->Flink = &p_m_DriverCancelable->m_Queue;
        v17->Flink = p_ListEntry;
        m_IoQueue->m_DriverCancelable.m_Queue.Blink = p_ListEntry;
        ++m_IoQueue->m_DriverCancelable.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          inserted = 0;
          goto LABEL_40;
        }
        Flink = p_ListEntry->Flink;
        if ( p_ListEntry->Flink->Blink == p_ListEntry )
        {
          v25 = m_Irp->Tail.Overlay.ListEntry.Blink;
          if ( v25->Flink == p_ListEntry )
          {
            v25->Flink = Flink;
            Flink->Blink = v25;
            m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
            p_ListEntry->Flink = p_ListEntry;
            --m_IoQueue->m_DriverCancelable.m_RequestCount;
            if ( flags != (FxRequest *)-120LL )
              flags->m_CsqContext.Irp = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v26 = flags->__vftable;
            flags->m_IrpQueue = 0LL;
            inserted = -1073741536;
            v26->Release(flags, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_40:
            if ( inserted >= 0 )
            {
              if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
                && (v28 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v28, v11, (unsigned __int8)p_ListEntry);
              }
              else
              {
                KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, v11);
              }
              return (unsigned int)inserted;
            }
            goto LABEL_48;
          }
        }
      }
      __fastfail(3u);
    }
  }
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x51u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225488LL;
}
