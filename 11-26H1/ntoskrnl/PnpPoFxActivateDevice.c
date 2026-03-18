/*
 * XREFs of PnpPoFxActivateDevice @ 0x14090E180
 * Callers:
 *     PnpQueryStopDeviceNode @ 0x1407B3F0C (PnpQueryStopDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A8A1F0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PnpUnmapActivatingDeviceNodeToThread @ 0x1403B8804 (PnpUnmapActivatingDeviceNodeToThread.c)
 *     PnpMapActivatingDeviceNodeToThread @ 0x1403B8854 (PnpMapActivatingDeviceNodeToThread.c)
 *     PoFxActivateDevice @ 0x1404D5274 (PoFxActivateDevice.c)
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
