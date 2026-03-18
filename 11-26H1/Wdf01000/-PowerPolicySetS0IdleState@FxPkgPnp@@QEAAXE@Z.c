/*
 * XREFs of ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1400403C4
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003FA3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1400A70C0 (-_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1400A70F0 (-_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x1400416B4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySetS0IdleState(FxPkgPnp *this, unsigned __int8 State)
{
  FxPkgPnp *v2; // rcx
  char v3; // r9
  unsigned __int8 v4; // r8

  FxPkgPnp::SaveRequestD0IrpReasonHint(this, RequestD0ForS0IdlePolicy);
  v2->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled = v3 != 0;
  v2->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 1;
  FxPkgPnp::PowerPolicyProcessEvent(v2, PwrPolS0IdlePolicyChanged, v4);
}
