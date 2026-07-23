/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x1407AA640
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PiDcAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
