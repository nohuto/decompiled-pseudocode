/*
 * XREFs of ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14009E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14005D900 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qs @ 0x14009E924 (WPP_IFR_SF_qs.c)
 */

void __fastcall FxUsbPipe::GotoRemoveState(
        FxUsbPipe *this,
        _WDF_IO_TARGET_STATE NewState,
        FxIrpQueue *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 LockSelf,
        unsigned __int8 *Wait)
{
  unsigned __int8 v10; // di
  FxUsbPipeContinuousReader *m_Reader; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const char *id; // r8
  const void *flags; // rdx
  unsigned int v15; // edx
  FxVerifierDownlevelOption v16; // r9d
  _FX_DRIVER_GLOBALS *v17; // rcx
  unsigned __int8 *v18; // rsi
  unsigned __int8 v19; // r8
  const _GUID *Lock; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v10 = irql;
  }
  m_Reader = this->m_Reader;
  if ( m_Reader && m_Reader->m_ReadersSubmitted && this->m_State == WdfIoTargetStarted )
  {
    m_Globals = this->m_Globals;
    id = "in EvtCleanupCallback of the miniport framework device object";
    if ( (m_Globals->Public.DriverFlags & 2) == 0 )
      id = "in EvtDeviceD0Exit callback";
    flags = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      flags = 0LL;
    WPP_IFR_SF_qs(
      m_Globals,
      (unsigned __int8)flags,
      (unsigned int)id,
      (unsigned __int16)SentRequestListHead,
      Lock,
      flags,
      id);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(this->m_Globals, v15, 9u, v16) )
      FxVerifierDbgBreakPoint(v17);
  }
  v18 = Wait;
  FxIoTarget::GotoRemoveState(this, NewState, PendedRequestListHead, SentRequestListHead, 0, (_LIST_ENTRY *)Wait);
  if ( this->m_Reader )
    *v18 = 1;
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v10, v19);
}
