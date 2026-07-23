/*
 * XREFs of PfLockExclusiveAcquire @ 0x1404BD3F0
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfpRpShutdown @ 0x1407C9D30 (PfpRpShutdown.c)
 *     PfpParametersWatcher @ 0x1407CAD40 (PfpParametersWatcher.c)
 *     PfpRpFileKeyUpdate @ 0x1408DB1B0 (PfpRpFileKeyUpdate.c)
 *     PfpPrefetchSharedCleanup @ 0x140987F6C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1409880CC (PfpPrefetchSharedStart.c)
 *     PfpRpCHashEmpty @ 0x1409BE290 (PfpRpCHashEmpty.c)
 *     PfpRpCHashDeleteEntries @ 0x140AA9288 (PfpRpCHashDeleteEntries.c)
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 *     PfpRpCHashAddEntries @ 0x140B04DEC (PfpRpCHashAddEntries.c)
 *     PfpRpCHashGrow @ 0x140B04FB4 (PfpRpCHashGrow.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140BEF5B0 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BFEF54 (PfTSetTracingPriority.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
