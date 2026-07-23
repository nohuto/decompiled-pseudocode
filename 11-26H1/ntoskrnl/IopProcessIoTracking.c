/*
 * XREFs of IopProcessIoTracking @ 0x1405CE660
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403FB3E8 (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404A4C04 (ExfTryAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 *i; // rbx
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
  v7 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopPerfIoTrackingLock.Header.Lock, 0) )
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
    for ( i = (__int64 *)IopPerfIoTrackingListHead; i != &IopPerfIoTrackingListHead; i = (__int64 *)*i )
      guard_dispatch_icall_no_overrides(&v13, v6);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&IopPerfIoTrackingLock);
  }
  else if ( v7 )
  {
    KeAbPostReleaseEx(&IopPerfIoTrackingLock, v7, v8, v9);
  }
  if ( v4 == 1 )
  {
    v10 = KeGetCurrentThread();
    if ( v10->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    {
      KiCheckForKernelApcDelivery((__int64)v10, (__int64)v6);
    }
  }
}
