/*
 * XREFs of PoStartPowerStateTasks @ 0x1409F5614
 * Callers:
 *     PoPowerOffMonitor @ 0x1404FA0FC (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
