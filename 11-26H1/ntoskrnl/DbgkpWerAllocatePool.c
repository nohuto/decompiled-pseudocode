/*
 * XREFs of DbgkpWerAllocatePool @ 0x14077B34C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1405B4278 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocatePool()
{
  return ExAllocatePool2(0x100uLL);
}
