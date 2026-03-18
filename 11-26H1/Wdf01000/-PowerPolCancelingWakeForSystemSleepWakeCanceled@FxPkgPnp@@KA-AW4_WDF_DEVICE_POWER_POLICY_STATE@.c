/*
 * XREFs of ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140079EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z @ 0x140042644 (-LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolCancelingWakeForSystemSleepWakeCanceled(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  NTSTATUS _a2; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 result; // rax

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  FxDevicePowerIrpTracker::LogRequestDIrpReason(&m_Owner->m_DevicePowerIrpTracker, RequestD0ForSx, 1u);
  This->m_PowerPolicyMachine.m_Owner->m_RequestedPowerUpIrp = 1;
  _a2 = PoRequestPowerIrp(
          This->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          2u,
          (POWER_STATE)1,
          (PREQUEST_POWER_COMPLETE)FxPkgPnp::_PowerPolDevicePowerUpComplete,
          This,
          0LL);
  if ( _a2 < 0 )
  {
    FxDevicePowerIrpTracker::LogRequestDIrpReason(&m_Owner->m_DevicePowerIrpTracker, RequestDIrpFailed, 1u);
    This->m_PowerPolicyMachine.m_Owner->m_RequestedPowerUpIrp = 0;
  }
  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(m_Globals, 5u, 0xCu, 0x28u, WPP_PowerPolicyStateMachine_cpp_Traceguids, 0, _a2);
  result = 1472LL;
  if ( _a2 < 0 )
    return 1404LL;
  return result;
}
