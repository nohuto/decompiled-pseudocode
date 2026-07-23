/*
 * XREFs of PiSwAllocateGenericTableEntry @ 0x140B3F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PiSwAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
