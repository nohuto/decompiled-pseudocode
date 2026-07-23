/*
 * XREFs of MiShutdownSystem @ 0x140C0646C
 * Callers:
 *     MmShutdownSystem @ 0x140C06930 (MmShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     CcNotifyWriteBehind @ 0x1405B3550 (CcNotifyWriteBehind.c)
 *     MiDeleteHardwareAccelerators @ 0x14071419C (MiDeleteHardwareAccelerators.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiDeletePagingFiles @ 0x140871C3C (MiDeletePagingFiles.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x140B3F774 (MiFreeLoadedImportList.c)
 *     MiZeroAllPageFiles @ 0x140C066B4 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  signed __int8 v4; // cf
  AutoBoost *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  struct _KTHREAD *Lock; // rax
  PVOID *v10; // rbx
  struct _KTHREAD *v11; // rbp
  _QWORD *v12; // rdi
  ULONG_PTR v13; // r14
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  void *v16; // rsi
  PVOID v17; // rcx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !HIDWORD(stru_140E2ED08.RelativeTimerBias) )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages(0);
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
    HIDWORD(stru_140E2ED08.RelativeTimerBias) = 1;
    if ( (_InterlockedExchangeAdd64(&stru_140E37F48.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&stru_140E37F48.ReadTransferCount);
    KeAbPostRelease((unsigned __int64)&stru_140E37F48.ReadTransferCount);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v7, v6);
    KeSetEvent(&stru_140E37E98, 0, 0);
    KeSetEvent((PRKEVENT)&stru_140E2ED08.Timer.Header.WaitListHead, 0, 0);
    MiDeleteHardwareAccelerators(0LL, 1);
    if ( BYTE2(stru_140E2ED08.RelativeTimerBias) )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
    MiDeleteAllHardwareEnclaves();
  }
  if ( PopShutdownCleanly )
  {
    v19 = 0LL;
    Lock = MmAcquireLoadLock();
    v10 = (PVOID *)PsLoadedModuleList;
    v11 = Lock;
    while ( v10 != &PsLoadedModuleList )
    {
      v12 = v10[17];
      if ( v12 != (_QWORD *)1 && v12 != (_QWORD *)-2LL && ((unsigned __int8)v12 & 1) == 0 )
      {
        v13 = 8LL * *v12 + 8;
        CurrentProcessorColor = MmGetCurrentProcessorColor();
        PoolMm = (void *)ExAllocatePoolMm(64LL, v13, 1413770573, CurrentProcessorColor | 0x80000000);
        v16 = PoolMm;
        if ( !PoolMm )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolMm, v12, v13);
        MiFreeLoadedImportList(v12);
        v10[17] = v16;
      }
      v17 = v10[10];
      if ( v17 )
      {
        ExFreePoolWithTag(v17, 0);
        v10[10] = 0LL;
      }
      v10 = (PVOID *)*v10;
    }
    MmReleaseLoadLock(v11);
    MiDeletePagingFiles((__int64)&MiSystemPartition, &v19);
  }
  return 1;
}
