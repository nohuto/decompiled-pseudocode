/*
 * XREFs of PnprWakeDevices @ 0x140BF8D2C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPartitionReplace @ 0x1407D4028 (PoEndPartitionReplace.c)
 *     PoUnblockConsoleSwitch @ 0x1409F4408 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1409F55F4 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x140B35BB8 (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbx

  v1 = PnprContext;
  *(_DWORD *)(v1 + 33336) = PnprGetMillisecondCounter(0);
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4);
  PoClearBroadcast();
  PoEndPartitionReplace(a1 + 40, *(_DWORD *)(a1 + 32));
  PoEndPowerStateTasks(a1 + 40);
  PoUnblockConsoleSwitch(a1 + 40, *(_DWORD *)(a1 + 32));
  v3 = PnprContext;
  *(_DWORD *)(v3 + 33340) = PnprGetMillisecondCounter(0);
  return 0LL;
}
