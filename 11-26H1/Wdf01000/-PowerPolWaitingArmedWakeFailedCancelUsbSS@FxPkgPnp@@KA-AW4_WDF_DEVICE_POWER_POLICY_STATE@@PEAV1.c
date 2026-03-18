/*
 * XREFs of ?PowerPolWaitingArmedWakeFailedCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A99B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x1400416B4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x140060E74 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedWakeFailedCancelUsbSS(FxPkgPnp *This)
{
  FxPkgPnp *v1; // rcx

  FxPkgPnp::SaveRequestD0IrpReasonHint(This, 15);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(v1) != 0 ? 1472 : 1345;
}
