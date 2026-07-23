/*
 * XREFs of ObpDeregisterObject @ 0x14077CC7C
 * Callers:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PfSnGetFileInformation @ 0x140265260 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140268D80 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269180 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DEF10 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403E0C70 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403E1A1C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x140445B10 (ExpAddCurrentThreadToThreadHistory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A66D00 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     ObpDestroyObjectRefsByStack @ 0x1407C7A50 (ObpDestroyObjectRefsByStack.c)
 *     ObpProcessPushStackInfoList @ 0x1407C7FB8 (ObpProcessPushStackInfoList.c)
 *     EtwTraceObject @ 0x14082DD04 (EtwTraceObject.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // al
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rbp
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  __int64 v12; // rdx
  _QWORD *i; // rcx
  __int64 v14; // rax

  if ( (xmmword_140FC0C10 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  v5 = *(_BYTE *)(a1 + 25);
  if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64(&ObpStackTraceLock.Header.Lock, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ObpStackTraceLock, v8, (__int64)&ObpStackTraceLock);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( (ObpTraceFlags & 0xF3) != 0 )
    {
      ObpProcessPushStackInfoList();
      v12 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      for ( i = (_QWORD *)*((_QWORD *)&ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink->Flink + v12);
            i;
            i = (_QWORD *)i[1] )
      {
        if ( *i == a1 )
        {
          v14 = i[1];
          if ( v7 )
            v7[1] = v14;
          else
            *((_QWORD *)&ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink->Flink + v12) = v14;
          --*(_DWORD *)&ObpStackTraceLock.SavedApcStateFill[8];
          if ( (ObpTraceFlags & 0x80u) == 0 )
            ObpTraceFreeMemory(i);
          else
            ObpDestroyObjectRefsByStack(i);
          break;
        }
        v7 = i;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
  }
}
