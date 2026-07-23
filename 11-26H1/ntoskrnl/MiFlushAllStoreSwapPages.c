/*
 * XREFs of MiFlushAllStoreSwapPages @ 0x1403E3DAC
 * Callers:
 *     SmpFlushStorePages @ 0x140B290C0 (SmpFlushStorePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiCanFlushMakeProgress @ 0x1403E3EF4 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1403E4038 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 */

__int64 __fastcall MiFlushAllStoreSwapPages(struct _KEVENT *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // r15d
  __int64 v6; // r12
  __int64 SignalState; // rcx
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  $241382875694CED3D471BC5892DE3337 *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( a1[54].Header.SignalState == -1 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeSetActualBasePriorityThread((__int64)CurrentThread, 20LL, a3);
  v6 = MEMORY[0xFFFFF78000000008];
  SignalState = (unsigned int)a1[54].Header.SignalState;
  _InterlockedAdd(&a1[54].Header.Lock, 2u);
  v8 = 0;
  v9 = 88 * SignalState;
  while ( *(struct _LIST_ENTRY **)((char *)&a1[192].Header.WaitListHead.Blink + v9) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(a1, 1LL, 1LL) )
    {
      MiWakeModifiedPageWriter(a1, -1LL);
      MiStoreUpdateMemoryConditions(a1);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v6) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v8 = 1;
LABEL_8:
  _InterlockedOr(&a1[54].Header.Lock, 1u);
  _InterlockedAdd(&a1[54].Header.Lock, 0xFFFFFFFE);
  KeSetEvent(a1 + 42, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v10);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v13 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13, v11);
  }
  return v8;
}
