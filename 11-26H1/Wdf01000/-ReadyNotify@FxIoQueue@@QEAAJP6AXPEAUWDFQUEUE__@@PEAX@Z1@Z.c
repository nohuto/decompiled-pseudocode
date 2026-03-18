/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140073A94
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x140073A40 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  bool v4; // zf
  void *v5; // r14
  unsigned __int8 v8; // si
  unsigned __int8 v9; // r8
  unsigned __int16 v10; // r9
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  unsigned int v13; // edi
  FxVerifierLock *v14; // rcx
  const void *_a1; // rbx
  unsigned __int16 v16; // r9
  const void *v17; // rcx
  const void *v18; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = this->m_Type == WdfIoQueueDispatchManual;
  v5 = Context;
  irql = 0;
  if ( !v4 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = -1073741808;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v13;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v14 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v14, &irql, (unsigned __int8)Context);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( !this->m_Deleted )
  {
    Method = this->m_ReadyNotify.Method;
    if ( QueueReady )
    {
      if ( !Method )
      {
LABEL_7:
        this->m_ReadyNotify.Method = QueueReady;
        this->m_ReadyNotifyContext = v5;
        FxIoQueue::DispatchEvents(this, v8, 0LL, v10);
        return 0LL;
      }
      v16 = 61;
    }
    else
    {
      if ( !Method )
      {
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v13 = -1073741808;
        if ( !this->m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v17, -1073741808);
        goto LABEL_26;
      }
      if ( (this->m_QueueState & 2) == 0 )
      {
        v5 = 0LL;
        QueueReady = 0LL;
        goto LABEL_7;
      }
      v16 = 63;
    }
    v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = -1073741808;
    if ( !this->m_ObjectSize )
      v18 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, v16, WPP_FxIoQueue_cpp_Traceguids, v18, &this->m_ReadyNotify, 0xC0000010);
LABEL_26:
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_9;
  }
  v13 = -1073741738;
LABEL_9:
  FxNonPagedObject::Unlock(this, v8, v9);
  return v13;
}
