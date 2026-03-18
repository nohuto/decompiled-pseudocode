/*
 * XREFs of AcpipInitPciBusStatePool @ 0x1400D8ACC
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x140072740 (memset.c)
 */

__int64 *AcpipInitPciBusStatePool()
{
  __int64 *result; // rax

  KeInitializeSpinLock(&gPreAllocPciPoolSpinLock);
  memset(gPreAllocPciPool, 0, sizeof(gPreAllocPciPool));
  KeInitializeSpinLock(&gBBNResultCacheLock);
  result = &gBBNResultCacheListHead;
  qword_14008FD58 = (__int64)&gBBNResultCacheListHead;
  gBBNResultCacheListHead = (__int64)&gBBNResultCacheListHead;
  return result;
}
