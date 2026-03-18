/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x140015F10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x140010A40 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ??0FxRequestBuffer@@QEAA@XZ @ 0x140016B84 (--0FxRequestBuffer@@QEAA@XZ.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x140016BA4 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDqqq @ 0x14009B730 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x14009B880 (WPP_IFR_SF_qqDqqqd.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offsets,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offsets,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offsets)
{
  FxRequestBuffer *v10; // rbx
  __int64 v14; // rdi
  unsigned int v15; // r8d
  WDFMEMORY__ *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  FxIoTarget *v19; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v21; // rax
  FxRequest *flags; // rbx
  __int64 v23; // r9
  unsigned int v24; // r14d
  WDFMEMORY__ *v25; // r8
  int v26; // eax
  FxRequestContext *m_RequestContext; // rdx
  unsigned int v28; // r8d
  unsigned __int16 v29; // r9
  void *v30; // r13
  unsigned int v31; // ebx
  void *v32; // rdi
  bool v33; // sf
  void *v34; // rax
  IFxMemory **v36; // rbx
  FxObject *v37; // rcx
  __int64 v38; // rax
  _WDFMEMORY_OFFSET *v39; // r13
  IFxMemory *v40; // rcx
  IFxMemory *v41; // rbx
  _MDL *v42; // rax
  __int64 v43; // rdi
  FxIoTarget_vtbl *v44; // rax
  int v45; // eax
  unsigned __int16 v46; // r9
  FxRequest_vtbl *v47; // rax
  int v48; // eax
  unsigned int v49; // r8d
  unsigned __int16 v50; // r9
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v52; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  void *p_pTarget; // [rsp+68h] [rbp-98h] BYREF
  __int16 v56; // [rsp+70h] [rbp-90h]
  __int16 v57; // [rsp+72h] [rbp-8Eh]
  int v58; // [rsp+74h] [rbp-8Ch]
  FxIoTarget *pTarget; // [rsp+78h] [rbp-88h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp-80h] BYREF
  void *v61; // [rsp+88h] [rbp-78h]
  void *v62; // [rsp+90h] [rbp-70h]
  void *v63; // [rsp+98h] [rbp-68h]
  WDFMEMORY__ *memoryHandles[3]; // [rsp+A0h] [rbp-60h]
  _WDFMEMORY_OFFSET *offsets[3]; // [rsp+B8h] [rbp-48h]
  IFxMemory *pMemory[3]; // [rsp+D0h] [rbp-30h] BYREF
  FxRequestBuffer args[3]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = args;
  v61 = OtherArg4;
  v62 = OtherArg1;
  v63 = OtherArg2;
  memset(pMemory, 0, sizeof(pMemory));
  v14 = 3LL;
  do
  {
    FxRequestBuffer::FxRequestBuffer(v10++);
    --v14;
  }
  while ( v14 );
  v16 = (WDFMEMORY__ *)v62;
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v17 = 0LL;
  LOWORD(v18) = 0;
  v19 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v18 = LOWORD(v19->__vftable);
    v19 = (FxIoTarget *)((char *)v19 - v18);
  }
  if ( v19->m_Type == 4608 )
  {
    pTarget = v19;
  }
  else
  {
    v57 = v18;
    pTarget = 0LL;
    v58 = 0;
    v44 = v19->__vftable;
    p_pTarget = &pTarget;
    v56 = 4608;
    v45 = v44->QueryInterface(v19, (FxQueryInterfaceParams *)&p_pTarget);
    v17 = 0LL;
    if ( v45 < 0 )
    {
      WPP_IFR_SF_qDqD(v19->m_Globals, 0, v15, v46, traceGuid, (const void *)IoTarget, 0x1200u, v19, v19->m_Type);
      FxVerifierBugCheckWorker(v19->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    v19 = pTarget;
  }
  m_Globals = v19->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_qqDqqq(
      m_Globals,
      0,
      v15,
      0x37u,
      traceGuid,
      (const void *)IoTarget,
      (const void *)Request,
      Ioctl,
      v16,
      OtherArg2,
      v61);
    v17 = 0LL;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v21) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v21 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v21);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    v57 = v21;
    pRequest = 0LL;
    v58 = 0;
    v47 = flags->__vftable;
    p_pTarget = &pRequest;
    v56 = 4104;
    v48 = v47->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget);
    v17 = 0LL;
    if ( v48 < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, 0, v49, v50, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v23 = 4106LL;
  offsets[0] = OtherArg1Offsets;
  offsets[1] = OtherArg2Offsets;
  memoryHandles[1] = OtherArg2;
  v24 = 0;
  offsets[2] = OtherArg4Offsets;
  memoryHandles[0] = v16;
  memoryHandles[2] = (WDFMEMORY__ *)v61;
  while ( v24 < 3 )
  {
    v25 = memoryHandles[v24];
    if ( v25 )
    {
      v36 = &pMemory[v24];
      v37 = (FxObject *)(~(unsigned __int64)v25 & 0xFFFFFFFFFFFFFFF8uLL);
      LOWORD(v38) = 0;
      if ( ((unsigned __int8)v25 & 1) != 0 )
      {
        v38 = LOWORD(v37->__vftable);
        v37 = (FxObject *)((char *)v37 - v38);
      }
      if ( v37->m_Type == 4106 )
        *v36 = (IFxMemory *)v37;
      else
        FxObjectHandleGetPtrQI(v37, (void **)&pMemory[v24], v25, 0x100Au, v38);
      v39 = offsets[v24];
      v40 = *v36;
      if ( v39 )
      {
        BufferLength = v39->BufferLength;
        p_pTarget = (void *)(BufferLength + v39->BufferOffset);
        if ( (unsigned __int64)p_pTarget < BufferLength
          || (v52 = ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64, WDFMEMORY__ *, __int64))v40->GetBufferSize)(
                      v40,
                      BufferLength,
                      v25,
                      v23),
              (unsigned __int64)p_pTarget > v52) )
        {
          v31 = -1073741675;
          WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x38u, WPP_FxIoTargetAPI_cpp_Traceguids, v24 + 1, -1073741675);
          return v31;
        }
      }
      v41 = *v36;
      v42 = (_MDL *)((__int64 (__fastcall *)(IFxMemory *, __int64, WDFMEMORY__ *, __int64))v41->GetMdl)(
                      v41,
                      v17,
                      v25,
                      v23);
      v43 = v24;
      v17 = 0LL;
      v23 = 4106LL;
      args[v43].u.Memory.Memory = v41;
      args[v43].u.Memory.Offsets = v39;
      if ( v42 )
      {
        args[v24].DataType = FxRequestBufferReferencedMdl;
        args[v24].u.RefMdl.Mdl = v42;
      }
      else
      {
        args[v24].DataType = FxRequestBufferMemory;
      }
    }
    ++v24;
  }
  v26 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, pRequest, Ioctl, args);
  v30 = v62;
  v31 = v26;
  v32 = v61;
  v33 = v26 < 0;
  v34 = v63;
  if ( !v33 )
  {
    m_RequestContext = pRequest->m_RequestContext;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeOther;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)v30;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)v34;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)v32;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqqd(
      m_Globals,
      (unsigned __int8)m_RequestContext,
      v28,
      v29,
      traceGuid,
      (const void *)IoTarget,
      (const void *)Request,
      Ioctl,
      v30,
      v34,
      v32,
      v31);
  return v31;
}
