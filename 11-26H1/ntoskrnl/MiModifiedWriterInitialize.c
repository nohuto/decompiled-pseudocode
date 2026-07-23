/*
 * XREFs of MiModifiedWriterInitialize @ 0x1403FD9B8
 * Callers:
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiModifiedWriterInitialize(__int64 *a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v8; // ebp
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdx
  $241382875694CED3D471BC5892DE3337 *v15; // rcx

  v4 = *a1;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  *a2 = 0;
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(v4 + 1184, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 1184), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 1184), v9, v4 + 1184);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( !*(_QWORD *)(v4 + 1072) )
  {
    *(_QWORD *)(v4 + 1072) = CurrentThread;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    *a2 = KeSetActualBasePriorityThread((__int64)CurrentThread, 20LL, v12);
    _InterlockedExchange64((volatile __int64 *)(v4 + 1080), 0LL);
    v8 = 1;
    *(_BYTE *)(v4 + 802) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 1184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 1184));
  KeAbPostRelease(v4 + 1184);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v15 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v15->ApcState.ApcListHead[0].Flink != v15 )
      KiCheckForKernelApcDelivery((__int64)v15, v13);
  }
  return v8;
}
