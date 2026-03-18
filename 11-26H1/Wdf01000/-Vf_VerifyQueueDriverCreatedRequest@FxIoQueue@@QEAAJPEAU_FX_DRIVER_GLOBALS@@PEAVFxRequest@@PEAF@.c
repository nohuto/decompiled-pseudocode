/*
 * XREFs of ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DD248
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD300 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OldFlags)
{
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v8; // r8
  KIRQL v9; // si
  bool v10; // zf
  int IsNotCancelable; // edi
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (Flink = Request[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&irql, (unsigned __int8)Request);
    v9 = (unsigned __int8)irql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  v10 = FxDriverGlobals->FxVerifierOn == 0;
  *OldFlags = Request->m_VerifierFlags;
  if ( v10 )
  {
    IsNotCancelable = 0;
  }
  else
  {
    IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
    if ( IsNotCancelable < 0 )
      goto LABEL_10;
  }
  Request->m_VerifierFlags &= ~1u;
LABEL_10:
  FxNonPagedObject::Unlock(Request, v9, v8);
  return (unsigned int)IsNotCancelable;
}
