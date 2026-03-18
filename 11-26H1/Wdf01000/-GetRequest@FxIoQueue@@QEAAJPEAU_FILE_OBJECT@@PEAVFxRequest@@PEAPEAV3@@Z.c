/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140011D60
 * Callers:
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x140011C00 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069750 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x140070810 (imp_WdfIoQueueRetrieveFoundRequest.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x14004F374 (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1400506E0 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DD978 (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E5024 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int8 v11; // bp
  FxIrpQueue *v12; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // r15
  const void *v14; // r13
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v15; // rdi
  FxIrpQueue *p_m_Queue; // r9
  FxIrpQueue *Flink; // rdx
  int *i; // rax
  _LIST_ENTRY *v19; // rdx
  __int64 v20; // rcx
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // rax
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v23; // rdi
  _LIST_ENTRY *v24; // rax
  unsigned __int8 v25; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *Blink; // rdx
  _FX_DRIVER_GLOBALS *v29; // rdx
  FxTagTracker *v30; // rcx
  char v31; // al
  _LIST_ENTRY *v32; // rax
  const void *_a1; // rcx
  unsigned __int8 v34; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v36; // rbx
  int v37; // edi
  const void *_a2; // rcx
  const void *v39; // rax
  unsigned __int8 v40; // r8
  KIRQL v41; // al
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  FxVerifierLock *v44; // rcx
  const void *v45; // rdx
  unsigned __int8 v46; // r8
  char Type; // al
  unsigned __int8 v48; // r15
  unsigned __int8 v49; // r8
  FxVerifierLock *Irp; // rcx
  FxVerifierLock *v51; // rcx
  const void *v52; // rcx
  const void *v53; // rax
  unsigned __int8 v54; // r8
  unsigned __int8 PreviousIrql[8]; // [rsp+40h] [rbp-48h] BYREF
  $87BF65E0DFCCE0C1CCAAC6538D1C71CB *v56; // [rsp+48h] [rbp-40h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  FxRequest **v58; // [rsp+A8h] [rbp+20h]

  v58 = pOutRequest;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  m_Type = this->m_Type;
  if ( m_Type != WdfIoQueueDispatchManual && m_Type != WdfIoQueueDispatchSequential )
  {
    m_ObjectSize = this->m_ObjectSize;
    v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v36 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, v36, -1073741436);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v42 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
        p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
        v42) )
  {
    FxVerifierLock::Lock(v42, &irql, (unsigned __int8)TagRequest);
    v11 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v11;
    p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  }
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v45 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxIoQueue_cpp_Traceguids, v45, -1071644157);
    FxNonPagedObject::Unlock(this, v11, v46);
    return -1071644157;
  }
  else
  {
    if ( (this->m_QueueState & 2) == 0 )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1071644157);
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        if ( *p_m_DbgFlagIsInitialized )
        {
          FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v11, v34);
          return -1071644157;
        }
        p_m_Lock = &this->m_NPLock.m_Lock;
      }
      KeReleaseSpinLock(p_m_Lock, v11);
      return -1071644157;
    }
    v14 = 0LL;
    v15 = &TagRequest->120;
    if ( !TagRequest )
      v15 = 0LL;
    v56 = v15;
    while ( 1 )
    {
      p_m_Queue = &this->m_Queue;
      if ( v15 )
        break;
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      for ( i = 0LL; Flink != p_m_Queue; i = 0LL )
      {
        i = &Flink[-5].m_RequestCount;
        if ( !FileObject )
          break;
        if ( *(_FILE_OBJECT **)(*((_QWORD *)i + 23) + 48LL) == FileObject )
          break;
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      while ( 1 )
      {
        if ( !i )
        {
          v37 = -2147483622;
          goto LABEL_51;
        }
        v19 = (_LIST_ENTRY *)(i + 42);
        v20 = _InterlockedExchange64((volatile __int64 *)i + 13, 0LL);
        v12 = (FxIrpQueue *)*((_QWORD *)i + 21);
        if ( v20 )
          break;
        for ( i = 0LL; v12 != p_m_Queue; i = 0LL )
        {
          i = &v12[-5].m_RequestCount;
          if ( !FileObject )
            break;
          if ( *(_FILE_OBJECT **)(*((_QWORD *)i + 23) + 48LL) == FileObject )
            break;
          v12 = (FxIrpQueue *)v12->m_Queue.Flink;
        }
      }
      if ( v12->m_Queue.Blink != v19 )
        goto LABEL_83;
      v21 = (_LIST_ENTRY *)*((_QWORD *)i + 22);
      if ( v21->Flink != v19 )
        goto LABEL_83;
      v21->Flink = &v12->m_Queue;
      v12->m_Queue.Blink = v21;
      *((_QWORD *)i + 22) = i + 42;
      v19->Flink = v19;
      --this->m_Queue.m_RequestCount;
      v15 = ($87BF65E0DFCCE0C1CCAAC6538D1C71CB *)*((_QWORD *)i + 18);
      if ( v15->m_CsqContext.Type == 1 )
        v15->m_CsqContext.Irp = 0LL;
      *((_QWORD *)i + 18) = 0LL;
LABEL_21:
      v22 = v15[-5].m_ListEntry.Flink;
      v23 = v15 - 5;
      v24 = v22[1].Flink;
      v23[9].m_CsqContext.Irp = 0LL;
      ((void (__fastcall *)($87BF65E0DFCCE0C1CCAAC6538D1C71CB *, __int64, __int64, const char *))v24)(
        v23,
        1969583441LL,
        2102LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      if ( this->m_AllowZeroLengthRequests )
        goto LABEL_25;
      if ( BYTE1(v23->m_CsqContext.Csq[5].CsqInsertIrp) )
      {
        Type = v23[1].m_CsqContext.Type;
        PreviousIrql[0] = 0;
        if ( Type < 0 && (Irp = (FxVerifierLock *)v23[-2].m_CsqContext.Irp) != 0LL )
        {
          FxVerifierLock::Lock(Irp, PreviousIrql, v25);
          v48 = PreviousIrql[0];
        }
        else
        {
          v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v23[4].m_CsqContext.Csq);
        }
        FxRequest::VerifyRequestIsNotCompleted((FxRequest *)v23, (_FX_DRIVER_GLOBALS *)v23->m_CsqContext.Csq);
        FxNonPagedObject::Unlock((FxNonPagedObject *)v23, v48, v49);
      }
      CurrentStackLocation = v23[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation->MajorFunction != 3 )
      {
        if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
        {
          FxNonPagedObject::Unlock(this, v11, v25);
          if ( m_Globals->FxVerboseOn )
          {
            v52 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v52 = 0LL;
            if ( WORD1(v23->m_ListEntry.Blink) )
              v53 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v53 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v53, v52);
          }
          FxRequest::CompleteWithInformation((FxRequest *)v23, 0, 0LL);
          ((void (__fastcall *)($87BF65E0DFCCE0C1CCAAC6538D1C71CB *, __int64, __int64, const char *))v23->m_ListEntry.Flink[1].Flink)(
            v23,
            1886220099LL,
            1139LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Lock(this, &irql, v54);
          v11 = irql;
          v15 = v56;
          continue;
        }
LABEL_25:
        ++this->m_DriverIoCount;
        v27 = &v23[12].m_ListEntry + 1;
        Blink = this->m_DriverOwned.Blink;
        if ( Blink->Flink == &this->m_DriverOwned )
        {
          v27->Flink = &this->m_DriverOwned;
          v23[13].m_ListEntry.Flink = Blink;
          Blink->Flink = v27;
          this->m_DriverOwned.Blink = v27;
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v43 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v43, v11, v25);
          }
          else
          {
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
          }
          if ( *((_BYTE *)&v23[8].m_ListEntry + 22) )
          {
            if ( WORD1(v23->m_ListEntry.Blink) )
              v14 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
            WPP_IFR_SF_q(
              (_FX_DRIVER_GLOBALS *)v23->m_CsqContext.Csq,
              2u,
              0x10u,
              0x27u,
              WPP_FxRequest_cpp_Traceguids,
              v14);
            FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v23->m_CsqContext.Csq);
          }
          else
          {
            v31 = *((_BYTE *)&v23[9].m_ListEntry + 21);
            *((_BYTE *)&v23[9].m_ListEntry + 21) = 1;
            if ( !v31 )
            {
              v29 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v23->m_ListEntry.Blink + 1);
              if ( SLOBYTE(v23[1].m_CsqContext.Type) < 0 )
              {
                v30 = (FxTagTracker *)v23[-2].m_ListEntry.Flink;
                if ( v30 )
                  FxTagTracker::UpdateTagHistory(
                    v30,
                    (void *)0x74617453,
                    1820,
                    "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                    TagAddRef,
                    (unsigned int)v29);
              }
            }
          }
          if ( m_Globals->FxVerifierOn )
            FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v30, v29, (FxRequest *)v23);
          v32 = v23->m_ListEntry.Flink;
          *((_BYTE *)&v23[14].m_ListEntry + 16) = 1;
          ((void (__fastcall *)($87BF65E0DFCCE0C1CCAAC6538D1C71CB *, __int64, __int64, const char *))v32[1].Flink)(
            v23,
            1952543827LL,
            1193LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          *v58 = (FxRequest *)v23;
          return 0;
        }
LABEL_83:
        __fastfail(3u);
      }
      if ( CurrentStackLocation->Parameters.Read.Length )
        goto LABEL_25;
      FxNonPagedObject::Unlock(this, v11, v25);
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        if ( WORD1(v23->m_ListEntry.Blink) )
          v39 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v39 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v39, _a2);
      }
      FxRequest::CompleteWithInformation((FxRequest *)v23, 0, 0LL);
      ((void (__fastcall *)($87BF65E0DFCCE0C1CCAAC6538D1C71CB *, __int64, __int64, const char *))v23->m_ListEntry.Flink[1].Flink)(
        v23,
        1886220099LL,
        1123LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v51 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v51, &irql, v40);
        v11 = irql;
        v15 = v56;
      }
      else
      {
        v41 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        v15 = v56;
        v11 = v41;
        irql = v41;
      }
    }
    if ( FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v15->m_CsqContext) )
      goto LABEL_21;
    v37 = -1073741275;
LABEL_51:
    if ( v37 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v44 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v44, v11, (unsigned __int8)v12);
      return v37;
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
      return v37;
    }
  }
}
