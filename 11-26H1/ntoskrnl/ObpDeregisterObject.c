/*
 * XREFs of ObpDeregisterObject @ 0x140779D4C
 * Callers:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PfSnGetFileInformation @ 0x140265CF0 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140269810 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269C10 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402C2960 (ExpLeaveWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037D550 (IopProcessWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403DDA80 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403DE82C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x14044D9E0 (ExpAddCurrentThreadToThreadHistory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A59D90 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     ObpDestroyObjectRefsByStack @ 0x1407C49F0 (ObpDestroyObjectRefsByStack.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 *     EtwTraceObject @ 0x140827AC4 (EtwTraceObject.c)
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

  if ( (xmmword_140FBFC10 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  v5 = *(_BYTE *)(a1 + 25);
  if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64(&stru_140F132C8.Header.Lock, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v8, (__int64)&stru_140F132C8);
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
      for ( i = (_QWORD *)*((_QWORD *)qword_140F13228 + v12); i; i = (_QWORD *)i[1] )
      {
        if ( *i == a1 )
        {
          v14 = i[1];
          if ( v7 )
            v7[1] = v14;
          else
            *((_QWORD *)qword_140F13228 + v12) = v14;
          --LODWORD(stru_140F12D20.Padding[4]);
          if ( (ObpTraceFlags & 0x80u) == 0 )
            ObpTraceFreeMemory(i);
          else
            ObpDestroyObjectRefsByStack(i);
          break;
        }
        v7 = i;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140F132C8);
    KeLeaveGuardedRegion();
  }
}
