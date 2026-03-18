/*
 * XREFs of ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x14009BF1C
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004A10 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x140005314 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x140005360 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1400486F0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::HandleFailedResubmit(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  FxRequestBase *_a1; // rax
  _IRP *m_Irp; // rax
  unsigned __int8 v10; // r14
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *v12; // rcx
  FxRequestBase *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // rcx
  const void *v15; // r10
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  v6 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( m_Globals->FxVerboseOn )
  {
    v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v7 = 0LL;
    _a1 = Request;
    if ( v7 )
      _a1 = (FxRequestBase *)v7;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v10 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
  FxNonPagedObject::Unlock(this, irql, v11);
  v12 = this->m_Globals;
  if ( v12->FxVerboseOn )
  {
    v13 = Request;
    if ( !Request->m_ObjectSize )
      v6 = 0LL;
    if ( v6 )
      v13 = (FxRequestBase *)v6;
    WPP_IFR_SF_q(v12, 5u, 0xEu, 0x2Fu, WPP_FxIoTarget_cpp_Traceguids, v13);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v10 )
  {
    v14 = this->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qq(v14, 5u, 0xEu, 0x30u, WPP_FxIoTarget_cpp_Traceguids, v15, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
