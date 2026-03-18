/*
 * XREFs of ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DD978
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140011D60 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD694 (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyGetRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  unsigned __int8 v9; // r8
  int IsTagRequest; // ebp
  FxVerifierLock *v11; // rcx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // di
  const void *v14; // rdx
  unsigned __int8 irql; // [rsp+70h] [rbp+18h] BYREF

  irql = 0;
  if ( TagRequest )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu) )
    {
      if ( this->m_Type != WdfIoQueueDispatchManual )
      {
        m_ObjectSize = this->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x18u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
        FxVerifierDbgBreakPoint(FxDriverGlobals);
        return 3221225488LL;
      }
    }
    else
    {
      FxNonPagedObject::Lock(TagRequest, &irql, (unsigned __int8)TagRequest);
      if ( FxDriverGlobals->FxVerifierOn )
        IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
      else
        IsTagRequest = 0;
      FxNonPagedObject::Unlock(TagRequest, irql, v9);
      if ( IsTagRequest < 0 )
        return (unsigned int)IsTagRequest;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v11 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v11, &irql, (unsigned __int8)TagRequest);
    v13 = irql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_Type == WdfIoQueueDispatchSequential && !this->m_DriverIoCount )
  {
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x19u, WPP_FxIoQueue_cpp_Traceguids, v14);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, v13, v12);
  return 0LL;
}
