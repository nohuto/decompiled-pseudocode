/*
 * XREFs of PopNotifyWin32kRequestStatus @ 0x140AEB8E8
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopNotifyWin32kRequestStatus(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  char v5; // di
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v4 = a1;
  v5 = a2;
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12420.SchedulerAssistPriorityFloor, a2, a3, a4);
  v6 = *((_DWORD *)&stru_140F12420.KernelShadowStackBase + v4);
  if ( v5 )
  {
    v8 = v6 + 1;
    v7 = v8 == 1;
  }
  else
  {
    v8 = v6 - 1;
    v7 = v8 == 0;
  }
  *((_DWORD *)&stru_140F12420.KernelShadowStackBase + v4) = v8;
  if ( v7 && stru_140F12420.KernelShadowStackInitial )
    PopQueueWorkItem((__int64)&unk_140F129D8, DelayedWorkQueue);
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F12420.SchedulerAssistPriorityFloor);
  return 0LL;
}
