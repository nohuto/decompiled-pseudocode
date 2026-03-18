/*
 * XREFs of ObpStackDbAllocRoutine @ 0x1407C51B0
 * Callers:
 *     ObpObjectRefsByStackAddTrace @ 0x140AB6310 (ObpObjectRefsByStackAddTrace.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 */

__int64 __fastcall ObpStackDbAllocRoutine(__int64 a1)
{
  return ObpTraceAllocateMemory(a1);
}
