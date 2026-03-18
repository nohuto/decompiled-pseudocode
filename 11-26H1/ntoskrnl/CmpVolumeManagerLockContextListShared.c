/*
 * XREFs of CmpVolumeManagerLockContextListShared @ 0x140905AD8
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14090792C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpVolumeManagerLockContextListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  __int64 v5; // rdx

  v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&KiSystemServiceTraceCallbackLock.1008, 0LL, 0LL, a4);
  v5 = 17LL;
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiSystemServiceTraceCallbackLock.1008,
      0,
      v4,
      (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.1008);
  }
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v4, (void *)v5);
    else
      *((_BYTE *)v4 + 10) = 1;
  }
}
