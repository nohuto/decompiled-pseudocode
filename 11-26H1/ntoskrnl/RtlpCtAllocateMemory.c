/*
 * XREFs of RtlpCtAllocateMemory @ 0x14080EB24
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1406227E0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 RtlpCtAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
