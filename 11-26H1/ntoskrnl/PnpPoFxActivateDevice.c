/*
 * XREFs of PnpPoFxActivateDevice @ 0x1409B02B0
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x1407B6F6C (PnpQueryStopDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x1409B7010 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PnpUnmapActivatingDeviceNodeToThread @ 0x1403C2704 (PnpUnmapActivatingDeviceNodeToThread.c)
 *     PnpMapActivatingDeviceNodeToThread @ 0x1403C2754 (PnpMapActivatingDeviceNodeToThread.c)
 *     PoFxActivateDevice @ 0x1404CEAE4 (PoFxActivateDevice.c)
 */

void __fastcall PnpPoFxActivateDevice(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  PnpMapActivatingDeviceNodeToThread(a1, (__int64)CurrentThread);
  PoFxActivateDevice(*(_QWORD *)(a1 + 32));
  PnpUnmapActivatingDeviceNodeToThread((__int64)CurrentThread);
  *(_DWORD *)(a1 + 704) |= a2;
}
