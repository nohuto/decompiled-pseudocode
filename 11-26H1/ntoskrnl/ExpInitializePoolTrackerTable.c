/*
 * XREFs of ExpInitializePoolTrackerTable @ 0x1406D013C
 * Callers:
 *     ExInitializePoolTracker @ 0x140CEC048 (ExInitializePoolTracker.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x1403480E0 (ExAllocateHeapPages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 ExpInitializePoolTrackerTable()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 StackLimit; // rcx
  void *HeapPages; // rax

  if ( stru_140EFF2C0.StackLimit )
  {
    if ( stru_140EFF2C0.StackLimit >= (void *volatile)0x40 )
    {
      _BitScanReverse64(&v0, (unsigned __int64)stru_140EFF2C0.StackLimit);
      stru_140EFF2C0.StackLimit = (void *volatile)(1LL << v0);
    }
    else
    {
      stru_140EFF2C0.StackLimit = (void *volatile)64;
    }
  }
  else
  {
    stru_140EFF2C0.StackLimit = (void *volatile)4096;
    if ( *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 22288LL) <= 0x10000uLL )
      stru_140EFF2C0.StackLimit = (void *volatile)512;
  }
  while ( 1 )
  {
    StackLimit = (unsigned __int64)stru_140EFF2C0.StackLimit;
    if ( (unsigned __int64)stru_140EFF2C0.StackLimit + 1 > 0x333333333333333LL )
      goto LABEL_10;
    HeapPages = (void *)ExAllocateHeapPages(
                          (__int64)stru_140EFF2C0.StackLimit,
                          (80 * (__int64)stru_140EFF2C0.StackLimit + 4175) & 0xFFFFFFFFFFFFF000uLL);
    StackLimit = (unsigned __int64)stru_140EFF2C0.StackLimit;
    stru_140EFF2C0.QuantumTarget = (unsigned __int64)HeapPages;
    if ( HeapPages )
      break;
    if ( stru_140EFF2C0.StackLimit == (void *volatile)1 )
      return 3221225626LL;
LABEL_10:
    stru_140EFF2C0.StackLimit = (void *volatile)(StackLimit >> 1);
  }
  stru_140EFF2C0.StackBase = (char *)stru_140EFF2C0.StackLimit++ - 1;
  memset_0(HeapPages, 0, 80 * (StackLimit + 1));
  return 0LL;
}
