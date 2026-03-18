/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400481E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1400486F0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1400489BC (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x14009C0A0 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rbx
  char v5; // r14
  char v6; // bp
  unsigned __int8 v7; // r8
  KIRQL v8; // r15
  _FX_DRIVER_GLOBALS *v9; // r10
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v11; // rax
  _IRP *v12; // rcx
  unsigned __int8 m_TargetFlags; // r14
  _FX_DRIVER_GLOBALS *v14; // rax
  FxRequestBase *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int8 v18; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 FxVerboseOn; // dl
  FxVerifierLock *m_TargetDevice; // rcx
  FxVerifierLock *v22; // rcx
  _FX_DRIVER_GLOBALS *v23; // r10
  FxRequestBase *v24; // rax
  unsigned __int64 v25; // rcx
  _IRP *m_Irp; // rax
  FxRequestBase *_a2; // rdx
  unsigned __int64 v28; // rcx
  const void *v29; // rcx
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // r8
  FxIoTarget_vtbl *v32; // rax
  FxRequestBase *v33; // rax
  unsigned __int64 v34; // rcx
  const void *v35; // rcx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine
    && Irp->PendingReturned
    && Irp->CurrentLocation <= Irp->StackCount )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  PreviousIrql = 0;
  if ( m_Target->m_Globals->FxVerboseOn )
  {
    v24 = Context;
    v25 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Context->m_ObjectSize )
      v25 = 0LL;
    if ( v25 )
      v24 = (FxRequestBase *)v25;
    WPP_IFR_SF_q(m_Target->m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, v24);
  }
  v5 = 0;
  v6 = 0;
  if ( SLOBYTE(m_Target->m_ObjectFlags) < 0 && (m_TargetDevice = (FxVerifierLock *)m_Target[-1].m_TargetDevice) != 0LL )
  {
    FxVerifierLock::Lock(m_TargetDevice, &PreviousIrql, (unsigned __int8)Context);
    v8 = PreviousIrql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&m_Target->m_NPLock.m_Lock);
  }
  Context->m_TargetFlags |= 1u;
  if ( (Context->m_TargetFlags & 4) != 0 )
  {
    v18 = MxTimer::Stop(&Context->m_Timer->Timer);
    m_Globals = Context->m_Globals;
    FxVerboseOn = m_Globals->FxVerboseOn;
    if ( !v18 )
    {
      if ( FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x14u, WPP_FxRequestBase_cpp_Traceguids, Context);
      goto LABEL_30;
    }
    if ( FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x15u, WPP_FxRequestBase_cpp_Traceguids, Context);
    Context->m_TargetFlags &= ~4u;
  }
  if ( _InterlockedExchangeAdd(&Context->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 1 )
  {
LABEL_30:
    v16 = Context;
    v17 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Context->m_ObjectSize )
      v17 = 0LL;
    if ( v17 )
      v16 = (FxRequestBase *)v17;
    WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, v16);
    goto LABEL_18;
  }
  v6 = 1;
  if ( (Context->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Context->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v9 = m_Target->m_Globals;
  if ( v9->FxVerboseOn )
  {
    _a2 = Context;
    v28 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Context->m_ObjectSize )
      v28 = 0LL;
    if ( v28 )
      _a2 = (FxRequestBase *)v28;
    v29 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_Target->m_ObjectSize )
      v29 = 0LL;
    WPP_IFR_SF_qq(v9, 5u, 0xEu, 0x28u, WPP_FxIoTarget_cpp_Traceguids, v29, _a2);
  }
  Flink = Context->m_ListEntry.Flink;
  v11 = (_LIST_ENTRY *)&Context->120;
  if ( ($87BF65E0DFCCE0C1CCAAC6538D1C71CB *)Flink->Blink != &Context->120
    || (v12 = Context->m_CsqContext.Irp, *(_LIST_ENTRY **)&v12->Type != v11) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&v12->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)v12;
  Context->m_CsqContext.Irp = (_IRP *)&Context->120;
  v11->Flink = v11;
  m_TargetFlags = Context->m_TargetFlags;
  Context->m_TargetFlags = m_TargetFlags & 0xE2;
  v14 = m_Target->m_Globals;
  if ( v14->FxVerifierOn && v14->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(Context, &PreviousIrql, v7);
    v30 = PreviousIrql;
    Context->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Context, v30, v31);
  }
  if ( m_Target->m_Removing )
  {
    if ( m_Target->m_SentIoListHead.Flink == &m_Target->m_SentIoListHead
      && m_Target->m_IgnoredIoListHead.Flink == &m_Target->m_IgnoredIoListHead )
    {
      v32 = m_Target->__vftable;
      m_Target->m_Removing = 0;
      v32->ClearTargetPointers(m_Target);
      v5 = 1;
      goto LABEL_18;
    }
  }
  else if ( m_Target->m_WaitingForSentIo
         && (m_TargetFlags & 0x10) == 0
         && m_Target->m_SentIoListHead.Flink == &m_Target->m_SentIoListHead )
  {
    m_Target->m_WaitingForSentIo = 0;
    v5 = 1;
    goto LABEL_18;
  }
  v5 = 0;
LABEL_18:
  if ( SLOBYTE(m_Target->m_ObjectFlags) < 0 && (v22 = (FxVerifierLock *)m_Target[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Unlock(v22, v8, v7);
  else
    KeReleaseSpinLock(&m_Target->m_NPLock.m_Lock, v8);
  if ( v6 )
  {
    if ( m_Target->m_Globals->FxVerboseOn )
    {
      v33 = Context;
      v34 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Context->m_ObjectSize )
        v34 = 0LL;
      if ( v34 )
        v33 = (FxRequestBase *)v34;
      WPP_IFR_SF_q(m_Target->m_Globals, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v33);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v5 )
  {
    v23 = m_Target->m_Globals;
    if ( v23->FxVerboseOn )
    {
      v35 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Target->m_ObjectSize )
        v35 = 0LL;
      WPP_IFR_SF_qq(v23, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v35, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v6 && _InterlockedExchangeAdd(&m_Target->m_IoCount, 0xFFFFFFFF) == 1 )
  {
    FxIoTarget::PrintDisposeMessage(m_Target);
    KeSetEvent(&m_Target->m_DisposeEvent->m_Event.m_Event, 0, 0);
  }
  return 3221225494LL;
}
