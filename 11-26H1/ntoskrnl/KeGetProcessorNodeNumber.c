/*
 * XREFs of KeGetProcessorNodeNumber @ 0x14046B620
 * Callers:
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     KiInitializeThreadCycleTable @ 0x140BF40D8 (KiInitializeThreadCycleTable.c)
 *     MmInitializeProcessor @ 0x140C0013C (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140C0D99C (VmInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
