/*
 * XREFs of PopSetDisplayStatus @ 0x140A3B900
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     PopSetSessionDisplayStatus @ 0x140A3C548 (PopSetSessionDisplayStatus.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int SessionId; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  SessionId = TtmiGetSessionId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  LOBYTE(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = 0;
  PopSetSessionDisplayStatus(SessionId, a1);
  return PopReleaseAdaptiveLock(v5, v4, v6, v7, 0LL);
}
