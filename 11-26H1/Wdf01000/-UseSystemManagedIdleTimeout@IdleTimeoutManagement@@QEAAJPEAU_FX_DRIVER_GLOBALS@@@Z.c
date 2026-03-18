/*
 * XREFs of ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083054
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x140083108 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall IdleTimeoutManagement::UseSystemManagedIdleTimeout(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // eax
  __int64 v4; // r10
  __int32 v5; // eax
  __int32 v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  const void *_a1; // rcx

  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutSystemManaged);
  if ( updated == IdleTimeoutStatusFlagsUpdated )
    return 0;
  v5 = updated - 1;
  if ( !v5 )
    return 0;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741595;
    v8 = 11;
  }
  else
  {
    v8 = 10;
  }
  v7 = -1073741808;
  _a1 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v4 + 10) )
    _a1 = 0LL;
  WPP_IFR_SF_qqd(
    DriverGlobals,
    2u,
    0xCu,
    v8,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    _a1,
    *(const void **)(v4 + 144),
    0xC0000010);
  FxVerifierDbgBreakPoint(DriverGlobals);
  return v7;
}
