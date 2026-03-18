/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x140B19160
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
