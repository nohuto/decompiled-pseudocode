/*
 * XREFs of ExpInitializePoolTrackerTable @ 0x1406CC10C
 * Callers:
 *     ExInitializePoolTracker @ 0x140CE5CA8 (ExInitializePoolTracker.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x140346060 (ExAllocateHeapPages.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 ExpInitializePoolTrackerTable()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rcx
  void *HeapPages; // rax

  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v0, PoolTrackTableSize);
      PoolTrackTableSize = 1LL << v0;
    }
    else
    {
      PoolTrackTableSize = 64LL;
    }
  }
  else
  {
    PoolTrackTableSize = 4096LL;
    if ( *(_QWORD *)(*(_QWORD *)stru_140E2EB88.ThreadLock + 22288LL) <= 0x10000uLL )
      PoolTrackTableSize = 512LL;
  }
  while ( 1 )
  {
    v1 = PoolTrackTableSize;
    if ( (unsigned __int64)(PoolTrackTableSize + 1) > 0x333333333333333LL )
      goto LABEL_10;
    HeapPages = (void *)ExAllocateHeapPages(
                          PoolTrackTableSize,
                          (80 * PoolTrackTableSize + 4175) & 0xFFFFFFFFFFFFF000uLL);
    v1 = PoolTrackTableSize;
    PoolTrackTable = (__int64)HeapPages;
    if ( HeapPages )
      break;
    if ( PoolTrackTableSize == 1 )
      return 3221225626LL;
LABEL_10:
    PoolTrackTableSize = v1 >> 1;
  }
  stru_140EFEF90.StackBase = (void *)(PoolTrackTableSize++ - 1);
  memset_0(HeapPages, 0, 80 * (v1 + 1));
  return 0LL;
}
