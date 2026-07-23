/*
 * XREFs of ObpStackDbAllocRoutine @ 0x1407C8210
 * Callers:
 *     ObpObjectRefsByStackAddTrace @ 0x140AB76B0 (ObpObjectRefsByStackAddTrace.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 */

unsigned __int64 __fastcall ObpStackDbAllocRoutine(__int64 a1)
{
  return ObpTraceAllocateMemory(a1);
}
