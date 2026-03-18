/*
 * XREFs of ?_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z @ 0x1400A7290
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1400A6EA4 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways(FxPkgPnp *Parameter)
{
  FxPkgPnp::SetDeviceFailedAttemptRestart(Parameter, 1u);
}
