/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140B5CD70
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsSnapTelemetry @ 0x140B5CDE0 (PopEsSnapTelemetry.c)
 */

__int64 __fastcall PopEsEnterSleepShutdown(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, a2, a3, a4);
  v8[0] = *(_OWORD *)&stru_140F10070.Header.WaitListHead.Blink;
  v8[1] = *(_OWORD *)&stru_140F10070.QuantumTarget;
  PopReleaseRwLock(&stru_140F10070);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, v4, v5, v6);
  PopEsSnapTelemetry(v8);
  PopEsLastStateChangeTimeStamp = 0LL;
  return PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
}
