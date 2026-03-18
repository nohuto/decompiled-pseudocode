/*
 * XREFs of PopEtInternerAllocate @ 0x140B0FF30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PopEtInternerAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
