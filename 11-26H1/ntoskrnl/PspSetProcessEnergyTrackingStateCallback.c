/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x140B22620
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x140451F70 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8u, *a2);
  return 0LL;
}
