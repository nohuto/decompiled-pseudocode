/*
 * XREFs of CmLockHive @ 0x1408C8694
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x14047EAC4 (CmpWaitForLateUnloadWorker.c)
 *     CmpFlushNotify @ 0x1408BA228 (CmpFlushNotify.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmLockHive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  v4 = (unsigned __int64 *)(a1 + 1680);
  v5 = (AutoBoost *)KeAbPreAcquire(a1 + 1680, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
