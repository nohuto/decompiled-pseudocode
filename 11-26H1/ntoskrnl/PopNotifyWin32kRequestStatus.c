/*
 * XREFs of PopNotifyWin32kRequestStatus @ 0x140AEE7F4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)qword_140F12AE0, a2, a3, a4);
  v6 = *((_DWORD *)&qword_140F12AE0[3] + v4);
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
  *((_DWORD *)&qword_140F12AE0[3] + v4) = v8;
  if ( v7 && qword_140F12AF0 )
    PopQueueWorkItem((__int64)&unk_140F12C98, DelayedWorkQueue);
  PopReleaseRwLock((struct _KTHREAD *)qword_140F12AE0);
  return 0LL;
}
