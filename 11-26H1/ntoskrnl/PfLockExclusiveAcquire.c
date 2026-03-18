/*
 * XREFs of PfLockExclusiveAcquire @ 0x1404C3BA0
 * Callers:
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     PfpRpShutdown @ 0x1407C6CD0 (PfpRpShutdown.c)
 *     PfpParametersWatcher @ 0x1407C7CE0 (PfpParametersWatcher.c)
 *     PfpRpFileKeyUpdate @ 0x1408D4BF0 (PfpRpFileKeyUpdate.c)
 *     PfpPrefetchSharedCleanup @ 0x1409B6F88 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1409B70EC (PfpPrefetchSharedStart.c)
 *     PfProcessExitNotification @ 0x140A43B50 (PfProcessExitNotification.c)
 *     PfpRpCHashDeleteEntries @ 0x140AABCD8 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x140B031D8 (PfpRpCHashAddEntries.c)
 *     PfpRpCHashGrow @ 0x140B033A0 (PfpRpCHashGrow.c)
 *     PfpRpCHashEmpty @ 0x140B44698 (PfpRpCHashEmpty.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140BE95B0 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BF8EDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BF8F54 (PfTSetTracingPriority.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PfLockExclusiveAcquire(unsigned __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v6, (__int64)a1);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
}
