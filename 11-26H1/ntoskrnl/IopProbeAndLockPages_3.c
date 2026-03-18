/*
 * XREFs of IopProbeAndLockPages_3 @ 0x14050A414
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmUpdateMdlTracker @ 0x1404E047C (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_3(
        unsigned __int64 a1,
        char a2,
        __int64 a3,
        struct _LIST_ENTRY *a4,
        unsigned int a5)
{
  __int64 result; // rax

  result = MmProbeAndLockPagesEx(a1, a2 & 1 | 2LL);
  if ( (int)result >= 0 )
  {
    if ( (MmTrackLockedPages & 1) != 0 )
      MmUpdateMdlTracker(a1, *(&a4->Blink[7].Flink + a5), a4);
    return 0LL;
  }
  return result;
}
