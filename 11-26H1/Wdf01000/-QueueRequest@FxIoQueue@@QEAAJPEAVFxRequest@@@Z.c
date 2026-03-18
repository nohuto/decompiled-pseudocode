/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002DF70 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1400312A0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qiid @ 0x14005646C (WPP_IFR_SF_qiid.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v6; // si
  unsigned __int8 v7; // r8
  _FX_IO_QUEUE_STATE m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v11; // r10
  FxDeviceBase *m_DeviceBase; // rbx
  _FX_DRIVER_GLOBALS *v13; // rcx
  char m_Globals_high; // al
  FxVerifierLock *v15; // rcx
  FxVerifierLock *v16; // rcx
  const void *_a1; // rbp
  const void *_a2; // rdx
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r8
  const void *v21; // r11
  const char *_a5; // r8
  const void *v23; // rdx
  const void *v24; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF

  Request = pRequest;
  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v15 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v15, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( pRequest->m_Reserved )
    FxObject::AddRef(
      pRequest,
      (void *)0x50647746,
      2311,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_QueueState = this->m_QueueState;
  if ( (m_QueueState & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = 0LL;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      if ( pRequest->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    }
    if ( pRequest->m_Globals->FxVerifierIO )
    {
      irql = 0;
      FxNonPagedObject::Lock(pRequest, &irql, v7);
      FxRequest::VerifyRequestIsNotCompleted(pRequest, pRequest->m_Globals);
      FxNonPagedObject::Unlock(pRequest, irql, v19);
    }
    pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( pRequest->m_Reserved && this->m_Dispatching )
    {
      FxIoQueue::InsertNewRequestLocked(this, &Request, v6);
      FxNonPagedObject::Unlock(this, v6, v20);
    }
    else
    {
      FxIoQueue::DispatchEvents(this, v6, pRequest);
    }
    return 259LL;
  }
  else
  {
    v11 = this->m_Globals;
    if ( v11->FxVerboseOn )
    {
      if ( pRequest->m_ObjectSize )
        v21 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      _a5 = "power stopping (Drain) in progress,";
      if ( (m_QueueState & 0x10000) == 0 )
        _a5 = a5;
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v23 = 0LL;
      WPP_IFR_SF_qLsqd(v11, 5u, (unsigned int)_a5, 0x29u, traceGuid, v23, m_QueueState, _a5, v21, -1073741436);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v16 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v16, v6, v7);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v6);
    }
    pRequest->m_Irp.m_Irp->IoStatus.Information = 0LL;
    m_DeviceBase = pRequest->m_DeviceBase;
    v13 = pRequest->m_Globals;
    if ( v13->FxVerboseOn )
    {
      v24 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v24 = 0LL;
      WPP_IFR_SF_qiid(
        v13,
        5u,
        0x10u,
        0xBu,
        WPP_FxRequest_hpp_Traceguids,
        v24,
        pRequest->m_Irp.m_Irp,
        pRequest->m_Irp.m_Irp->IoStatus.Information,
        -1073741436);
    }
    if ( m_DeviceBase )
      m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
    else
      m_Globals_high = 0;
    pRequest->m_PriorityBoost = m_Globals_high;
    FxRequest::CompleteInternal(pRequest, -1073741436);
    pRequest->Release(
      pRequest,
      (void *)1886220099,
      2338,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    return 3221225860LL;
  }
}
