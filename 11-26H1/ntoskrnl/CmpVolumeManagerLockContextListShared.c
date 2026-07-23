/*
 * XREFs of CmpVolumeManagerLockContextListShared @ 0x140AF3660
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpVolumeManagerLockContextListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  __int64 v5; // rdx

  v4 = (LegacyAutoBoost *)KeAbPreAcquire(
                            (__int64)&KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink,
                            0LL,
                            0LL,
                            a4);
  v5 = 17LL;
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink,
      0,
      v4,
      (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList);
  }
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v4, (void *)v5);
    else
      *((_BYTE *)v4 + 10) = 1;
  }
}
