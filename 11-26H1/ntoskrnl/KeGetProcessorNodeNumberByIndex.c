/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x1404684D0
 * Callers:
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}
