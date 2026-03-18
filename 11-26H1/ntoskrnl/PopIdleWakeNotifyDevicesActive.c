/*
 * XREFs of PopIdleWakeNotifyDevicesActive @ 0x14042D294
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14042C75C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopIdleWakeNotifyDevicesActive(unsigned __int8 a1)
{
  int v1; // edi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si
  int v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v8 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopAdaptiveStandbyLock.KernelShadowStack);
  v3 = *(_QWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor;
  v4 = v2;
  if ( *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor )
  {
    v5 = **(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor;
    if ( (**(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor & 0x10) != 0
      && (**(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor & 1) != v1 )
    {
      **(_DWORD **)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor = v5 ^ ((unsigned __int8)v1 ^ (unsigned __int8)v5) & 1;
      if ( (((unsigned __int8)v5 ^ ((unsigned __int8)v1 ^ (unsigned __int8)v5) & 1) & 2) == 0 )
      {
        RtlGetInterruptTimePrecise(&v8);
        v6 = v8;
        v7 = v8 - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopAdaptiveStandbyLock.KernelShadowStack, v4);
}
