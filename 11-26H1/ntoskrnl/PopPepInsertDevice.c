/*
 * XREFs of PopPepInsertDevice @ 0x1404F74FC
 * Callers:
 *     PopPepRegisterDevice @ 0x140B3DA28 (PopPepRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopPepInsertDevice(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  struct _LIST_ENTRY *Flink; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
      v6,
      (__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( PopPepLastCheckedDevice == (_UNKNOWN *)&PopDirectedDripsDiagLock.ForegroundLossTime )
    PopPepLastCheckedDevice = (_UNKNOWN *)a2;
  Flink = PopDirectedDripsDiagLock.GlobalForegroundListEntry.Flink;
  if ( PopDirectedDripsDiagLock.GlobalForegroundListEntry.Flink->Flink != (struct _LIST_ENTRY *)&PopDirectedDripsDiagLock.ForegroundLossTime )
    __fastfail(3u);
  *(_QWORD *)a2 = &PopDirectedDripsDiagLock.ForegroundLossTime;
  *(_QWORD *)(a2 + 8) = Flink;
  Flink->Flink = (struct _LIST_ENTRY *)a2;
  PopDirectedDripsDiagLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)a2;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
  KeLeaveCriticalRegion();
}
