/*
 * XREFs of IopAllocateGenericTableEntry @ 0x140796CD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 IopAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
