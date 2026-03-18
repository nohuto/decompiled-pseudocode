/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14000EBE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1400353F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x140035E50 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     imp_WdfRequestComplete @ 0x140037150 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x140037C00 (imp_WdfRequestCompleteWithInformation.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x14004F374 (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x140064B40 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140036A80 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140037310 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     WPP_IFR_SF_qqDqq @ 0x140037DC4 (WPP_IFR_SF_qqDqq.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x140038A68 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x14004BA64 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x14004BE04 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1400708BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqi @ 0x140080F28 (WPP_IFR_SF_qqqi.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x140082FC8 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DD7D4 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DDEF0 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1400E5684 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(FxRequest *this, unsigned int Status, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _IRP *_a2; // rdi
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 *p_m_Reserved; // r12
  FxRequestCompletionState m_CompletionState; // r14d
  FxIoQueue *m_IoQueue; // rbp
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v13; // rcx
  FxDeviceBase *m_DeviceBase; // r15
  unsigned __int8 v15; // r8
  _FX_DRIVER_GLOBALS *v16; // rdx
  __int16 v17; // r9
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *v20; // r8
  $290BB65A515BE5F04C495658DA243B85 *v21; // r14
  _FX_DRIVER_GLOBALS *v23; // rdx
  KIRQL v24; // r9
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // r8
  FxRequest_vtbl *v28; // rax
  __int64 p_irp; // rdx
  __int64 v30; // r8
  FxRequest *v31; // rcx
  const void *_a1; // rcx
  $D701E9947D2B6308F1B38FBA35CFC092 *v33; // r12
  WDFMEMORY__ *id; // rsi
  FxRequestSystemBuffer *p_m_SystemBuffer; // rdi
  WDFMEMORY__ *flags; // rax
  unsigned __int16 *p_m_ObjectSize; // r13
  unsigned __int64 v38; // r14
  const void *v39; // rcx
  bool v40; // zf
  unsigned int v41; // edx
  FxPkgGeneral *m_Lock; // rdi
  unsigned int v43; // r12d
  FxVerifierLock *v44; // rcx
  FxVerifierLock *v45; // rcx
  FxVerifierLock *v46; // rcx
  FxVerifierLock *v47; // rcx
  KIRQL v48; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v50; // r13
  _FX_DRIVER_GLOBALS *v51; // rdx
  _FX_DRIVER_GLOBALS *v52; // rcx
  const void *v53; // rdx
  FxTagTracker *m_DeviceObject; // rcx
  __int64 v55; // rbp
  _MDL *level; // rsi
  const void *v57; // rdi
  WDFMEMORY__ *v58; // rax
  unsigned __int8 v59; // dl
  unsigned int v60; // r8d
  _LIST_ENTRY *v61; // rcx
  __int64 v62; // rbp
  _MDL *v63; // rsi
  const void *v64; // rdi
  WDFMEMORY__ *v65; // rax
  unsigned __int8 v66; // dl
  unsigned int v67; // r8d
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-88h]
  unsigned __int16 *v70; // [rsp+50h] [rbp-58h]
  unsigned __int64 v71; // [rsp+58h] [rbp-50h]
  FxIrp irp; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int16 *v74; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v75; // [rsp+C8h] [rbp+20h]

  m_Globals = this->m_Globals;
  _a2 = this->m_Irp.m_Irp;
  m_Irp = _a2;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, (_FX_DRIVER_GLOBALS *)_a2, Status),
        m_Irp = this->m_Irp.m_Irp,
        !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14
    && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0
    && m_Irp->RequestorMode == 1
    && !CurrentStackLocation->Parameters.Read.Length
    && (m_Irp->Flags & 0x40) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    if ( this->m_Irp.m_Irp->IoStatus.Information )
      FxVerifierDbgBreakPoint(m_Globals);
    this->m_Irp.m_Irp->Flags &= ~0x40u;
  }
  if ( (Status & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, Status);
    if ( Status != -1071644156 )
    {
      if ( Status == -1071644159 )
      {
        Status = -1073741595;
        goto LABEL_98;
      }
      if ( Status == -1071644140 )
      {
        Status = -1073741670;
LABEL_98:
        WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, Status);
        goto LABEL_5;
      }
      if ( Status != -1071644157 )
      {
        if ( Status != -1071644150 && Status != -1071644141 )
          WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, Status);
        Status = -1073741808;
        goto LABEL_98;
      }
    }
    Status = -2147483631;
    goto LABEL_98;
  }
LABEL_5:
  if ( this->m_IrpAllocation && !this->m_CanComplete )
    FxVerifierDbgBreakPoint(m_Globals);
  p_m_Reserved = &this->m_Reserved;
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  if ( !this->m_IrpAllocation )
  {
    this->m_CompletionState = 0;
    if ( !*p_m_Reserved )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  if ( !*p_m_Reserved && !this->m_IrpAllocation )
  {
    if ( !FxObject::EarlyDispose(this) )
    {
      v51 = this->m_Globals;
      if ( v51->FxVerifierOn )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v51);
    }
    FxObject::DestroyChildren(this);
  }
  if ( this->m_IrpReferenceCount )
  {
    v33 = &this->235;
    if ( (this->m_RequestBaseFlags & 2) != 0 || (v33->m_RequestBaseStaticFlags & 2) != 0 )
      id = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
    else
      id = 0LL;
    if ( (this->m_RequestBaseFlags & 1) != 0 || (v33->m_RequestBaseStaticFlags & 1) != 0 )
    {
      p_m_SystemBuffer = &this->m_SystemBuffer;
      flags = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    }
    else
    {
      flags = 0LL;
      p_m_SystemBuffer = &this->m_SystemBuffer;
    }
    p_m_ObjectSize = &this->m_ObjectSize;
    v38 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v39 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      (unsigned int)this->m_Irp.m_Irp,
      0,
      traceGuid,
      v39,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      flags,
      id);
    v40 = (this->m_RequestBaseFlags & 1) == 0;
    v74 = &this->m_ObjectSize;
    v75 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v40 )
    {
      if ( (v33->m_RequestBaseStaticFlags & 1) == 0 )
      {
LABEL_70:
        v70 = &this->m_ObjectSize;
        v71 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( (this->m_RequestBaseFlags & 2) != 0 || (v70 = v74, v71 = v75, (v33->m_RequestBaseStaticFlags & 2) != 0) )
        {
          v55 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
          level = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
          v57 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
          v58 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
          WPP_IFR_SF_qqqi(m_Globals, v59, v60, 0x16u, traceGuida, v58, v57, level, v55);
          p_m_ObjectSize = v70;
          v38 = v71;
        }
        if ( !*p_m_ObjectSize )
          v38 = 0LL;
        FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v38, this->m_IrpReferenceCount);
      }
      v74 = &this->m_ObjectSize;
      v33 = &this->235;
      v75 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    }
    v62 = p_m_SystemBuffer->GetBufferSize(p_m_SystemBuffer);
    v63 = p_m_SystemBuffer->GetMdl(p_m_SystemBuffer);
    v64 = (const void *)p_m_SystemBuffer->GetBuffer(p_m_SystemBuffer);
    v65 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    WPP_IFR_SF_qqqi(m_Globals, v66, v67, 0x15u, traceGuida, v65, v64, v63, v62);
    goto LABEL_70;
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = Status;
  if ( this->m_IrpAllocation )
  {
    if ( m_CompletionState == FxRequestCompletionStateQueue )
    {
      v23 = m_IoQueue->m_Globals;
      PreviousIrql = 0;
      if ( v23->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v23, this);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v46 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v46, &PreviousIrql, a3);
        v24 = PreviousIrql;
      }
      else
      {
        v24 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      Flink = this->m_OwnerListEntry2.Flink;
      if ( Flink->Blink != &this->m_OwnerListEntry2 )
        goto LABEL_125;
      Blink = this->m_OwnerListEntry2.Blink;
      if ( Blink->Flink != p_m_OwnerListEntry2 )
        goto LABEL_125;
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      ++m_IoQueue->m_TwoPhaseCompletions;
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v47 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v47, v24, (unsigned __int8)Blink);
      }
      else
      {
        KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, v24);
      }
    }
    else if ( m_IoQueue )
    {
      FxObject::AddRef(this, (void *)0x706D6F43, 995, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    v28 = this->__vftable;
    p_irp = 1129464644LL;
    v30 = 1001LL;
    v31 = this;
LABEL_50:
    v28->Release(v31, (void *)p_irp, v30, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    return Status;
  }
  v13 = irp.m_Irp;
  this->m_Irp.m_Irp = 0LL;
  if ( v13->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = 0LL;
  }
  else
  {
    m_DeviceBase = this->m_DeviceBase;
    v41 = _InterlockedIncrement(&m_DeviceBase->m_Refcnt);
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      m_DeviceObject = (FxTagTracker *)m_DeviceBase[-1].m_AttachedDevice.m_DeviceObject;
      if ( m_DeviceObject )
        FxTagTracker::UpdateTagHistory(
          m_DeviceObject,
          &irp,
          858,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v41);
    }
    v13 = irp.m_Irp;
    m_Lock = (FxPkgGeneral *)m_DeviceBase[3].m_SpinLock.m_Lock;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        m_Lock->m_Device,
        (_WDF_FILEOBJECT_CLASS)m_Lock->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(m_Lock);
      v13 = irp.m_Irp;
    }
  }
  IofCompleteRequest(v13, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
    goto LABEL_35;
  }
  if ( m_CompletionState == FxRequestCompletionStateNone )
  {
    v43 = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      v61 = this[-1].m_OwnerListEntry2.Blink;
      if ( v61 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v61,
          (void *)0x706D6F43,
          925,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v43);
    }
    this->DeleteObject(this);
    goto LABEL_35;
  }
  if ( (m_CompletionState & 0x80u) == 0 )
  {
    v16 = m_IoQueue->m_Globals;
    PreviousIrql = 0;
    if ( v16->FxVerifierOn )
      FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v16, this);
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v44 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v44, &PreviousIrql, v15);
      v17 = PreviousIrql;
    }
    else
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
    }
    v18 = &this->m_OwnerListEntry2;
    v19 = this->m_OwnerListEntry2.Flink;
    if ( v19->Blink == &this->m_OwnerListEntry2 )
    {
      v20 = this->m_OwnerListEntry2.Blink;
      if ( v20->Flink == v18 )
      {
        v20->Flink = v19;
        v19->Blink = v20;
        this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
        v18->Flink = v18;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
        {
          if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
            && (v45 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v45, v17, (unsigned __int8)v20);
          }
          else
          {
            KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, v17);
          }
        }
        else
        {
          FxIoQueue::DispatchEvents(m_IoQueue, v17, 0LL, v17);
        }
        goto LABEL_32;
      }
    }
LABEL_125:
    __fastfail(3u);
  }
LABEL_32:
  this->m_ObjectFlags |= 4u;
  v21 = &this->24;
  if ( this->m_ParentObject )
  {
    v48 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    m_ParentObject = this->m_ParentObject;
    v21 = &this->24;
    v50 = v48;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v50);
        goto LABEL_35;
      }
      v21 = &this->24;
      this->m_ParentObject = 0LL;
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v50);
  }
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    v52 = this->m_Globals;
    if ( v52->FxVerboseOn )
    {
      v53 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v53 = 0LL;
      WPP_IFR_SF_qqLL(v52, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v53, this->m_ObjectState, 0xAu);
    }
    if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 10;
  }
  this->m_ObjectState = 10;
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1248, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
LABEL_35:
  if ( m_DeviceBase )
  {
    v28 = (FxRequest_vtbl *)m_DeviceBase->FxNonPagedObject::FxObject::__vftable;
    p_irp = (__int64)&irp;
    v30 = 879LL;
    v31 = (FxRequest *)m_DeviceBase;
    goto LABEL_50;
  }
  return Status;
}
