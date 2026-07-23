/*
 * XREFs of KeGetProcessorNodeNumber @ 0x140464DA0
 * Callers:
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     KiInitializeThreadCycleTable @ 0x140BFA0D8 (KiInitializeThreadCycleTable.c)
 *     MmInitializeProcessor @ 0x140C0634C (MmInitializeProcessor.c)
 *     VmInitializeProcessor @ 0x140C13BAC (VmInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
