/*
 * XREFs of MiZeroAllPageFiles @ 0x140C066B4
 * Callers:
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MiZeroPageFile @ 0x1406EB650 (MiZeroPageFile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  signed __int8 v4; // cf
  AutoBoost *v5; // rsi
  __int64 v6; // rbp
  ULONG v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  ULONG v11; // edi
  __int64 v12; // r15
  struct _KEVENT *v13; // rbp
  int CurrentProcessorColor; // eax
  struct _WORK_QUEUE_ITEM *PoolMm; // rbx
  PVOID Object[64]; // [rsp+50h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+250h] [rbp-328h] BYREF

  memset_0(Object, 0, 0x80uLL);
  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E37F48.ReadTransferCount, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E37F48.ReadTransferCount, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E37F48.ReadTransferCount,
      v2,
      (__int64)&stru_140E37F48.ReadTransferCount);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v3);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v6 = qword_140E37F38;
  v7 = Count;
  if ( (_InterlockedExchangeAdd64(&stru_140E37F48.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140E37F48.ReadTransferCount);
  KeAbPostRelease((unsigned __int64)&stru_140E37F48.ReadTransferCount);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9, v8);
  if ( v6 && v7 )
  {
    KeWaitForSingleObject(&stru_140E37F48.SavedApcStateFill[24], WrKernel, 0, 0, 0LL);
    v11 = v7;
    do
    {
      v12 = v11 - 1;
      v13 = (struct _KEVENT *)&Object[3 * v12 + 16];
      KeInitializeEvent(v13, NotificationEvent, 0);
      Object[v12] = v13;
      if ( (*(_BYTE *)(*((_QWORD *)&MiSystemPartition + v12 + 2788) + 172LL) & 0x40) != 0
        || (CurrentProcessorColor = MmGetCurrentProcessorColor(),
            (PoolMm = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolMm(
                                                   64LL,
                                                   0x30uLL,
                                                   2002414925,
                                                   CurrentProcessorColor | 0x80000000)) == 0LL) )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v12 + 16], 0, 0);
      }
      else
      {
        PoolMm[1].List.Flink = (struct _LIST_ENTRY *)*((_QWORD *)&MiSystemPartition + v12 + 2788);
        PoolMm[1].List.Blink = (struct _LIST_ENTRY *)v13;
        if ( v11 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v12 + 16], 0, 0);
          MiZeroPageFile(PoolMm);
        }
        else
        {
          PoolMm->Parameter = PoolMm;
          PoolMm->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          PoolMm->List.Flink = 0LL;
          ExQueueWorkItem(PoolMm, CriticalWorkQueue);
        }
      }
      --v11;
    }
    while ( (_DWORD)v12 );
    if ( v7 > 1 )
      KeWaitForMultipleObjects(v7, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
