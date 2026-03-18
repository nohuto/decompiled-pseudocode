/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x140008A18
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?InvokeCancel@FxRequestCancelCallback@@QEAAXPEAVFxCallbackLock@@PEAUWDFREQUEST__@@@Z @ 0x140008994 (-InvokeCancel@FxRequestCancelCallback@@QEAAXPEAVFxCallbackLock@@PEAUWDFREQUEST__@@@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x140008B84 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  __int64 v5; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  FxRequestBase *v11; // rsi
  WDFREQUEST__ *v12; // rbp
  const void *_a2; // rcx
  WDFREQUEST__ *_a1; // rax

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  v7 = (_QWORD **)(v5 + 272);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v11 = (FxRequestBase *)(v8 - 36);
    *(_QWORD *)(v9 + 8) = v10;
    v8[1] = v8;
    *v8 = v8;
    v12 = (WDFREQUEST__ *)((unsigned __int64)(v8 - 36) ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a1 = v12;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    if ( !v11->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x54u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql);
    if ( !v11->m_ObjectSize )
      v12 = 0LL;
    FxRequestCancelCallback::InvokeCancel(&v11->m_CancelRoutine, this->m_IoCancelCallbackLockPtr, v12);
    v11->Release(v11, (void *)1969583441, 4933, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql);
  }
  return 1;
}
