/*
 * XREFs of PfSnPowerBoostWorker @ 0x1407C73E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x140B13A90 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0LL);
  ExReleaseRundownProtection_0(RunRef);
}
