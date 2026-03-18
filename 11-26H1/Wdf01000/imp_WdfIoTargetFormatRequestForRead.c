/*
 * XREFs of imp_WdfIoTargetFormatRequestForRead @ 0x14002D0F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14002BD00 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDq @ 0x14009B620 (WPP_IFR_SF_qqDq.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned __int64 OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets,
        _LARGE_INTEGER *DeviceOffset)
{
  __int64 v6; // rax
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 v12; // rax
  FxRequestBase *v13; // rbx
  _WDFMEMORY_OFFSET *v14; // rdi
  unsigned int v15; // ebx
  _FX_DRIVER_GLOBALS **v16; // rcx
  FxRequestContext *m_RequestContext; // rsi
  __int64 v19; // rax
  _FX_DRIVER_GLOBALS **v20; // rbx
  _MDL *v21; // rax
  FxIoTarget_vtbl *v22; // rax
  FxRequestBase_vtbl *v23; // rax
  unsigned __int8 v24; // dl
  unsigned int v25; // r8d
  unsigned __int16 v26; // r9
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v28; // rsi
  _FX_DRIVER_GLOBALS *v29; // rax
  unsigned __int8 v30; // dl
  unsigned int v31; // r8d
  unsigned __int16 v32; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  FxRequestBase *v34; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v35; // [rsp+58h] [rbp-21h] BYREF
  __int16 v36; // [rsp+60h] [rbp-19h]
  __int16 v37; // [rsp+62h] [rbp-17h]
  int v38; // [rsp+64h] [rbp-15h]
  FxRequestBuffer IoBuffer; // [rsp+68h] [rbp-11h] BYREF
  _FX_DRIVER_GLOBALS **v40; // [rsp+D0h] [rbp+57h] BYREF
  FxIoTarget *v41; // [rsp+D8h] [rbp+5Fh] BYREF

  LOWORD(v6) = 0;
  IoBuffer.DataType = FxRequestBufferUnspecified;
  memset(&IoBuffer.u, 0, sizeof(IoBuffer.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4608 )
  {
    v41 = flags;
  }
  else
  {
    v37 = v6;
    v41 = 0LL;
    v38 = 0;
    v22 = flags->__vftable;
    v35 = &v41;
    v36 = 4608;
    if ( v22->QueryInterface(flags, (FxQueryInterfaceParams *)&v35) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        IoTarget,
        Request,
        OutputBuffer,
        traceGuid,
        (const void *)IoTarget,
        0x1200u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
  }
  m_Globals = v41->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDq(
      m_Globals,
      IoTarget,
      Request,
      OutputBuffer,
      traceGuid,
      (const void *)IoTarget,
      (const void *)Request,
      3u,
      (const void *)OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v12) = 0;
  v13 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v12 = LOWORD(v13->__vftable);
    v13 = (FxRequestBase *)((char *)v13 - v12);
  }
  if ( v13->m_Type == 4104 )
  {
    v34 = v13;
  }
  else
  {
    v37 = v12;
    v34 = 0LL;
    v38 = 0;
    v23 = v13->__vftable;
    v35 = &v34;
    v36 = 4104;
    if ( v23->QueryInterface(v13, (FxQueryInterfaceParams *)&v35) < 0 )
    {
      WPP_IFR_SF_qDqD(v13->m_Globals, v24, v25, v26, traceGuid, (const void *)Request, 0x1008u, v13, v13->m_Type);
      FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v14 = OutputBufferOffsets;
  if ( OutputBuffer )
  {
    LOWORD(v19) = 0;
    v20 = (_FX_DRIVER_GLOBALS **)(~OutputBuffer & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (OutputBuffer & 1) != 0 )
    {
      v19 = *(unsigned __int16 *)v20;
      v20 = (_FX_DRIVER_GLOBALS **)((char *)v20 - v19);
    }
    if ( *((_WORD *)v20 + 4) == 4106 )
    {
      v40 = v20;
    }
    else
    {
      v37 = v19;
      v40 = 0LL;
      v38 = 0;
      v29 = *v20;
      v35 = &v40;
      v36 = 4106;
      if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _QWORD **))v29->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
             v20,
             &v35) < 0 )
      {
        WPP_IFR_SF_qDqD(
          v20[2],
          v30,
          v31,
          v32,
          traceGuid,
          (const void *)OutputBuffer,
          0x100Au,
          v20,
          *((unsigned __int16 *)v20 + 4));
        FxVerifierBugCheckWorker(v20[2], WDF_INVALID_HANDLE, OutputBuffer, 0x100AuLL);
      }
      v20 = v40;
    }
    if ( v14 )
    {
      BufferLength = v14->BufferLength;
      v28 = BufferLength + v14->BufferOffset;
      if ( v28 < BufferLength || v28 > ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v20)->Linkage.Blink)(v20) )
      {
        v15 = -1073741675;
        WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC0000095);
        return v15;
      }
      v20 = v40;
    }
    v21 = (_MDL *)(*(__int64 (__fastcall **)(_FX_DRIVER_GLOBALS **))&(*v20)->Refcnt)(v20);
    IoBuffer.u.Memory.Memory = (IFxMemory *)v20;
    IoBuffer.u.Memory.Offsets = v14;
    if ( v21 )
    {
      IoBuffer.DataType = FxRequestBufferReferencedMdl;
      IoBuffer.u.RefMdl.Mdl = v21;
    }
    else
    {
      IoBuffer.DataType = FxRequestBufferMemory;
    }
  }
  else
  {
    v40 = 0LL;
  }
  v15 = FxIoTarget::FormatIoRequest(v41, v34, 3u, &IoBuffer, DeviceOffset);
  if ( (v15 & 0x80000000) == 0 )
  {
    v16 = v40;
    m_RequestContext = v34->m_RequestContext;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeRead;
    if ( v16 )
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (*(__int64 (__fastcall **)(_FX_DRIVER_GLOBALS **))&(*v16)->DestroyEvent.m_Event.Header.Lock)(v16);
    if ( v14 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v14->BufferOffset;
    else
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = 0LL;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqd(
      m_Globals,
      5u,
      0xEu,
      0x23u,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      (const void *)IoTarget,
      (const void *)Request,
      v15);
  return v15;
}
