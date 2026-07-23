/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140C0F2F8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 */

__int64 __fastcall PopAcquireTransitionLockAfterSleep(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock, a2, a3, a4);
  PopWaitingForTransitionLock = 1;
  if ( qword_140F105F8 )
    PopWaitingForTransitionLock = (int)PopPushPowerStateTransitionRecordWithCallback(
                                         KeGetCurrentThread()->ApcState.Process,
                                         qword_140F105F8,
                                         0LL,
                                         0LL,
                                         0LL) >= 0;
  PopReleaseRwLock((struct _KTHREAD *)&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1, v4, v5, v6);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock, v7, v8, v9);
  PopWaitingForTransitionLock = 0;
  return PopReleaseRwLock((struct _KTHREAD *)&PopUnlockAfterSleepLock);
}
