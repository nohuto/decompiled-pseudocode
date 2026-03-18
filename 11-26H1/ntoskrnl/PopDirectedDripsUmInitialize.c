/*
 * XREFs of PopDirectedDripsUmInitialize @ 0x1407E26CC
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140CD0A60 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14048F5B0 (RtlInitializeGenericTableAvl.c)
 */

void PopDirectedDripsUmInitialize()
{
  PopDirectedDripsUmLock.Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&PopDirectedDripsUmLock.Header.Lock = 0LL;
  LODWORD(PopDirectedDripsUmLock.Header.WaitListHead.Blink) = 0;
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)&PopDirectedDripsUmLock.StackLimit,
    PopDirectedDripsUmTestDeviceCompare,
    PopDirectedDripsUmTestDeviceAllocate,
    PopDirectedDripsUmTestDeviceFree,
    0LL);
  PopDirectedDripsUmLock.ApcStateFill[0] = 0;
}
