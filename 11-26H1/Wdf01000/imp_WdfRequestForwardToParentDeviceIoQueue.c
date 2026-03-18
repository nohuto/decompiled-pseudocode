/*
 * XREFs of imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14004F480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14004FCF0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x14004FD0C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDDd @ 0x140092DAC (WPP_IFR_SF_qDDd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1400E5A58 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 */

__int64 __fastcall imp_WdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  __int64 v7; // rax
  FxIoQueue *flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v10; // rax
  FxRequest *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  FxIoQueue_vtbl *v16; // rax
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  FxRequest_vtbl *v19; // rax
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  FxIoQueue *CurrentQueue; // rax
  _WDF_REQUEST_FORWARD_OPTIONS *v23; // r9
  const _GUID *_a1; // [rsp+20h] [rbp-50h]
  unsigned int id; // [rsp+40h] [rbp-30h]
  FxRequest *v26; // [rsp+50h] [rbp-20h] BYREF
  FxIoQueue **p_queue; // [rsp+58h] [rbp-18h] BYREF
  __int16 v28; // [rsp+60h] [rbp-10h]
  __int16 v29; // [rsp+62h] [rbp-Eh]
  int v30; // [rsp+64h] [rbp-Ch]
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxIoQueue *queue; // [rsp+B0h] [rbp+40h] BYREF

  if ( !ParentDeviceQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v7) = 0;
  flags = (FxIoQueue *)(~ParentDeviceQueue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (ParentDeviceQueue & 1) != 0 )
  {
    v7 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxIoQueue *)((char *)flags - v7);
  }
  if ( flags->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = flags;
  }
  else
  {
    v29 = v7;
    queue = 0LL;
    v30 = 0;
    v16 = flags->FxNonPagedObject::FxObject::__vftable;
    p_queue = &queue;
    v28 = 4099;
    if ( v16->QueryInterface(flags, (FxQueryInterfaceParams *)&p_queue) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        Request,
        v17,
        v18,
        _a1,
        (const void *)ParentDeviceQueue,
        0x1003u,
        flags,
        flags->FxNonPagedObject::FxObject::m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, ParentDeviceQueue, 0x1003uLL);
    }
    flags = queue;
  }
  m_Globals = flags->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v10) = 0;
  v11 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v10 = LOWORD(v11->__vftable);
    v11 = (FxRequest *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4104 )
  {
    v26 = v11;
  }
  else
  {
    v29 = v10;
    v26 = 0LL;
    v30 = 0;
    v19 = v11->__vftable;
    p_queue = (FxIoQueue **)&v26;
    v28 = 4104;
    if ( v19->QueryInterface(v11, (FxQueryInterfaceParams *)&p_queue) < 0 )
    {
      WPP_IFR_SF_qDqD(v11->m_Globals, Request, v20, v21, _a1, (const void *)Request, 0x1008u, v11, v11->m_Type);
      FxVerifierBugCheckWorker(v11->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v11 = v26;
    flags = queue;
  }
  if ( !ForwardOptions )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( ForwardOptions->Size != 8 )
  {
    v13 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      Request,
      6u,
      0x4Au,
      WPP_FxRequestApi_cpp_Traceguids,
      ForwardOptions,
      8,
      ForwardOptions->Size,
      -1073741820);
    return v13;
  }
  v12 = ForwardOptions->Flags;
  if ( (v12 & 0xFFFFFFFE) != 0 )
  {
    v13 = -1073741811;
    WPP_IFR_SF_qDDd(m_Globals, Request, 6u, 0x4Bu, WPP_FxRequestApi_cpp_Traceguids, ForwardOptions, v12, 1u, id);
    return v13;
  }
  if ( !v11->m_Completed && v11->m_IoQueue )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v11);
    return (unsigned int)FxIoQueue::ForwardRequestToParent(CurrentQueue, flags, v11, v23);
  }
  if ( !m_Globals->FxVerifierOn )
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(flags, v11, 1u);
  v13 = Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(m_Globals, v11);
  if ( (v13 & 0x80000000) == 0 )
  {
    v11 = v26;
    flags = queue;
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(flags, v11, 1u);
  }
  return v13;
}
