/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140B5FEF0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsSnapTelemetry @ 0x140B5FF60 (PopEsSnapTelemetry.c)
 */

__int64 __fastcall PopEsEnterSleepShutdown(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, a2, a3, a4);
  v8[0] = xmmword_140F10840;
  v8[1] = xmmword_140F10850;
  PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, v4, v5, v6);
  PopEsSnapTelemetry(v8);
  PopEsLastStateChangeTimeStamp = 0LL;
  return PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
}
