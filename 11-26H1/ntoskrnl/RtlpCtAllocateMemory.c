/*
 * XREFs of RtlpCtAllocateMemory @ 0x140809094
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14061F790 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 RtlpCtAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
