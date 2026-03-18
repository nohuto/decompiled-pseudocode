/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290
 * Callers:
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x140001D20 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x140004494 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x140004800 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140015D90 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140016380 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1400173B4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x140022D48 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     FxIoTargetSendIoctl @ 0x140027D60 (FxIoTargetSendIoctl.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1400289A0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfRequestSend @ 0x140029C80 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIo @ 0x14002B350 (FxIoTargetSendIo.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005E824 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005EFE8 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009CC30 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009F78C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140004F04 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qD @ 0x140088B34 (WPP_IFR_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned __int8 v8; // r8
  char v9; // r13
  unsigned int v10; // esi
  unsigned int v11; // r12d
  char m_ObjectFlags; // al
  unsigned int v13; // edi
  unsigned __int8 v14; // r8
  unsigned int v15; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int RefCount; // r15d
  _FX_DRIVER_GLOBALS *v18; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *v20; // rax
  _LARGE_INTEGER *Timeout; // rax
  NTSTATUS v23; // edi
  unsigned __int8 v24; // r8
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  FxTagTracker *m_TargetCompletionContext; // rcx
  unsigned __int8 v27; // al
  unsigned __int8 v28; // r8
  _DEVICE_OBJECT *v29; // rcx
  FxRequestBase *_a2; // r8
  unsigned __int64 v31; // rcx
  const void *v32; // rdx
  unsigned __int64 v33; // rdx
  FxRequestBase *v34; // rax
  unsigned __int64 v35; // rdx
  FxRequestBase *v36; // rax
  FxVerifierLock **p_m_TargetDevice; // [rsp+40h] [rbp-39h]
  __int64 timeout; // [rsp+48h] [rbp-31h] BYREF
  FxTargetSubmitSyncParams params; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 irql; // [rsp+E8h] [rbp+6Fh] BYREF
  int status; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int *v43; // [rsp+F8h] [rbp+7Fh]

  v43 = Action;
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  timeout = 0LL;
  status = 0;
  memset(&params.Status, 0, 24);
  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v31 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v31 = 0LL;
    if ( v31 )
      _a2 = (FxRequestBase *)v31;
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v32 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 5u, 0xEu, 0x24u, WPP_FxIoTarget_cpp_Traceguids, v32, _a2);
  }
  v9 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v10 = *Action;
  else
    v10 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v10 |= 0x10u;
  }
  if ( (v10 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v11 = Options->Flags & 0xFFFFFFFE;
  else
    v11 = 0;
  m_ObjectFlags = this->m_ObjectFlags;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0
    && (m_TargetDevice = this[-1].m_TargetDevice,
        p_m_TargetDevice = (FxVerifierLock **)&this[-1].m_TargetDevice,
        m_TargetDevice) )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &PreviousIrql, v8);
  }
  else
  {
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    p_m_TargetDevice = (FxVerifierLock **)&this[-1].m_TargetDevice;
  }
  v13 = FxIoTarget::SubmitLocked(this, Request, Options, v11);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_TargetDevice )
    FxVerifierLock::Unlock(*p_m_TargetDevice, PreviousIrql, v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
  v15 = v13 | v10;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v33 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v34 = Request;
    if ( !Request->m_ObjectSize )
      v33 = 0LL;
    if ( v33 )
      v34 = (FxRequestBase *)v33;
    WPP_IFR_SF_qD(m_Globals, v33, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, v34, v15);
  }
  RefCount = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    m_TargetCompletionContext = (FxTagTracker *)Request[-1].m_TargetCompletionContext;
    if ( m_TargetCompletionContext )
      FxTagTracker::UpdateTagHistory(
        m_TargetCompletionContext,
        &status,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        RefCount);
  }
  if ( (v15 & 1) != 0 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v35 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v36 = Request;
      if ( !Request->m_ObjectSize )
        v35 = 0LL;
      if ( v35 )
        v36 = (FxRequestBase *)v35;
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v36, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    v15 |= 0xCu;
  }
  else if ( (v15 & 2) != 0 )
  {
    v15 |= 0xCu;
  }
  else if ( (v15 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
  if ( (v15 & 4) != 0 )
  {
    if ( (v15 & 8) != 0 )
    {
      KeEnterCriticalRegion();
      Timeout = (_LARGE_INTEGER *)&timeout;
      if ( (v15 & 0x10) == 0 )
        Timeout = 0LL;
      v23 = KeWaitForSingleObject(&params, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      status = v23;
      if ( v23 == 258 )
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v29 = this[-1].m_TargetDevice) != 0LL )
        {
          FxVerifierLock::Lock((FxVerifierLock *)v29, &irql, v24);
          v27 = irql;
        }
        else
        {
          v27 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        }
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v27, v28);
        FxRequestBase::Cancel(Request);
        FxCREvent::EnterCRAndWaitAndLeave(&params.SynchEvent);
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( v43 )
    *v43 = v15;
  if ( v9 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( m_RequestContext )
    {
      if ( Request->m_Irp.m_Irp )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
        v20 = Request->m_Globals;
        if ( v20->FxVerifierOn )
        {
          if ( v20->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(Request, 128);
        }
      }
    }
  }
  return (unsigned int)status;
}
