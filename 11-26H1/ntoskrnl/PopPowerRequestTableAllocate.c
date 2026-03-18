/*
 * XREFs of PopPowerRequestTableAllocate @ 0x140B05E70
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PopPowerRequestTableAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
