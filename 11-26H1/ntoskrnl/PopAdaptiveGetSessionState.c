/*
 * XREFs of PopAdaptiveGetSessionState @ 0x1409F91C0
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409F935C (PopAdaptiveGetSessionStateUnsafe.c)
 */

void __fastcall PopAdaptiveGetSessionState(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  PopAdaptiveGetSessionStateUnsafe(a1, a2, a3);
  PopReleaseAdaptiveLock();
}
