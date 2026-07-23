/*
 * XREFs of PopSetDisplayStatus @ 0x1409F7320
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
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
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  PopSetSessionDisplayStatus(SessionId, a1);
  return PopReleaseAdaptiveLock(v5, v4, v6, v7, 0LL);
}
