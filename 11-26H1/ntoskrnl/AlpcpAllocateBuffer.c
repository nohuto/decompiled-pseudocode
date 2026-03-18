/*
 * XREFs of AlpcpAllocateBuffer @ 0x140AC04D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 AlpcpAllocateBuffer()
{
  return ExAllocatePool2(0x100uLL);
}
