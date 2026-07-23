/*
 * XREFs of PopPowerRequestTableAllocate @ 0x140B07F00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PopPowerRequestTableAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
