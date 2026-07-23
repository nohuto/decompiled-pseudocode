/*
 * XREFs of FsRtlReleaseAutoExpandPushLockShared @ 0x140468CA0
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x140468BE0 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockShared(ULONG_PTR a1)
{
  ExReleaseAutoExpandPushLockShared(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
