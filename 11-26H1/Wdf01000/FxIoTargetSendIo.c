/*
 * XREFs of FxIoTargetSendIo @ 0x14002B350
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x14002C8C0 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x14006FC40 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x140028650 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14002BD00 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x14002C9CC (--1FxIoContext@@UEAA@XZ.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x14002CB10 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_Dd @ 0x1400803F8 (WPP_IFR_SF_Dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140083144 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqD @ 0x14009B3D8 (WPP_IFR_SF_qqD.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  unsigned int v8; // r12d
  __int64 v9; // rax
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _FX_DRIVER_GLOBALS *v14; // rdx
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  __int64 v17; // rax
  unsigned __int16 *v18; // rbx
  __int64 v19; // rcx
  FxIoContext *v20; // rcx
  _WDF_REQUEST_SEND_OPTIONS *v21; // rbx
  unsigned int v22; // edx
  _WDF_MEMORY_DESCRIPTOR *v23; // rdi
  int v24; // eax
  unsigned int v25; // edi
  signed __int32 v26; // ebx
  _MDL *m_MdlToFree; // rcx
  int v29; // eax
  unsigned int v30; // r15d
  FxIoTarget_vtbl *v31; // rax
  unsigned __int8 v32; // dl
  unsigned int v33; // r8d
  unsigned __int16 v34; // r9
  __int64 v35; // rax
  unsigned __int16 v36; // r9
  KIRQL CurrentIrql; // al
  unsigned int v38; // ebx
  const void *m_TrueRequest; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxFileObject *_a1; // [rsp+28h] [rbp-D8h]
  FxTagTracker *_a2; // [rsp+30h] [rbp-D0h]
  void *p_pTarget; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v44; // [rsp+58h] [rbp-A8h]
  __int16 v45; // [rsp+5Ah] [rbp-A6h]
  int v46; // [rsp+5Ch] [rbp-A4h]
  FxSyncRequest v47; // [rsp+60h] [rbp-A0h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+90h] BYREF
  FxRequestBuffer ioBuf; // [rsp+240h] [rbp+140h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+2A0h] [rbp+1A0h] BYREF
  FxIoTarget *pTarget; // [rsp+2A8h] [rbp+1A8h] BYREF

  v8 = MajorCode;
  LOWORD(v9) = 0;
  ioBuf.DataType = FxRequestBufferUnspecified;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v9 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v9);
  }
  if ( flags->m_Type == 4608 )
  {
    pTarget = flags;
  }
  else
  {
    v45 = v9;
    pTarget = 0LL;
    v46 = 0;
    v31 = flags->__vftable;
    p_pTarget = &pTarget;
    v44 = 4608;
    if ( v31->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v32, v33, v34, traceGuid, (const void *)IoTarget, 0x1200u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    flags = pTarget;
  }
  m_Globals = flags->m_Globals;
  memset(&context.m_CompletionParams.IoStatus, 0, 72);
  context.__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  context.m_RequestType = 1;
  v47.__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  v14 = m_Globals;
  context.m_CompletionParams.Size = 72;
  v47.m_ChildListHead.Blink = &v47.m_ChildListHead;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  v47.m_ChildListHead.Flink = &v47.m_ChildListHead;
  v47.m_ChildEntry.Blink = &v47.m_ChildEntry;
  v47.m_ChildEntry.Flink = &v47.m_ChildEntry;
  memset(&context.m_BufferToFreeLength, 0, 19);
  memset(&context.m_BufferToFree, 0, 40);
  context.m_OtherMemory = 0LL;
  *(_DWORD *)&v47.m_Type = 4104;
  v47.m_Globals = m_Globals;
  v47.m_SpinLock.m_Lock = 0LL;
  v47.m_SpinLock.m_DbgFlagIsInitialized = 1;
  v47.m_Refcnt = 1;
  *(_DWORD *)&v47.m_ObjectFlags = 0x10000;
  v47.m_ParentObject = 0LL;
  v47.m_DisposeSingleEntry.Next = 0LL;
  v47.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&v47, m_Globals, 1u);
    v14 = v47.m_Globals;
  }
  v47.__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  v47.m_NPLock.m_Lock = 0LL;
  v47.m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v47.m_ObjectFlags) < 0 && v14->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v14, &v47);
  }
  v47.m_CsqContext.Irp = (_IRP *)&v47.120;
  v47.m_ListEntry.Flink = (_LIST_ENTRY *)&v47.120;
  v47.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  *(_DWORD *)&v47.m_RequestBaseStaticFlags = 0x1000000;
  *(_DWORD *)&v47.m_Completed = 1;
  memset(&v47.144, 0, 70);
  v47.m_AllocatedMdl = 0LL;
  memset(&v47.218, 0, 17);
  v47.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&v47.m_DestroyedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  v47.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  v47.m_RequestContext = &context;
  v47.m_ClearContextOnDestroy = 1;
  if ( Request )
  {
    LOWORD(v17) = 0;
    v18 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Request & 1) != 0 )
    {
      v17 = *v18;
      v18 = (unsigned __int16 *)((char *)v18 - v17);
    }
    if ( v18[4] == 4104 )
    {
      VerifierLock = (FxVerifierLock *)v18;
    }
    else
    {
      v45 = v17;
      VerifierLock = 0LL;
      v46 = 0;
      v35 = *(_QWORD *)v18;
      p_pTarget = &VerifierLock;
      v44 = 4104;
      if ( (*(int (__fastcall **)(unsigned __int16 *, void **))(v35 + 40))(v18, &p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v18 + 2),
          v15,
          v16,
          v36,
          traceGuid,
          (const void *)Request,
          0x1008u,
          v18,
          v18[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v18 + 2), WDF_INVALID_HANDLE, Request, 0x1008uLL);
      }
      v18 = (unsigned __int16 *)VerifierLock;
    }
    v47.m_TrueRequest = (FxRequestBase *)v18;
    v19 = *((_QWORD *)v18 + 21);
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v19 + 24LL))(v19, v18);
      v18 = (unsigned __int16 *)VerifierLock;
    }
    v20 = (FxIoContext *)*((_QWORD *)v18 + 21);
    if ( v20 != &context )
    {
      if ( v20 )
        ((void (__fastcall *)(FxIoContext *, __int64))v20->~FxIoContext)(v20, 1LL);
      *((_QWORD *)v18 + 21) = &context;
      v18 = (unsigned __int16 *)VerifierLock;
    }
    *((_BYTE *)v18 + 234) |= 0x10u;
  }
  else
  {
    v47.m_RequestBaseFlags |= 0x10u;
    v47.m_TrueRequest = &v47;
  }
  v47.m_ObjectSize = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(
      m_Globals,
      v15,
      v16,
      0x1Cu,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      (const void *)IoTarget,
      (const void *)Request,
      v8);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      FxSyncRequest::~FxSyncRequest(&v47);
      FxIoContext::~FxIoContext(&context);
      return 3221225488LL;
    }
  }
  v21 = RequestOptions;
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      v22 = RequestOptions->Flags;
      if ( (v22 & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          v22,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          v22,
          0xFu);
      }
      else
      {
        if ( (v22 & 0xFFFFFFF7) == 0 || (v22 & 8) == 0 )
          goto LABEL_28;
        WPP_IFR_SF_qDd(m_Globals, v22, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, 8u, v22);
      }
      v38 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v38 = -1073741820;
    }
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v38);
    FxSyncRequest::~FxSyncRequest(&v47);
    FxIoContext::~FxIoContext(&context);
    return v38;
  }
LABEL_28:
  v23 = IoBuffer;
  if ( IoBuffer )
  {
    v29 = FxRequestBuffer::ValidateMemoryDescriptor(&ioBuf, m_Globals, IoBuffer, 0LL);
    v30 = v29;
    if ( v29 < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v23, v29);
      FxSyncRequest::~FxSyncRequest(&v47);
      FxIoContext::~FxIoContext(&context);
      return v30;
    }
  }
  v24 = FxIoTarget::FormatIoRequest(pTarget, v47.m_TrueRequest, v8, &ioBuf, DeviceOffset, _a1);
  v25 = v24;
  if ( v24 < 0 )
  {
    WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, v8, v24);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( !v47.m_TrueRequest->m_ObjectSize
        || (m_TrueRequest = (const void *)((unsigned __int64)v47.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      {
        m_TrueRequest = v47.m_TrueRequest;
      }
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget, m_TrueRequest);
    }
    v25 = FxIoTarget::SubmitSync(pTarget, v47.m_TrueRequest, v21, 0LL);
    if ( BytesReturned )
      *BytesReturned = v47.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
  }
  v47.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  if ( SLOBYTE(v47.m_ObjectFlags) < 0 && _a2 )
    FxTagTracker::UpdateTagHistory(
      _a2,
      0LL,
      129,
      "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
      TagRelease,
      v47.m_Refcnt - 1);
  v26 = _InterlockedDecrement(&v47.m_Refcnt);
  if ( !v26 )
    FxObject::FinalRelease(&v47);
  if ( v47.m_TrueRequest == &v47 )
    goto LABEL_39;
  if ( v47.m_ClearContextOnDestroy )
  {
    v47.m_TrueRequest->m_RequestContext = 0LL;
    v47.m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
LABEL_39:
    if ( v47.m_ClearContextOnDestroy )
      v47.m_RequestContext = 0LL;
  }
  if ( v26 )
  {
    if ( v47.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(v47.m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, &v47, &v47.m_DestroyedEvent);
    FxCREvent::EnterCRAndWaitAndLeave(&v47.m_DestroyedEvent);
    if ( v47.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(v47.m_Globals, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, &v47, &v47.m_DestroyedEvent);
  }
  FxRequestBase::~FxRequestBase(&v47);
  context.__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  if ( context.m_BufferToFree )
  {
    FxPoolFree(context.m_BufferToFree);
    context.m_BufferToFree = 0LL;
  }
  m_MdlToFree = context.m_MdlToFree;
  context.m_BufferToFreeLength = 0LL;
  context.m_CopyBackToBuffer = 0;
  if ( context.m_MdlToFree )
  {
    if ( context.m_UnlockPages )
    {
      MmUnlockPages(context.m_MdlToFree);
      m_MdlToFree = context.m_MdlToFree;
      context.m_UnlockPages = 0;
    }
    if ( BYTE4(context.m_OriginalMdl[6].StartVa) )
      FxMdlFreeDebug(context.m_DriverGlobals, m_MdlToFree);
    else
      IoFreeMdl(m_MdlToFree);
  }
  return v25;
}
