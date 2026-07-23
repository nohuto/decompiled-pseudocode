/*
 * XREFs of PoEndPowerStateTasks @ 0x1409F55F4
 * Callers:
 *     PoPowerOffMonitor @ 0x1404FA0FC (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140BF8D2C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
