/*
 * XREFs of HUBHSM_SignalingPnPPowerEventOnPendingStop @ 0x14000A0B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_ReleaseWdfPowerReference @ 0x14000F07C (HUBFDO_ReleaseWdfPowerReference.c)
 *     HUBFDO_SignalPnpPowerEvent @ 0x14000F6C0 (HUBFDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBHSM_SignalingPnPPowerEventOnPendingStop(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_ReleaseWdfPowerReference(v1);
  HUBFDO_SignalPnpPowerEvent(v1);
  return 2053LL;
}
