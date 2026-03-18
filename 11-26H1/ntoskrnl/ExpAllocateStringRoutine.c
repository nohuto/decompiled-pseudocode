/*
 * XREFs of ExpAllocateStringRoutine @ 0x140A80EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 ExpAllocateStringRoutine()
{
  return ExAllocatePool2(0x100uLL);
}
