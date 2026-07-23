/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x140B1B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
