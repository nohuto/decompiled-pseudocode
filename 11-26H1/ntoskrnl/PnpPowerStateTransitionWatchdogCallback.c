/*
 * XREFs of PnpPowerStateTransitionWatchdogCallback @ 0x1405D9A10
 * Callers:
 *     <none>
 * Callees:
 *     PnpBugcheckPowerTimeout @ 0x1405D9FA4 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PnpPowerStateTransitionWatchdogCallback(ULONG_PTR a1)
{
  PnpBugcheckPowerTimeout(a1);
}
