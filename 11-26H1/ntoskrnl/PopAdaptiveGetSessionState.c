/*
 * XREFs of PopAdaptiveGetSessionState @ 0x140A3D7A0
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x140A3D93C (PopAdaptiveGetSessionStateUnsafe.c)
 */

void __fastcall PopAdaptiveGetSessionState(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  LOBYTE(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = 0;
  PopAdaptiveGetSessionStateUnsafe(a1, a2, a3);
  PopReleaseAdaptiveLock();
}
