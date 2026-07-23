/*
 * XREFs of PspLockJobListShared @ 0x140A86C8C
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PspLockJobListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  __int64 v5; // rdx

  --*(_WORD *)(a1 + 486);
  v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.Affinity, 0LL, 0LL, a4);
  v5 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.Affinity, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.Affinity,
      0,
      v4,
      (struct _KTHREAD *)&PspSiloMonitorLock.Affinity);
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v4, (void *)v5);
    else
      *((_BYTE *)v4 + 10) = 1;
  }
}
