/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1405B6F64
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140B4168C (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(0x40uLL);
}
