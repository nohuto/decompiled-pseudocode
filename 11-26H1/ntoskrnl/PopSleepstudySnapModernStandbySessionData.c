/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140B47E34
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopSleepstudySnapModernStandbySessionData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  unsigned __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock, a2, a3, a4);
  v4 = 15LL * (unsigned int)dword_140F0EBC8;
  PopCalculateIdleInformation((__int64)&v6);
  PopSleepstudySessionContext[v4 + 38] = v7;
  PopSleepstudySessionContext[v4 + 39] = *((_QWORD *)&v6 + 1);
  PopSleepstudySessionContext[v4 + 40] = RtlGetInterruptTimePrecise(&v9);
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
