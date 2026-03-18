/*
 * XREFs of ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x14007FF50
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14000EBE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140053D90 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1400A1FA4 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, FxRequest **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // edi
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  int v9; // eax
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  _WDF_IO_FORWARD_PROGRESS_ACTION (__fastcall *Method)(WDFQUEUE__ *, _IRP *); // rax
  const void *v13; // rbp
  unsigned __int64 v14; // rcx
  KIRQL v15; // r12
  _LIST_ENTRY *p_m_ReservedRequestList; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v18; // rax
  FxRequest *v19; // rbp
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v22; // rcx
  unsigned __int8 v23; // r8

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
    goto LABEL_19;
  if ( m_FwdProgContext->m_Policy != WdfIoForwardProgressReservedPolicyUseExamine )
  {
    if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyPagingIO )
    {
      if ( (Irp->Flags & 2) == 0 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
        v9 = 1;
      else
        v9 = 2;
      goto LABEL_7;
    }
LABEL_19:
    v15 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
    Flink = p_m_ReservedRequestList->Flink;
    if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
    {
      v5 = FxIoQueue::QueueForwardProgressIrpLocked(this, Irp);
    }
    else
    {
      if ( Flink->Blink != p_m_ReservedRequestList
        || (v18 = Flink->Flink, Flink->Flink->Blink != Flink)
        || (p_m_ReservedRequestList->Flink = v18,
            v19 = (FxRequest *)&Flink[-20],
            v18->Blink = p_m_ReservedRequestList,
            p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList,
            Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink,
            Blink->Flink != p_m_ReservedRequestInUseList) )
      {
        __fastfail(3u);
      }
      Flink->Flink = p_m_ReservedRequestInUseList;
      Flink->Blink = Blink;
      Blink->Flink = Flink;
      p_m_ReservedRequestInUseList->Blink = Flink;
      v19->m_Irp.m_Irp = Irp;
      FxRequest::AssignMemoryBuffers((FxRequest *)&Flink[-20], (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v22, 1024, v23);
      *ReservedRequest = v19;
    }
    KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v15);
    return v5;
  }
  Method = m_FwdProgContext->m_IoExamineIrp.Method;
  if ( !Method )
    goto LABEL_19;
  v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !this->m_ObjectSize )
    v14 = 0LL;
  v9 = Method((WDFQUEUE__ *)v14, Irp);
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
LABEL_7:
    if ( v9 == 1 )
    {
      m_ObjectSize = this->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      v5 = -1073741823;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueKm_cpp_Traceguids, _a1, Irp, 0xC0000001);
      return v5;
    }
    goto LABEL_19;
  }
  if ( !this->m_ObjectSize )
    v13 = 0LL;
  v5 = -1073741823;
  WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v13, v9, -1073741823);
  FxVerifierDbgBreakPoint(m_Globals);
  return v5;
}
