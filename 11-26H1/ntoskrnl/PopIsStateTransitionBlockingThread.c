/*
 * XREFs of PopIsStateTransitionBlockingThread @ 0x140C05B3C
 * Callers:
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140A39C20 (PopControlMonitor.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 *     PopSendSessionInfo @ 0x140B46330 (PopSendSessionInfo.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

bool __fastcall PopIsStateTransitionBlockingThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  bool v4; // bl

  v4 = 0;
  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F11D08.Header.Lock, a2, a3, a4);
  if ( dword_140F11D00 != -1 )
    v4 = KeGetCurrentThread() == *((struct _KTHREAD **)&stru_140F110C0.ThreadLock + 6 * (unsigned int)dword_140F11D00);
  PopReleaseRwLock(&stru_140F11D08);
  return v4;
}
