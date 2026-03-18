/*
 * XREFs of PoEndPowerStateTasks @ 0x140A399EC
 * Callers:
 *     PoPowerOffMonitor @ 0x14050090C (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140BF2D2C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
