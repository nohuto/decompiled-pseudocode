/*
 * XREFs of ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x140060C28
 * Callers:
 *     ?PowerPolStoppingCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060A00 (-PowerPolStoppingCancelTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060A30 (-PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedIdleCapableCancelTimerForSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060AA0 (-PowerPolStartedIdleCapableCancelTimerForSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@P.c)
 *     ?PowerPolStartedWakeCapableCancelTimerForSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060AD0 (-PowerPolStartedWakeCapableCancelTimerForSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@P.c)
 *     ?PowerPolStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060B00 (-PowerPolStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060B30 (-PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_.c)
 *     ?PowerPolWaitingArmedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060B80 (-PowerPolWaitingArmedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140060C00 (-PowerPolStartedCancelTimer@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8DB0 (-PowerPolStartedWakeCapableSleepingUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolStoppingResetDevice@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8F20 (-PowerPolStoppingResetDevice@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A9180 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A98B0 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A9970 (-PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolWakeFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A9AB0 (-PowerPolWakeFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

bool __fastcall FxPowerIdleMachine::DisableTimer(FxPowerIdleMachine *this)
{
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v3; // al
  FxTagTracker *m_TagTracker; // rbp
  KIRQL v5; // r15
  __int64 _a3; // r10
  unsigned int i; // ecx
  unsigned __int64 v8; // rdx
  const void *_a1; // r8
  bool v10; // bl
  FxPowerIdleStates PowerIdleState; // edi
  unsigned __int64 Tag; // rcx
  const void *v14; // rdx
  char v15; // al
  void (__fastcall *v16)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax

  p_m_Lock = &this->m_Lock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_TagTracker = this[2].m_TagTracker;
  v5 = v3;
  this->m_EventHistory[this->m_EventHistoryIndex] = PowerIdleEventDisabled;
  _a3 = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  for ( i = 0; i < FxPowerIdleMachine::m_StateTable[_a3 - 1].TargetStatesCount; ++i )
  {
    if ( FxPowerIdleMachine::m_StateTable[_a3 - 1].TargetStates[i].PowerIdleEvent == PowerIdleEventDisabled )
    {
      _mm_lfence();
      PowerIdleState = FxPowerIdleMachine::m_StateTable[_a3 - 1].TargetStates[i].PowerIdleState;
      if ( PowerIdleState != FxIdleMax )
      {
        do
        {
          Tag = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
          v14 = (const void *)(Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(Tag + 10) )
            v14 = 0LL;
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            v14,
            *(const void **)(Tag + 144),
            PowerIdleState,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = PowerIdleState;
          v15 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = PowerIdleState;
          this->m_StateHistoryIndex = v15 & 7;
          v16 = funcs_140011152[3 * PowerIdleState];
          if ( !v16 )
            break;
          PowerIdleState = ((unsigned int (__fastcall *)(FxPowerIdleMachine *))v16)(this);
        }
        while ( PowerIdleState != FxIdleMax );
        goto LABEL_8;
      }
      break;
    }
  }
  v8 = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
  _a1 = (const void *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v8 + 10) )
    _a1 = 0LL;
  WPP_IFR_SF_qqLL(
    (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
    4u,
    0xCu,
    0x10u,
    WPP_PowerIdleStateMachine_cpp_Traceguids,
    _a1,
    *(const void **)(v8 + 144),
    _a3,
    0x80u);
LABEL_8:
  v10 = (this->m_Flags & 8) == 0;
  KeReleaseSpinLock(p_m_Lock, v5);
  return v10;
}
