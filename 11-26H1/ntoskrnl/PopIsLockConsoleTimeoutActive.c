/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x140B47DB0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rax

  v0 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  LOBYTE(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = 0;
  if ( !BYTE1(PopAdaptiveStandbyLock.ThreadListEntry.Blink)
    || BYTE2(PopAdaptiveStandbyLock.ThreadListEntry.Blink)
    || *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount == -1 )
  {
    v0 = 0;
  }
  PopReleaseAdaptiveLock();
  return v0;
}
