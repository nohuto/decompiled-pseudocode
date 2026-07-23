/*
 * XREFs of KiTraceSchedulingGroupRundown @ 0x1405FBCC0
 * Callers:
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405FBAC4 (-KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x1406C8D3C (EtwTraceThreadSchedulingGroupRundown.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

void __fastcall KiTraceSchedulingGroupRundown(struct _ETW_SILODRIVERSTATE *a1, unsigned int a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  void *i; // rdi
  __int64 j; // rdx
  __int64 NextProcessThread; // rax
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled
    || (Flink = KiSchedulingGroupList.Flink, KiSchedulingGroupList.Flink == &KiSchedulingGroupList) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    do
    {
      KiLogSingleSchedulingGroupRundown(a1, a2, (struct _KSCHEDULING_GROUP *)&Flink[-4]);
      Flink = Flink->Flink;
    }
    while ( Flink != &KiSchedulingGroupList );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    for ( i = (void *)PsGetNextProcess(0LL); i; i = (void *)PsGetNextProcess(i) )
    {
      for ( j = 0LL; ; j = v8 )
      {
        NextProcessThread = PsGetNextProcessThread(i, j);
        v8 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*(_DWORD *)(NextProcessThread + 120) & 0x200) == 0 )
        {
          if ( *(_QWORD *)(NextProcessThread + 104) )
            EtwTraceThreadSchedulingGroupRundown(a1, a2, NextProcessThread);
        }
      }
    }
  }
}
