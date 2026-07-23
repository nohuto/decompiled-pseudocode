/*
 * XREFs of PspLockAffinityUpdateShared @ 0x140618560
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x140B71A98 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall PspLockAffinityUpdateShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _BYTE *v4; // rbx
  __int64 v5; // rdx

  --*(_WORD *)(a1 + 484);
  v4 = (_BYTE *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.AffinityPrimaryGroup, 0LL, 0LL, a4);
  v5 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.AffinityPrimaryGroup,
      0,
      (LegacyAutoBoost *)v4,
      (struct _KTHREAD *)&PspSiloMonitorLock.AffinityPrimaryGroup);
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v5) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v4 + 33), (volatile unsigned __int8 *)v5, 1);
    }
    else
    {
      v4[10] = 1;
    }
  }
}
