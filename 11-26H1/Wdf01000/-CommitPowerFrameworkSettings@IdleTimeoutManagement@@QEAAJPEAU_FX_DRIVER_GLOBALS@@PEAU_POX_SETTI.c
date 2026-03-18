/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1400A85A8
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1400A6804 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x140083108 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  unsigned int v6; // ebx
  const void *_a1; // rcx
  int updated; // edx
  __int64 v9; // r10
  int v10; // edx
  int v11; // edx
  unsigned __int16 v12; // r9
  const void *v13; // rcx

  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
    if ( !updated )
      return 0;
    v10 = updated - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v12 = 15;
        goto LABEL_10;
      }
      if ( v11 == 1 )
      {
        v12 = 16;
LABEL_10:
        v6 = -1073741808;
        v13 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(v9 + 10) )
          v13 = 0LL;
        WPP_IFR_SF_qqd(
          DriverGlobals,
          2u,
          0xCu,
          v12,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v13,
          *(const void **)(v9 + 144),
          0xC0000010);
        FxVerifierDbgBreakPoint(DriverGlobals);
        goto LABEL_15;
      }
    }
    v6 = -1073741595;
LABEL_15:
    this->m_PoxSettings = 0LL;
    return v6;
  }
  v6 = -1073741808;
  _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*((_WORD *)ComponentIdleConditionCallback + 5) )
    _a1 = 0LL;
  WPP_IFR_SF_qqd(
    DriverGlobals,
    2u,
    0xCu,
    0xEu,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    _a1,
    *((const void **)ComponentIdleConditionCallback + 18),
    0xC0000010);
  FxVerifierDbgBreakPoint(DriverGlobals);
  return v6;
}
