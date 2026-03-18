/*
 * XREFs of ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14004D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14004D270 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     WPP_IFR_SF_qLL @ 0x14004D454 (WPP_IFR_SF_qLL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxUsbPipe::GotoStopState(
        FxUsbPipe *this,
        _WDF_IO_TARGET_SENT_IO_ACTION Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v8; // si
  FxUsbPipeContinuousReader **p_m_Reader; // rdi
  FxUsbPipeContinuousReader **v10; // r12
  const void *v11; // rbp
  unsigned __int8 v12; // r8
  char v13; // r10
  const void *level; // rax
  struct _KTHREAD *m_WorkItemThread; // rdx
  FxVerifierLock *PipeHandle; // rcx
  unsigned int v17; // edx
  FxVerifierDownlevelOption v18; // r9d
  bool IsVerificationEnabled; // al
  _FX_DRIVER_GLOBALS *v20; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  unsigned int v22; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  _WDF_IO_TARGET_SENT_IO_ACTION v24; // [rsp+88h] [rbp+10h]
  _SINGLE_LIST_ENTRY *v25; // [rsp+90h] [rbp+18h]

  v25 = SentRequestListHead;
  v24 = Action;
  m_Globals = this->m_Globals;
  v8 = 0;
  irql = 0;
  if ( LockSelf )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (PipeHandle = (FxVerifierLock *)this[-1].m_PipeInformation.PipeHandle) != 0LL )
    {
      FxVerifierLock::Lock(PipeHandle, &irql, (unsigned __int8)SentRequestListHead);
      v8 = irql;
    }
    else
    {
      v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    Action = v24;
  }
  p_m_Reader = &this->m_Reader;
  if ( this->m_Reader )
  {
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)SentRequestListHead, 0x14u, traceGuid, level, Action, v22);
    Action = WdfIoTargetCancelSentIo;
    v10 = &this->m_Reader;
  }
  else
  {
    v10 = &this->m_Reader;
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  }
  FxIoTarget::GotoStopState(this, Action, v25, Wait, 0);
  v13 = 0;
  if ( *p_m_Reader )
  {
    (*p_m_Reader)->m_ReadersSubmitted = 0;
    if ( (*p_m_Reader)->m_WorkItemThread == KeGetCurrentThread() )
    {
      if ( !this->m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipe_cpp_Traceguids, v11);
      IsVerificationEnabled = _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v17, 9u, v18);
      v13 = 0;
      if ( IsVerificationEnabled )
      {
        FxVerifierDbgBreakPoint(v20);
        v13 = 0;
        p_m_Reader = v10;
      }
    }
    m_WorkItemThread = (*p_m_Reader)->m_WorkItemThread;
    if ( m_WorkItemThread != KeGetCurrentThread()
      || _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)m_WorkItemThread, 9u) )
    {
      *Wait = 1;
    }
  }
  if ( LockSelf != v13 )
    FxNonPagedObject::Unlock(this, v8, v12);
}
