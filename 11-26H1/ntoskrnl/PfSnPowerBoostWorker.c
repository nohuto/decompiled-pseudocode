/*
 * XREFs of PfSnPowerBoostWorker @ 0x1407CA440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x140B15550 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0LL);
  ExReleaseRundownProtection_0(RunRef);
}
