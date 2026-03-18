/*
 * XREFs of PnprWakeDevices @ 0x140BF2D2C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140BF2BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPartitionReplace @ 0x1407D0F88 (PoEndPartitionReplace.c)
 *     PoUnblockConsoleSwitch @ 0x140A38848 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140A399EC (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x140B33768 (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140BF16E4 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
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
