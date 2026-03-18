/*
 * XREFs of IopProcessIoTracking @ 0x1405CBDF0
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403FEBF8 (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404AB574 (ExfTryAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopProcessIoTracking(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rcx
  struct _KTHREAD *i; // rbx
  __int16 v13; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+32h] [rbp-46h]
  __int16 v15; // [rsp+36h] [rbp-42h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]

  v16 = a1;
  v14 = 0;
  v4 = 0;
  v15 = 0;
  v17 = a2;
  v13 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  v7 = KeAbPreAcquire((__int64)&IopSessionNotificationLock.Timer.DueTime, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64(
          (volatile signed __int64 *)&IopSessionNotificationLock.Timer.DueTime.QuadPart,
          17LL,
          0LL)
    || ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopSessionNotificationLock.Timer.DueTime, 0) )
  {
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v6) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v7 + 33), v6, 1);
      }
      else
      {
        *(_BYTE *)(v7 + 10) = 1;
      }
    }
    for ( i = (struct _KTHREAD *)IopSessionNotificationLock.Timer.TimerListEntry.Blink;
          i != (struct _KTHREAD *)&IopSessionNotificationLock.Timer.TimerListEntry.Blink;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      guard_dispatch_icall_no_overrides(&v13, v6);
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&IopSessionNotificationLock.Timer.DueTime.QuadPart,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopSessionNotificationLock.Timer.DueTime);
    KeAbPostRelease((unsigned __int64)&IopSessionNotificationLock.Timer.DueTime);
  }
  else if ( v7 )
  {
    KeAbPostReleaseEx((struct _KTHREAD *)&IopSessionNotificationLock.Timer.DueTime, v7, v8, v9);
  }
  if ( v4 == 1 )
  {
    v10 = KeGetCurrentThread();
    if ( v10->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    {
      KiCheckForKernelApcDelivery((__int64)v10, (__int64)v6);
    }
  }
}
