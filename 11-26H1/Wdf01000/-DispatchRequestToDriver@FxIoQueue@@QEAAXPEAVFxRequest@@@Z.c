/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1400353F0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x140035E50 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qiid @ 0x14005646C (WPP_IFR_SF_qiid.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetVerifierFlags@FxRequestBase@@QEAAFXZ @ 0x14007EAD0 (-GetVerifierFlags@FxRequestBase@@QEAAFXZ.c)
 *     WPP_IFR_SF_Lqd @ 0x140082E0C (WPP_IFR_SF_Lqd.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 m_CompletionState; // al
  unsigned int v7; // r8d
  const void *v8; // rcx
  WDFREQUEST__ *v9; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MajorFunction; // esi
  FxCallbackLock **p_m_CallbackLock; // rsi
  _IO_STACK_LOCATION *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // rdi
  unsigned int LowPart; // r15d
  __int64 Options; // r12
  __int64 v18; // r13
  FxCallbackLock *v19; // rcx
  FxIoQueueIoDefault *p_m_IoDefault; // rsi
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rdi
  FxCallbackLock *v23; // rcx
  FxCallbackLock *v24; // rcx
  _IO_STACK_LOCATION *v25; // rcx
  unsigned __int16 v26; // ax
  char v27; // al
  FxVerifierLock **p_m_ForwardProgressList; // rsi
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v30; // al
  unsigned __int8 v31; // r8
  unsigned int RefCount; // edx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int64 Length; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  _FX_DRIVER_GLOBALS *v36; // r10
  char m_Globals_high; // al
  __int64 v38; // r8
  FxDeviceBase *v39; // rdi
  _FX_DRIVER_GLOBALS *v40; // rcx
  char v41; // al
  unsigned __int16 m_ObjectSize; // ax
  FxIoQueueIoRead *p_m_IoRead; // r15
  unsigned __int64 v44; // rdi
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int64 v46; // r12
  unsigned __int16 v47; // ax
  FxIoQueueIoWrite *p_m_IoWrite; // rsi
  unsigned __int64 v49; // rdi
  FxCallbackLock *v50; // rcx
  unsigned __int16 v51; // ax
  const void *v52; // rdi
  char m_ObjectFlags; // al
  unsigned __int8 v54; // r14
  unsigned __int8 v55; // r8
  const void *v56; // rcx
  _LIST_ENTRY *Flink; // rcx
  unsigned __int16 v58; // ax
  const void *v59; // rdi
  unsigned __int16 v60; // ax
  const void *v61; // rdi
  unsigned __int16 v62; // ax
  const void *v63; // rdi
  const void *v64; // rdx
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    m_ObjectFlags = pRequest->m_ObjectFlags;
    PreviousIrql = 0;
    if ( m_ObjectFlags < 0 && (Flink = pRequest[-1].m_ForwardProgressList.Flink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Flink, &PreviousIrql, a3);
      v54 = PreviousIrql;
    }
    else
    {
      v54 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
    }
    FxRequest::VerifyRequestIsNotCompleted(pRequest, pRequest->m_Globals);
    FxNonPagedObject::Unlock(pRequest, v54, v55);
  }
  if ( pRequest->m_Completed )
  {
    v56 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v56 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v56);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      RefCount = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            RefCount);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
  {
    v27 = pRequest->m_ObjectFlags;
    p_m_ForwardProgressList = (FxVerifierLock **)&pRequest[-1].m_ForwardProgressList;
    PreviousIrql = 0;
    if ( v27 < 0 && *p_m_ForwardProgressList )
    {
      FxVerifierLock::Lock(*p_m_ForwardProgressList, &PreviousIrql, a3);
      v30 = PreviousIrql;
      p_m_Lock = &pRequest->m_NPLock.m_Lock;
    }
    else
    {
      p_m_Lock = &pRequest->m_NPLock.m_Lock;
      v30 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
    }
    pRequest->m_VerifierFlags |= 9u;
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && *p_m_ForwardProgressList )
      FxVerifierLock::Unlock(*p_m_ForwardProgressList, v30, v31);
    else
      KeReleaseSpinLock(p_m_Lock, v30);
  }
  else
  {
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3219,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  v8 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  v9 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( !pRequest->m_ObjectSize )
    v9 = 0LL;
  MajorFunction = CurrentStackLocation->MajorFunction;
  switch ( (_BYTE)MajorFunction )
  {
    case 3:
      if ( this->m_IoRead.Method )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( (_DWORD)Length || this->m_AllowZeroLengthRequests )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, v9);
          m_ObjectSize = this->m_ObjectSize;
          p_m_IoRead = &this->m_IoRead;
          v44 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !m_ObjectSize )
            v44 = 0LL;
          if ( !p_m_IoRead->Method )
            goto LABEL_41;
          m_CallbackLock = p_m_IoRead->m_CallbackLock;
          PreviousIrql = 0;
          if ( m_CallbackLock )
            m_CallbackLock->Lock(m_CallbackLock, &PreviousIrql);
          p_m_IoRead->Method((WDFQUEUE__ *)v44, v9, Length);
          v24 = p_m_IoRead->m_CallbackLock;
          if ( !p_m_IoRead->m_CallbackLock )
            goto LABEL_41;
          goto LABEL_88;
        }
        if ( m_Globals->FxVerboseOn )
        {
          v58 = this->m_ObjectSize;
          v59 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v58 )
            v59 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, v9, v59);
          v8 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        }
        m_DeviceBase = pRequest->m_DeviceBase;
        v36 = pRequest->m_Globals;
        if ( v36->FxVerboseOn )
        {
          if ( !pRequest->m_ObjectSize )
            v8 = 0LL;
          WPP_IFR_SF_qiid(
            v36,
            5u,
            0x10u,
            0xBu,
            WPP_FxRequest_hpp_Traceguids,
            v8,
            pRequest->m_Irp.m_Irp,
            pRequest->m_Irp.m_Irp->IoStatus.Information,
            0);
        }
        if ( m_DeviceBase )
          m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
        else
          m_Globals_high = 0;
        pRequest->m_PriorityBoost = m_Globals_high;
        FxRequest::CompleteInternal(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v38 = 3261LL;
          goto LABEL_59;
        }
        return;
      }
      break;
    case 4:
      if ( this->m_IoWrite.Method )
      {
        v46 = CurrentStackLocation->Parameters.Read.Length;
        if ( (_DWORD)v46 || this->m_AllowZeroLengthRequests )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v9);
          v47 = this->m_ObjectSize;
          p_m_IoWrite = &this->m_IoWrite;
          v49 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v47 )
            v49 = 0LL;
          if ( !p_m_IoWrite->Method )
            goto LABEL_41;
          v50 = p_m_IoWrite->m_CallbackLock;
          PreviousIrql = 0;
          if ( v50 )
            v50->Lock(v50, &PreviousIrql);
          p_m_IoWrite->Method((WDFQUEUE__ *)v49, v9, v46);
          v24 = p_m_IoWrite->m_CallbackLock;
          if ( !p_m_IoWrite->m_CallbackLock )
            goto LABEL_41;
          goto LABEL_88;
        }
        if ( m_Globals->FxVerboseOn )
        {
          v60 = this->m_ObjectSize;
          v61 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v60 )
            v61 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, v9, v61);
        }
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v38 = 3300LL;
          goto LABEL_59;
        }
        return;
      }
      break;
    case 0xE:
      if ( this->m_IoDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, v9);
        p_m_CallbackLock = &this->m_IoDeviceControl.m_CallbackLock;
        v25 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v26 = this->m_ObjectSize;
        v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        LowPart = v25->Parameters.Read.ByteOffset.LowPart;
        if ( !v26 )
          v15 = 0LL;
        Options = v25->Parameters.Create.Options;
        v18 = v25->Parameters.Read.Length;
        if ( !p_m_CallbackLock[1] )
          goto LABEL_41;
        v19 = *p_m_CallbackLock;
        PreviousIrql = 0;
        if ( v19 )
LABEL_19:
          v19->Lock(v19, &PreviousIrql);
LABEL_40:
        ((void (__fastcall *)(unsigned __int64, WDFREQUEST__ *, __int64, __int64, unsigned int))p_m_CallbackLock[1])(
          v15,
          v9,
          v18,
          Options,
          LowPart);
        v24 = *p_m_CallbackLock;
        if ( !*p_m_CallbackLock )
        {
LABEL_41:
          if ( !m_Globals->FxVerifierOn )
            return;
          if ( (FxRequestBase::GetVerifierFlags(pRequest) & 4) == 0 )
            FxRequestBase::ClearVerifierFlags(pRequest, 8);
          v38 = 3465LL;
LABEL_59:
          pRequest->Release(
            pRequest,
            (void *)1952543827,
            v38,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          return;
        }
LABEL_88:
        v24->Unlock(v24, PreviousIrql);
        goto LABEL_41;
      }
      break;
    default:
      if ( (_BYTE)MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, v9);
        p_m_CallbackLock = &this->m_IoInternalDeviceControl.m_CallbackLock;
        v13 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        v14 = this->m_ObjectSize;
        v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        LowPart = v13->Parameters.Read.ByteOffset.LowPart;
        if ( !v14 )
          v15 = 0LL;
        Options = v13->Parameters.Create.Options;
        v18 = v13->Parameters.Read.Length;
        if ( !p_m_CallbackLock[1] )
          goto LABEL_41;
        v19 = *p_m_CallbackLock;
        PreviousIrql = 0;
        if ( v19 )
          goto LABEL_19;
        goto LABEL_40;
      }
      break;
  }
  if ( this->m_IoDefault.Method )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, v9);
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_26;
    if ( (_BYTE)MajorFunction != 3 )
    {
      if ( (_BYTE)MajorFunction == 4
        && !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      {
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerboseOn )
        {
          v51 = this->m_ObjectSize;
          v52 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v51 )
            v52 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, v9, v52);
        }
        if ( m_Globals->FxVerifierOn )
        {
          v38 = 3405LL;
          goto LABEL_59;
        }
        return;
      }
LABEL_26:
      p_m_IoDefault = &this->m_IoDefault;
      pRequest->m_Presented = 1;
      v21 = this->m_ObjectSize;
      v22 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v21 )
        v22 = 0LL;
      if ( !p_m_IoDefault->Method )
        goto LABEL_41;
      v23 = p_m_IoDefault->m_CallbackLock;
      PreviousIrql = 0;
      if ( v23 )
        v23->Lock(v23, &PreviousIrql);
      p_m_IoDefault->Method((WDFQUEUE__ *)v22, v9);
      v24 = p_m_IoDefault->m_CallbackLock;
      if ( !p_m_IoDefault->m_CallbackLock )
        goto LABEL_41;
      goto LABEL_88;
    }
    if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_26;
    if ( m_Globals->FxVerboseOn )
    {
      v62 = this->m_ObjectSize;
      v63 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v62 )
        v63 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, v9, v63);
    }
    FxRequest::Complete(pRequest, 0);
    if ( m_Globals->FxVerifierOn )
    {
      v38 = 3384LL;
      goto LABEL_59;
    }
  }
  else
  {
    WPP_IFR_SF_Lqd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      v7,
      0x3Bu,
      WPP_FxIoQueue_cpp_Traceguids,
      MajorFunction,
      pRequest,
      -1073741808);
    v39 = pRequest->m_DeviceBase;
    v40 = pRequest->m_Globals;
    if ( v40->FxVerboseOn )
    {
      v64 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v64 = 0LL;
      WPP_IFR_SF_qiid(
        v40,
        5u,
        0x10u,
        0xBu,
        WPP_FxRequest_hpp_Traceguids,
        v64,
        pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        -1073741808);
    }
    if ( v39 )
      v41 = HIBYTE(v39[1].m_Globals);
    else
      v41 = 0;
    pRequest->m_PriorityBoost = v41;
    FxRequest::CompleteInternal(pRequest, -1073741808);
    if ( m_Globals->FxVerifierOn )
    {
      v38 = 3436LL;
      goto LABEL_59;
    }
  }
}
