/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x140008C90
 * Callers:
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1400087D4 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1400489BC (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  $3E66B2C35A09A7C45F0D5593ECC7E9E2 *v4; // rcx
  unsigned __int8 v5; // di
  struct _EX_TIMER *m_KernelExTimer; // rcx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  unsigned int v10; // edx
  unsigned __int8 v11; // si
  FxVerifierDownlevelOption v12; // r9d
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned __int8 v14; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  KIRQL CurrentIrql; // al
  const void *_a1; // rbx
  void (__fastcall *v18)(WDFTIMER__ *); // rcx
  void (__fastcall *m_Callback)(WDFTIMER__ *); // rcx
  _KTHREAD *_a2; // r10
  const void *v21; // r8
  struct _KTHREAD *_a3; // [rsp+38h] [rbp-20h]
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  if ( !Wait )
  {
    v4 = &this->m_Timer.m_Timer.16;
    v5 = 1;
    if ( !this->m_Timer.m_Timer.m_IsExtTimer )
      return KeCancelTimer(&v4->KernelTimer);
    m_KernelExTimer = v4->m_KernelExTimer;
    if ( !m_KernelExTimer )
      return v5;
    return ExCancelTimer(m_KernelExTimer, 0LL);
  }
  p_m_Globals = &this->m_Globals;
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(*p_m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
  }
  else
  {
    if ( !(*p_m_Globals)->FxVerifierOn || !KeGetCurrentIrql() )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Callback = this[-1].m_Callback) != 0LL )
      {
        FxVerifierLock::Lock((FxVerifierLock *)m_Callback, &irql, a3);
        v11 = irql;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        irql = v11;
      }
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(*p_m_Globals, v10, 9u, v12) )
      {
        _a2 = this->m_StopThread;
        if ( _a2 )
        {
          _a3 = KeGetCurrentThread();
          v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v21 = 0LL;
          WPP_IFR_SF_qqq(v13, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v21, _a2, _a3);
          FxVerifierDbgBreakPoint(this->m_Globals);
        }
      }
      this->m_StartAborted = 0;
      this->m_StopThread = KeGetCurrentThread();
      do
      {
        this->m_StopAgain = 0;
        FxNonPagedObject::Unlock(this, v11);
        v5 = MxTimer::Stop(&this->m_Timer);
        KeFlushQueuedDpcs();
        m_SystemWorkItem = this->m_SystemWorkItem;
        if ( m_SystemWorkItem )
          FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = this[-1].m_Callback) != 0LL )
        {
          FxVerifierLock::Lock((FxVerifierLock *)v18, &irql, v14);
          v11 = irql;
        }
        else
        {
          v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v11;
        }
      }
      while ( !v5 && this->m_StopAgain );
      this->m_StopThread = 0LL;
      this->m_StopAgain = 0;
      if ( this->m_StartAborted )
      {
        v5 = 1;
        this->m_StartAborted = 0;
      }
      FxNonPagedObject::Unlock(this, v11);
      return v5;
    }
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(*p_m_Globals, 2u, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
  }
  FxVerifierDbgBreakPoint(*p_m_Globals);
  return 0;
}
