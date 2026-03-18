/*
 * XREFs of ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140082248
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400821F0 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // edi
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rbx
  _WORD *v5; // rsi
  const void **v6; // r14
  const void *v7; // rbx
  const void *_a1; // rcx

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  v5 = (_WORD *)((char *)ComponentIdleConditionCallback + 10);
  v6 = (const void **)((char *)ComponentIdleConditionCallback + 144);
  v7 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, this->m_IdleTimeoutStatus | 1) != m_IdleTimeoutStatus )
  {
    _a1 = v7;
    if ( !*v5 )
      _a1 = 0LL;
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xCu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, *v6);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (m_IdleTimeoutStatus & 4) != 0 && (m_IdleTimeoutStatus & 2) == 0 )
  {
    if ( !*v5 )
      v7 = 0LL;
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xDu, WPP_PowerPolicyStateMachine_cpp_Traceguids, v7, *v6);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}
