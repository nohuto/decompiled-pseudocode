/*
 * XREFs of PopEtInternerAllocate @ 0x140B11970
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PopEtInternerAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
