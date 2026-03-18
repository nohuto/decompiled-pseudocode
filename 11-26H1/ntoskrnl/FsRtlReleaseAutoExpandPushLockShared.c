/*
 * XREFs of FsRtlReleaseAutoExpandPushLockShared @ 0x14046F520
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x14046F460 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14027A640 (ExReleaseAutoExpandPushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockShared(ULONG_PTR a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  ExReleaseAutoExpandPushLockShared(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2);
}
