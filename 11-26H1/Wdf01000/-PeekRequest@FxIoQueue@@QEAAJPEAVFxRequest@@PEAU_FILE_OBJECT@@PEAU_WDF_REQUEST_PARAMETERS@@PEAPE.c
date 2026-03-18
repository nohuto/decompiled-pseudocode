/*
 * XREFs of ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x140054A08
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1400548B0 (imp_WdfIoQueueFindRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x140054BC8 (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x140054CC0 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DD5FC (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::PeekRequest(
        FxIoQueue *this,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  bool v6; // zf
  unsigned __int8 v11; // r15
  int v12; // eax
  unsigned __int8 v13; // r8
  FxRequest *v14; // r14
  int v15; // edi
  int result; // eax
  FxVerifierLock *v17; // rcx
  const void *_a1; // rbx
  FxRequest *pRequest; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v6 = this->m_Type == WdfIoQueueDispatchManual;
  pRequest = 0LL;
  irql = 0;
  if ( !v6 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    v15 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v15;
  }
  if ( !TagRequest
    || !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyPeekRequest(this, m_Globals, TagRequest), result >= 0) )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v17 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v17, &irql, (unsigned __int8)FileObject);
      v11 = irql;
    }
    else
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    v12 = FxIrpQueue::PeekRequest(
            &this->m_Queue,
            (_IO_CSQ_IRP_CONTEXT *)((unsigned __int64)&TagRequest->120 & -(__int64)(TagRequest != 0LL)),
            FileObject,
            &pRequest);
    v14 = pRequest;
    v15 = v12;
    if ( v12 >= 0 )
    {
      if ( !Parameters )
      {
LABEL_9:
        FxNonPagedObject::Unlock(this, v11, v13);
        if ( v15 >= 0 )
        {
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags(v14, 2);
          *pOutRequest = v14;
        }
        return v15;
      }
      v15 = FxRequest::GetParameters(pRequest, Parameters);
    }
    if ( v15 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
    goto LABEL_9;
  }
  return result;
}
