/*
 * XREFs of FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x14021ACC0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x14021B420 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14021B5C0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x140488BE0 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x1405B80C0 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140919AA0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x140A87D80 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14021B298 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockExclusive(struct _KTHREAD *a1)
{
  int Flink; // eax
  int Flink_high; // ecx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt

  Flink = (int)a1->Header.WaitListHead.Flink;
  if ( (Flink & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(Flink & 0xFFFFFFF8);
  }
  else
  {
    Flink_high = HIDWORD(a1->Header.WaitListHead.Flink);
    if ( (Flink_high & 0xF0000u) < 0xF0000 )
      HIDWORD(a1->Header.WaitListHead.Flink) = Flink_high + 0x10000;
  }
  _m_prefetchw(a1);
  v4 = *(_QWORD *)&a1->Header.Lock;
  v5 = *(_QWORD *)&a1->Header.Lock - 16LL;
  if ( (*(_QWORD *)&a1->Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v6 = *(_QWORD *)&a1->Header.Lock,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v5, v4)) )
  {
    ExfReleasePushLock(a1, v5);
  }
  KeAbPostRelease(a1);
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
