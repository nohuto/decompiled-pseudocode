/*
 * XREFs of ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DD710
 * Callers:
 *     imp_WdfRequestMarkCancelableEx @ 0x1400093E0 (imp_WdfRequestMarkCancelableEx.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14000A2A0 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1400539E0 (imp_WdfRequestUnmarkCancelable.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD300 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400E4CD0 (-Vf_VerifyRequestIsCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequestCancelable(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 Cancelable)
{
  _LIST_ENTRY *Flink; // rcx
  KIRQL v8; // bp
  int IsDriverOwned; // ebx
  unsigned __int8 v10; // r8
  unsigned __int8 FxVerifierOn; // cl
  int IsNotCancelable; // eax
  FxIoQueue *irql; // [rsp+40h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && (Flink = pRequest[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
    v8 = (unsigned __int8)irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&pRequest->m_NPLock.m_Lock);
  }
  IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    FxVerifierOn = FxDriverGlobals->FxVerifierOn;
    if ( Cancelable )
    {
      if ( FxVerifierOn )
      {
        IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
LABEL_11:
        IsDriverOwned = IsNotCancelable;
        goto $Done_74;
      }
    }
    else if ( FxVerifierOn )
    {
      IsNotCancelable = FxRequest::Vf_VerifyRequestIsCancelable(pRequest, FxDriverGlobals);
      goto LABEL_11;
    }
    IsDriverOwned = 0;
  }
$Done_74:
  FxNonPagedObject::Unlock(pRequest, v8, v10);
  return (unsigned int)IsDriverOwned;
}
