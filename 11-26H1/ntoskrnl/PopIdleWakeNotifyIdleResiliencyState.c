/*
 * XREFs of PopIdleWakeNotifyIdleResiliencyState @ 0x1404DBE60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleWakeInsertTimeInterval @ 0x1404EA5E8 (PopIdleWakeInsertTimeInterval.c)
 */

void __fastcall PopIdleWakeNotifyIdleResiliencyState(char a1)
{
  KIRQL v2; // al
  int *v3; // rbx
  KIRQL v4; // r14
  unsigned int v5; // edx
  BOOL v6; // ecx
  unsigned __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdi
  struct _LIST_ENTRY *v10; // rcx
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopAdaptiveStandbyLock.KernelShadowStack);
  v3 = *(int **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor;
  v4 = v2;
  if ( *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor )
  {
    v5 = **(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor;
    if ( (**(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor & 0x10) != 0 )
    {
      v6 = a1 == 0;
      if ( ((v5 >> 1) & 1) != v6 )
      {
        **(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor = v5 & 0xFFFFFFFD | (2 * v6);
        RtlGetInterruptTimePrecise(&v11);
        v7 = v11;
        v8 = *v3;
        v9 = v11 - *((_QWORD *)v3 + 1);
        if ( (*v3 & 8) == 0 )
        {
          v10 = (struct _LIST_ENTRY *)(v11 - *((_QWORD *)v3 + 6));
          if ( v10 > PopAdaptiveStandbyLock.GlobalUpdateVpThreadPriorityListEntry.Flink )
            *v3 = v8 | 4;
          PopIdleWakeInsertTimeInterval(
            (_DWORD)v10,
            6,
            PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor + 72,
            PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor + 96,
            (__int64)&PopIdleSpuriousWakeBucketLimitsQpc);
          *v3 |= 8u;
          v8 = *v3;
        }
        if ( a1 )
        {
          *((_QWORD *)v3 + 2) += v9;
        }
        else if ( (v8 & 1) != 0 )
        {
          *((_QWORD *)v3 + 3) += v9;
        }
        else
        {
          *((_QWORD *)v3 + 4) += v9;
        }
        *((_QWORD *)v3 + 1) = v7;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopAdaptiveStandbyLock.KernelShadowStack, v4);
}
