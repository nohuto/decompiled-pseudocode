/*
 * XREFs of PopPepIterateDeviceList @ 0x140614554
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x140507D2C (PopPlRegisterPowerPlane.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPepIterateDeviceList(
        __int64 a1,
        volatile unsigned __int8 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        char a5,
        char a6,
        __int64 a7)
{
  char v7; // bl
  __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v11; // rdi
  struct _KTHREAD *i; // rdi

  v7 = 1;
  v9 = a1;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (_BYTE *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
        0,
        (LegacyAutoBoost *)v11,
        (struct _KTHREAD *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
    }
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(a2) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v11 + 33), a2, 1);
      }
      else
      {
        v11[10] = 1;
      }
    }
  }
  if ( v9 )
    guard_dispatch_icall_no_overrides(a7, a2);
  for ( i = *(struct _KTHREAD **)&PopDirectedDripsDiagLock.ForegroundLossTime;
        i != (struct _KTHREAD *)&PopDirectedDripsDiagLock.ForegroundLossTime;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(i, a7) )
    {
      v7 = 0;
      break;
    }
  }
  if ( a3 )
  {
    LOBYTE(a1) = v7;
    guard_dispatch_icall_no_overrides(a1, a7);
  }
  if ( a6 )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
    KeLeaveCriticalRegion();
  }
  return v7;
}
