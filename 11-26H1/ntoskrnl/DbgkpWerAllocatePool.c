/*
 * XREFs of DbgkpWerAllocatePool @ 0x14077DF8C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1405B6A88 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocatePool()
{
  return ExAllocatePool2(0x100uLL);
}
