/*
 * XREFs of HUBDSM_SignalingPnpPowerEventOnStopEnable @ 0x140024C00
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x14001BBB8 (HUBPDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBDSM_SignalingPnpPowerEventOnStopEnable(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_SignalPnpPowerEvent(v1);
  _InterlockedOr((volatile signed __int32 *)(v1 + 1644), 4u);
  return 4077LL;
}
