/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140C090E8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 */

__int64 __fastcall PopAcquireTransitionLockAfterSleep(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620, a2, a3, a4);
  PopWeakChargerLock.WaitBlockFill5[24] = 1;
  if ( qword_140F0FD38 )
    PopWeakChargerLock.WaitBlockFill5[24] = (int)PopPushPowerStateTransitionRecordWithCallback(
                                                   KeGetCurrentThread()->ApcState.Process,
                                                   qword_140F0FD38,
                                                   0LL,
                                                   0LL,
                                                   0LL) >= 0;
  PopReleaseRwLock(&stru_140F0F620);
  PopAcquireTransitionLock(1, v4, v5, v6);
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620, v7, v8, v9);
  PopWeakChargerLock.WaitBlockFill5[24] = 0;
  return PopReleaseRwLock(&stru_140F0F620);
}
