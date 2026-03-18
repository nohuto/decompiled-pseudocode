/*
 * XREFs of HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1400099C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueStopToAllPSMs @ 0x140011D30 (HUBMUX_QueueStopToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubStopToPortsOnReset(__int64 a1)
{
  HUBMUX_QueueStopToAllPSMs(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
