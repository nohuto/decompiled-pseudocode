/*
 * XREFs of ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1400173B4
 * Callers:
 *     imp_WdfUsbTargetPipeReadSynchronously @ 0x14006B9F0 (imp_WdfUsbTargetPipeReadSynchronously.c)
 *     imp_WdfUsbTargetPipeWriteSynchronously @ 0x14006F400 (imp_WdfUsbTargetPipeWriteSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1400176F0 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1400177F0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x140017B7C (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x140028650 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxUsbPipe::_SendTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred,
        unsigned int Flags)
{
  __int64 v8; // rax
  FxUsbPipe *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v13; // edi
  FxRequestBase *v14; // r8
  FxUsbPipe_vtbl *v16; // rax
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  const void *m_TrueRequest; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxUsbPipe *pUsbPipe; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipe **p_pUsbPipe; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v23; // [rsp+60h] [rbp-A0h]
  __int16 v24; // [rsp+62h] [rbp-9Eh]
  int v25; // [rsp+64h] [rbp-9Ch]
  FxRequestBuffer buf; // [rsp+68h] [rbp-98h] BYREF
  FxSyncRequest v27; // [rsp+90h] [rbp-70h] BYREF
  FxUsbPipeTransferContext context; // [rsp+1C0h] [rbp+C0h] BYREF

  LOWORD(v8) = 0;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  if ( !Pipe )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  flags = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Pipe & 1) != 0 )
  {
    v8 = LOWORD(flags->__vftable);
    flags = (FxUsbPipe *)((char *)flags - v8);
  }
  if ( flags->m_Type == 4611 )
  {
    pUsbPipe = flags;
  }
  else
  {
    v24 = v8;
    pUsbPipe = 0LL;
    v25 = 0;
    v16 = flags->__vftable;
    p_pUsbPipe = &pUsbPipe;
    v23 = 4611;
    if ( v16->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbPipe) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, 0, v17, v18, traceGuid, (const void *)Pipe, 0x1203u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Pipe, 0x1203uLL);
    }
    flags = pUsbPipe;
  }
  m_Globals = flags->m_Globals;
  context.m_RequestType = 16;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  context.m_CompletionParams.Type = WdfRequestTypeUsb;
  context.m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&context.m_UsbParameters;
  context.__vftable = (FxUsbPipeTransferContext_vtbl *)FxUsbPipeTransferContext::`vftable';
  context.m_UnlockPages = 0;
  context.m_PartialMdl = 0LL;
  memset(&context.m_UsbParameters, 0, 40);
  context.m_Urb = &context.m_UrbLegacy;
  context.m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
  FxSyncRequest::FxSyncRequest(&v27, m_Globals, &context, Request);
  if ( BytesTransferred )
    *BytesTransferred = 0;
  v13 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v13 >= 0 )
  {
    v13 = FxValidateRequestOptions(m_Globals, RequestOptions, v14);
    if ( v13 >= 0 )
    {
      if ( !MemoryDescriptor
        || (v13 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 0), v13 >= 0) )
      {
        v13 = FxUsbPipe::FormatTransferRequest(pUsbPipe, v27.m_TrueRequest, &buf, Flags);
        if ( v13 >= 0 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            if ( !v27.m_TrueRequest->m_ObjectSize
              || (m_TrueRequest = (const void *)((unsigned __int64)v27.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
            {
              m_TrueRequest = v27.m_TrueRequest;
            }
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxUsbPipe_cpp_Traceguids, (const void *)Pipe, m_TrueRequest);
          }
          v13 = FxIoTarget::SubmitSync(pUsbPipe, v27.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesTransferred )
            *BytesTransferred = context.m_Urb->TransferBufferLength;
        }
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x20u, WPP_FxUsbPipe_cpp_Traceguids, (const void *)Pipe, v13);
      }
    }
  }
  FxSyncRequest::~FxSyncRequest(&v27);
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(&context);
  return (unsigned int)v13;
}
