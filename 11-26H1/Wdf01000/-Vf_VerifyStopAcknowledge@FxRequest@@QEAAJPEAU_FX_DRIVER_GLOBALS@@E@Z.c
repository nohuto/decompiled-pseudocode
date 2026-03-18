/*
 * XREFs of ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400DD4B0
 * Callers:
 *     imp_WdfRequestStopAcknowledge @ 0x140082740 (imp_WdfRequestStopAcknowledge.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD300 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD584 (-Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyStopAcknowledge(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Requeue)
{
  char m_ObjectFlags; // al
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // bp
  int IsDriverOwned; // edi
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, Requeue);
    v9 = irql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( FxDriverGlobals->FxVerifierOn )
  {
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(this, FxDriverGlobals);
    if ( IsDriverOwned < 0 )
      goto $Done_73;
  }
  else
  {
    IsDriverOwned = 0;
  }
  if ( !this->m_Completed )
  {
    if ( Requeue )
    {
      IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(this, FxDriverGlobals);
      if ( IsDriverOwned >= 0 )
      {
        if ( FxDriverGlobals->FxVerifierOn )
          IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(this, FxDriverGlobals);
        else
          IsDriverOwned = 0;
      }
    }
  }
$Done_73:
  FxNonPagedObject::Unlock(this, v9, v8);
  return (unsigned int)IsDriverOwned;
}
