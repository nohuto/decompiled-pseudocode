/*
 * XREFs of PopPepRemoveDevice @ 0x1404EE33C
 * Callers:
 *     PopPepUnregisterDevice @ 0x140B08930 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopPepRemoveDevice(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  __int64 *v10; // rdx
  __int64 **v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
      v6,
      (__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( PopPepLastCheckedDevice == (_UNKNOWN *)a1 )
    PopPepLastCheckedDevice = (_UNKNOWN *)*a1;
  v10 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v11 = (__int64 **)a1[1], *v11 != a1) )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = (__int64)v11;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeLeaveCriticalRegion();
}
