/*
 * XREFs of AlpcpAllocateBuffer @ 0x140AC2570
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 AlpcpAllocateBuffer()
{
  return ExAllocatePool2(0x100uLL);
}
