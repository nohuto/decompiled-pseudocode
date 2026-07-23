/*
 * XREFs of ExpAllocateStringRoutine @ 0x140A86D30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 ExpAllocateStringRoutine()
{
  return ExAllocatePool2(0x100uLL);
}
