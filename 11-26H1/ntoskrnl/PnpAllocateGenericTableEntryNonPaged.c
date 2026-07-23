/*
 * XREFs of PnpAllocateGenericTableEntryNonPaged @ 0x1404E6C10
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntryNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
