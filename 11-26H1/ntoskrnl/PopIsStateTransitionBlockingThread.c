/*
 * XREFs of PopIsStateTransitionBlockingThread @ 0x140C0BD4C
 * Callers:
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x1409F5820 (PopControlMonitor.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     PopSendSessionInfo @ 0x140B48360 (PopSendSessionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

bool __fastcall PopIsStateTransitionBlockingThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  bool v4; // bl

  v4 = 0;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F120C8, a2, a3, a4);
  if ( dword_140F120C0 != -1 )
    v4 = KeGetCurrentThread() == PopStateTransitonBlameStack[6 * (unsigned int)dword_140F120C0];
  PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F120C8);
  return v4;
}
