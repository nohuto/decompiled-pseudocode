/*
 * XREFs of PopAdaptiveGetBootIsUnattended @ 0x1409C1164
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 */

bool PopAdaptiveGetBootIsUnattended()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v5 = 0;
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
    v5 = (ExpPlatformBinaryLock.Timer.Processor & 8) != 0;
  PopReleaseAdaptiveLock(v2, v1, v3, v4, 0LL);
  return v5;
}
