/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x140003AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x140004384 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1400043F4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x1400565E4 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        unsigned __int64 Request,
        unsigned __int64 UrbMemory,
        _MDL *UrbOffsets)
{
  __int64 v5; // rax
  FxRequest *v9; // rbx
  const void *v10; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  __int64 v12; // rax
  FxUsbPipe *v13; // rbx
  __int64 v14; // rcx
  FxRequestBase *v15; // rdi
  unsigned __int64 v16; // rax
  _WDFMEMORY_OFFSET *v17; // rbx
  __int64 v18; // rax
  FxRequest *v19; // rdi
  FxRequestBase *v20; // rbx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // r13
  _FX_DRIVER_GLOBALS *v23; // rax
  unsigned int v24; // r13d
  const void *v25; // rax
  unsigned __int16 v26; // r9
  _FX_DRIVER_GLOBALS *v27; // rsi
  PIRP Irp; // rax
  _IRP *v29; // r13
  FxRequestContext *v30; // r13
  _FX_DRIVER_GLOBALS *v31; // rcx
  void *v32; // rax
  FxUsbRequestContext *v33; // rax
  WDFMEMORY__ *Buffer; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v36; // rcx
  _FX_DRIVER_GLOBALS *v37; // rax
  FxRequestContext *v38; // rcx
  unsigned int v40; // r8d
  unsigned __int64 v41; // rcx
  FxRequest_vtbl *v42; // rax
  unsigned __int8 v43; // dl
  unsigned int v44; // r8d
  unsigned __int16 v45; // r9
  FxUsbPipe_vtbl *v46; // rax
  unsigned __int8 v47; // dl
  unsigned int v48; // r8d
  unsigned __int16 v49; // r9
  FxRequestBase_vtbl *v50; // rax
  unsigned __int8 v51; // dl
  unsigned int v52; // r8d
  unsigned __int16 v53; // r9
  _FX_DRIVER_GLOBALS *v54; // rcx
  const void *v55; // rax
  __int64 v56; // rax
  const _GUID *traceGuid; // [rsp+28h] [rbp-61h]
  unsigned __int64 p_pRequest; // [rsp+58h] [rbp-31h] BYREF
  IFxMemory *pMemory; // [rsp+60h] [rbp-29h]
  FxUsbPipe *pUsbPipe; // [rsp+68h] [rbp-21h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-19h] BYREF
  FxRequestBase *v62; // [rsp+78h] [rbp-11h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+80h] [rbp-9h]
  __int64 v64; // [rsp+88h] [rbp-1h] BYREF
  FxRequestBuffer buf; // [rsp+90h] [rbp+7h] BYREF
  __int64 v66; // [rsp+B0h] [rbp+27h]
  void *retaddr; // [rsp+E0h] [rbp+57h]
  char m_ParentObject; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v69; // [rsp+F0h] [rbp+67h]

  LOWORD(v5) = 0;
  v66 = 0LL;
  *(_OWORD *)&buf.u.RefMdl.Offsets = 0LL;
  if ( !Pipe )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  v9 = (FxRequest *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  v10 = 0LL;
  if ( (Pipe & 1) != 0 )
  {
    v5 = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - v5);
  }
  if ( v9->m_Type == 4611 )
  {
    pRequest = v9;
  }
  else
  {
    WORD1(pMemory) = v5;
    pRequest = 0LL;
    HIDWORD(pMemory) = 0;
    v42 = v9->__vftable;
    p_pRequest = (unsigned __int64)&pRequest;
    LOWORD(pMemory) = 4611;
    if ( v42->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v43, v44, v45, traceGuid, (const void *)Pipe, 0x1203u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Pipe, 0x1203uLL);
    }
    v9 = pRequest;
  }
  m_Globals = v9->m_Globals;
  globals = m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqq(
      m_Globals,
      5u,
      0xEu,
      0x29u,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      (const void *)Pipe,
      (const void *)Request,
      (const void *)UrbMemory);
  if ( !UrbMemory )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x100AuLL);
  LOWORD(v12) = 0;
  v13 = (FxUsbPipe *)(~UrbMemory & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UrbMemory & 1) != 0 )
  {
    v12 = LOWORD(v13->__vftable);
    v13 = (FxUsbPipe *)((char *)v13 - v12);
  }
  if ( v13->m_Type == 4106 )
  {
    pUsbPipe = v13;
  }
  else
  {
    WORD1(pMemory) = v12;
    pUsbPipe = 0LL;
    HIDWORD(pMemory) = 0;
    v46 = v13->__vftable;
    p_pRequest = (unsigned __int64)&pUsbPipe;
    LOWORD(pMemory) = 4106;
    if ( v46->QueryInterface(v13, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(v13->m_Globals, v47, v48, v49, traceGuid, (const void *)UrbMemory, 0x100Au, v13, v13->m_Type);
      FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, UrbMemory, 0x100AuLL);
    }
    v13 = pUsbPipe;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v14) = 0;
  v15 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v14 = LOWORD(v15->__vftable);
    v15 = (FxRequestBase *)((char *)v15 - v14);
  }
  if ( v15->m_Type == 4104 )
  {
    v62 = v15;
  }
  else
  {
    LOWORD(pMemory) = 4104;
    v62 = 0LL;
    HIDWORD(pMemory) = 0;
    v50 = v15->__vftable;
    p_pRequest = (unsigned __int64)&v62;
    WORD1(pMemory) = v14;
    if ( v50->QueryInterface(v15, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(v15->m_Globals, v51, v52, v53, traceGuid, (const void *)Request, 0x1008u, v15, v15->m_Type);
      FxVerifierBugCheckWorker(v15->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v13 = pUsbPipe;
  }
  if ( UrbOffsets )
  {
    v41 = *(_QWORD *)&UrbOffsets->Size;
    v69 = (unsigned __int64)UrbOffsets->Next + v41;
    if ( v69 < v41 || v69 > ((__int64 (__fastcall *)(FxUsbPipe *))v13->~FxObject)(v13) )
      return 3221225621LL;
    v16 = ((__int64 (__fastcall *)(FxUsbPipe *))pUsbPipe->~FxObject)(pUsbPipe);
    if ( UrbOffsets->Next )
      v16 -= (unsigned __int64)UrbOffsets->Next;
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(FxUsbPipe *))v13->~FxObject)(v13);
  }
  if ( v16 >= 0x18 )
  {
    v17 = (_WDFMEMORY_OFFSET *)pUsbPipe;
    v18 = ((__int64 (__fastcall *)(FxUsbPipe *))pUsbPipe->Release)(pUsbPipe);
    buf.u.Memory.Offsets = v17;
    buf.u.RefMdl.Mdl = UrbOffsets;
    if ( v18 )
    {
      LODWORD(buf.u.Memory.Memory) = 4;
      v66 = v18;
    }
    else
    {
      LODWORD(buf.u.Memory.Memory) = 1;
    }
    v19 = pRequest;
    v20 = v62;
    m_RequestContext = v62->m_RequestContext;
    m_Irp = v62->m_Irp.m_Irp;
    p_pRequest = pRequest[1].m_SpinLock.m_Lock;
    m_ParentObject = (char)pRequest[1].m_ParentObject;
    if ( m_RequestContext )
    {
      if ( m_Irp )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, v62);
        v23 = v20->m_Globals;
        if ( v23->FxVerifierOn )
        {
          if ( v23->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(v20, 128);
        }
      }
    }
    if ( !LOBYTE(v19->m_ForwardProgressQueue) )
    {
      v24 = -1073741436;
      if ( v19->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qd(v20->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v10, -1073741436);
      goto LABEL_36;
    }
    if ( m_Irp )
    {
      if ( m_Irp->CurrentLocation - 1 >= SLOBYTE(v19->m_ForwardProgressQueue) )
        goto LABEL_41;
      if ( v20->m_IrpAllocation != 1 )
      {
        v24 = -1073741616;
        if ( v19->m_ObjectSize )
          v10 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20->m_ObjectSize || (v25 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          v25 = v20;
        v26 = 13;
LABEL_35:
        WPP_IFR_SF_qqd(v20->m_Globals, 2u, 0xEu, v26, WPP_FxRequestBase_cpp_Traceguids, v25, v10, v24);
LABEL_36:
        v27 = globals;
        if ( !globals->FxVerboseOn )
          return v24;
        WPP_IFR_SF_qqd(globals, 5u, 0xEu, 0xAu, WPP_usbutil_cpp_Traceguids, v19, v20, v24);
LABEL_51:
        if ( v27->FxVerboseOn )
          WPP_IFR_SF_qqqd(
            v27,
            5u,
            0xEu,
            0x2Bu,
            WPP_FxUsbPipeAPI_cpp_Traceguids,
            (const void *)Pipe,
            (const void *)Request,
            (const void *)UrbMemory,
            v24);
        return v24;
      }
    }
    Irp = IoAllocateIrp((CCHAR)v19->m_ForwardProgressQueue, 0);
    if ( !Irp )
    {
      v24 = -1073741670;
      if ( v19->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20->m_ObjectSize || (v25 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v25 = v20;
      v26 = 12;
      goto LABEL_35;
    }
    v29 = v20->m_Irp.m_Irp;
    v20->m_Irp.m_Irp = Irp;
    v20->m_Completed = 0;
    if ( v29 && v29 != Irp && v20->m_IrpAllocation == 1 )
    {
      v20->m_IrpAllocation = 1;
      v54 = v20->m_Globals;
      if ( v54->FxVerboseOn )
      {
        if ( !v20->m_ObjectSize || (v55 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          v55 = v20;
        WPP_IFR_SF_qq(v54, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v29, v55);
      }
      IoFreeIrp(v29);
    }
    else
    {
      v20->m_IrpAllocation = 1;
    }
LABEL_41:
    v30 = v20->m_RequestContext;
    if ( !v30 || v30->m_RequestType != 17 )
    {
      v31 = v19->m_Globals;
      v64 = 0LL;
      *(_QWORD *)&buf.DataType = 64LL;
      if ( v31->FxPoolTrackingOn )
        v32 = retaddr;
      else
        v32 = 0LL;
      v33 = (FxUsbRequestContext *)FxPoolAllocator(
                                     v31,
                                     &v31->FxPoolFrameworks,
                                     (FxPoolTypeOrPoolFlags *)&v64,
                                     0x88uLL,
                                     v31->Tag,
                                     v32);
      v30 = v33;
      if ( !v33 )
      {
        v24 = -1073741670;
LABEL_50:
        v27 = globals;
        goto LABEL_51;
      }
      FxUsbRequestContext::FxUsbRequestContext(v33, 0x11u);
      v30[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
      v30->__vftable = (FxRequestContext_vtbl *)FxUsbUrbContext::`vftable';
      FxRequestBase::SetContext(v20, v30);
    }
    v30->StoreAndReferenceMemory(v30, (FxRequestBuffer *)&buf.u);
    Buffer = v30[1].m_CompletionParams.Parameters.Write.Buffer;
    CurrentStackLocation = v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v36 = v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( m_ParentObject == 1 )
    {
      v40 = *(_DWORD *)(p_pRequest + 216);
      if ( v40 != -1 && v40 >= 0x602 )
        v36[-1].FileObject = (_FILE_OBJECT *)Buffer;
    }
    v36[-1].Parameters.WMI.ProviderId = (unsigned __int64)Buffer;
    v37 = v20->m_Globals;
    if ( v37->FxVerifierOn && v37->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(v20, 128);
    v24 = 0;
    v38 = v62->m_RequestContext;
    v38->m_CompletionParams.Type = WdfRequestTypeUsb;
    v38->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v38[1];
    HIDWORD(v38[1].__vftable) = 9;
    *(_QWORD *)&v38[1].m_CompletionParams.Size = UrbMemory;
    goto LABEL_50;
  }
  v56 = ((__int64 (__fastcall *)(FxUsbPipe *))pUsbPipe->~FxObject)(pUsbPipe);
  WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxUsbPipeAPI_cpp_Traceguids, (const void *)UrbMemory, v56, -1073741811);
  return 3221225485LL;
}
