/*
 * XREFs of CmpLockHiveListShared @ 0x1408B9780
 * Callers:
 *     CmpGetLastHive @ 0x1408B79D4 (CmpGetLastHive.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpLockHiveListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  __int64 v5; // rdx

  v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock.152, 0LL, 0LL, a4);
  v5 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock.152, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpContextListLock.152,
      0,
      v4,
      (struct _KTHREAD *)&CmpContextListLock.152);
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v4, (void *)v5);
    else
      *((_BYTE *)v4 + 10) = 1;
  }
}
