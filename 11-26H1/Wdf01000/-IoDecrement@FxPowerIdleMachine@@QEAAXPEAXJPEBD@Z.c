/*
 * XREFs of ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140031520
 * Callers:
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x140040ED0 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1400A6CB8 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPowerIdleMachine::IoDecrement(FxPowerIdleMachine *this, void *Tag, int Line, const char *File)
{
  FxTagTracker *m_TagTracker; // rbx
  unsigned __int64 *p_m_Lock; // rbp
  const char *v7; // r15
  int v8; // r12d
  _FX_DRIVER_GLOBALS *m_OwningObject; // rsi
  KIRQL v11; // r14
  __int64 m_EventHistoryIndex; // rax
  unsigned int v13; // ebx
  FxTagTracker *v14; // rsi
  const FxIdleStateTable *v15; // r8
  __int64 i; // rax
  FxPowerIdleStates _a3; // ebx
  unsigned __int64 v18; // rcx
  const void *_a1; // rdx
  char v20; // al
  void (__fastcall *v21)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  FxTagTracker *v22; // rcx
  unsigned __int64 v23; // rax
  const void *v24; // rdx
  bool v25; // zf
  const void *_a2; // rax
  unsigned int v27; // edx
  FxVerifierDownlevelOption v28; // r9d
  _FX_DRIVER_GLOBALS *v29; // rcx
  unsigned int v30; // [rsp+90h] [rbp+8h]

  m_TagTracker = this[2].m_TagTracker;
  p_m_Lock = &this->m_Lock.m_Lock;
  v7 = File;
  v8 = Line;
  m_OwningObject = (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  if ( !this->m_IoCount )
  {
    v23 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
    v24 = (const void *)(v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v25 = *(_WORD *)(v23 + 10) == 0;
    _a2 = *(const void **)(v23 + 144);
    if ( v25 )
      v24 = 0LL;
    WPP_IFR_SF_qq(m_OwningObject, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v24, _a2);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_OwningObject, v27, 0xBu, v28) )
      FxVerifierDbgBreakPoint(v29);
  }
  m_EventHistoryIndex = this->m_EventHistoryIndex;
  v13 = --this->m_IoCount;
  v14 = this[2].m_TagTracker;
  this->m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoDecrement;
  v30 = v13;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v15 = &FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState];
  for ( i = 0LL;
        (unsigned int)i < FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
        i = (unsigned int)(i + 1) )
  {
    if ( v15[-1].TargetStates[i].PowerIdleEvent == PowerIdleEventIoDecrement )
    {
      _mm_lfence();
      _a3 = v15[-1].TargetStates[i].PowerIdleState;
      if ( _a3 != FxIdleMax )
      {
        do
        {
          v18 = (unsigned __int64)v14->m_TagHistory[0].Tag;
          _a1 = (const void *)(v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v18 + 10) )
            _a1 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)v14->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            *(const void **)(v18 + 144),
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v20 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v20 & 7;
          v21 = funcs_140011152[3 * _a3];
          if ( !v21 )
            break;
          _a3 = ((unsigned int (__fastcall *)(FxPowerIdleMachine *))v21)(this);
        }
        while ( _a3 != FxIdleMax );
        v7 = File;
        p_m_Lock = &this->m_Lock.m_Lock;
        v8 = Line;
      }
      v13 = v30;
      break;
    }
  }
  KeReleaseSpinLock(p_m_Lock, v11);
  v22 = this->m_TagTracker;
  if ( v22 )
    FxTagTracker::UpdateTagHistory(v22, Tag, v8, v7, TagRelease, v13);
}
