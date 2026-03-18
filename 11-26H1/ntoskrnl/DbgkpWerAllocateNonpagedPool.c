/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1405B4754
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140B3F65C (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(0x40uLL);
}
