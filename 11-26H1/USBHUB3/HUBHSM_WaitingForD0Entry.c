/*
 * XREFs of HUBHSM_WaitingForD0Entry @ 0x14000A150
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x14000F6C0 (HUBFDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBHSM_WaitingForD0Entry(__int64 a1)
{
  HUBFDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
