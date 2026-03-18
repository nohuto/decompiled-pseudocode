/*
 * XREFs of FsRtlReleaseAutoExpandPushLockExclusive @ 0x1404497DC
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x140449180 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1404492B0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140449380 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14048F0A0 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x1405B58B0 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140A36AA0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x140A81F10 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140449868 (ExpReleaseFannedOutPushLockExclusive.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockExclusive(struct _KTHREAD *a1)
{
  int Flink; // eax
  int Flink_high; // ecx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // r8

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
    ExfReleasePushLock(a1);
  }
  KeAbPostRelease((unsigned __int64)a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8);
}
