/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x14007A3DC
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x14007A3C0 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140004F04 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x140005314 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x140005360 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1400486F0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v7; // rcx
  FxRequestBase *_a2; // r8
  const void *_a1; // rdx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // si
  unsigned __int8 v13; // al
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v15; // edx
  unsigned __int8 v16; // r8
  _DEVICE_OBJECT *v17; // rcx
  signed __int32 v18; // et0
  bool v19; // bp
  unsigned __int8 v20; // al
  _IRP *m_Irp; // rcx
  _FX_DRIVER_GLOBALS *v22; // rcx
  unsigned __int64 v23; // r8
  FxRequestBase *v24; // rax
  const void *v25; // rdx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  irql = 0;
  v4 = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = Request;
    if ( !Request->m_ObjectSize )
      v7 = 0LL;
    if ( v7 )
      _a2 = (FxRequestBase *)v7;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, a3);
    v12 = irql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v12;
  }
  v13 = Request->m_TargetFlags & 0xFB;
  Request->m_TargetFlags = v13;
  if ( (v13 & 1) == 0 )
  {
    Request->m_TargetFlags = v13 | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v15 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v15 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, v12, v11);
    FxRequestBase::Cancel(Request);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v17 = this[-1].m_TargetDevice) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)v17, &irql, v16);
      v12 = irql;
    }
    else
    {
      v12 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  v18 = _InterlockedAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF);
  v19 = v18 == 0;
  if ( !v18 )
  {
    v20 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v20;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  FxNonPagedObject::Unlock(this, v12, v11);
  if ( v19 )
  {
    v22 = this->m_Globals;
    if ( v22->FxVerboseOn )
    {
      v23 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v24 = Request;
      if ( !Request->m_ObjectSize )
        v23 = 0LL;
      if ( v23 )
        v24 = (FxRequestBase *)v23;
      WPP_IFR_SF_q(v22, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, v24);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v4 )
  {
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v25, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v19 )
    FxIoTarget::DecrementIoCount(this);
}
