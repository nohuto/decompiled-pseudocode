/*
 * XREFs of CmpLockCallbackListShared @ 0x1409F0BB0
 * Callers:
 *     CmpEnumerateCallback @ 0x1409F0A70 (CmpEnumerateCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpLockCallbackListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock.Header.WaitListHead, 0LL, 0LL, a4);
  v6 = 17LL;
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpContextListLock.Header.WaitListHead,
      0,
      v5,
      (struct _KTHREAD *)&CmpContextListLock.Header.WaitListHead);
  }
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, (void *)v6);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
}
