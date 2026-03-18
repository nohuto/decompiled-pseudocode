/*
 * XREFs of PoStartPowerStateTasks @ 0x140A39A0C
 * Callers:
 *     PoPowerOffMonitor @ 0x14050090C (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140BF20F0 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
