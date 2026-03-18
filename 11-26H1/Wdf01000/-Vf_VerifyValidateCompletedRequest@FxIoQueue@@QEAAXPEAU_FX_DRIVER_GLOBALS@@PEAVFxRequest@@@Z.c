/*
 * XREFs of ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DD7D4
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140037FB0 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140057060 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyValidateCompletedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request)
{
  char m_ObjectFlags; // al
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // r8
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rsi
  bool v14; // zf
  unsigned __int16 v15; // ax
  const void *_a1; // rdi
  unsigned __int8 irql; // [rsp+70h] [rbp+18h] BYREF

  m_ObjectFlags = Request->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Flink = Request[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)Request);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  FxRequest::VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  Request->m_VerifierFlags &= ~1u;
  FxNonPagedObject::Unlock(Request, v8, v9);
  if ( Request->m_OwnerListEntry.Flink != &Request->m_OwnerListEntry )
  {
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v14 = m_ObjectSize == 0;
    v15 = Request->m_ObjectSize;
    if ( v14 )
      _a2 = 0LL;
    _a1 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15 )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0xDu, 0x4Eu, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
}
