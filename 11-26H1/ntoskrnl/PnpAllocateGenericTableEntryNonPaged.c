/*
 * XREFs of PnpAllocateGenericTableEntryNonPaged @ 0x1404ED630
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntryNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
