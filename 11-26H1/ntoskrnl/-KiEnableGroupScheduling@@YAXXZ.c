/*
 * XREFs of ?KiEnableGroupScheduling@@YAXXZ @ 0x1405F8E3C
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140444BD0 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405F9184 (KeUpdateGroupSchedulingConstants.c)
 */

void KiEnableGroupScheduling(void)
{
  __int64 v0; // rcx
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    LOBYTE(v0) = 1;
    KiSchedulingGroupList.Blink = &KiSchedulingGroupList;
    KiSchedulingGroupList.Flink = &KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants(v0);
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v1 = KiProcessorBlock;
      v2 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v3 = *v1++;
        *(_QWORD *)(v3 + 35536) = v3 + 35528;
        *(_QWORD *)(v3 + 35528) = v3 + 35528;
        *(_QWORD *)(v3 + 35552) = v3 + 35544;
        *(_QWORD *)(v3 + 35544) = v3 + 35544;
        *(_DWORD *)(v3 + 216) = 464 * *(_DWORD *)(v3 + 36) + 128;
        *(_QWORD *)(v3 + 35864) = KiGenerationEndTick;
        --v2;
      }
      while ( v2 );
    }
    KiGroupSchedulingEnabled = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
