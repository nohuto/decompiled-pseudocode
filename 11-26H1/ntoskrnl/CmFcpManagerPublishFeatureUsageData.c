/*
 * XREFs of CmFcpManagerPublishFeatureUsageData @ 0x140ABF83C
 * Callers:
 *     CmFcShutdownSystem @ 0x140854C94 (CmFcShutdownSystem.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140ABF4C0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140ABF658 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 *     RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404EA330 (RtlpFcInitializeDelayedFeatureUsageDataBuffer.c)
 *     RtlpFcSizeOfFeatureUsageDataBuffer @ 0x1404F94C4 (RtlpFcSizeOfFeatureUsageDataBuffer.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x140ABFA00 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x140ABFBBC (RtlUpdateSwapReference.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageData(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // bp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbp
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // edx
  unsigned int v15; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v17; // r14
  size_t v18; // [rsp+50h] [rbp+8h]

  v5 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1792), 2, 0) == 1 )
  {
    if ( !a2 )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = (unsigned __int64 *)(a1 + 1400);
      --CurrentThread->KernelApcDisable;
      v8 = (AutoBoost *)KeAbPreAcquire(a1 + 1400, 0LL, 0LL, a4);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v9);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      v5 = 1;
    }
    v11 = *(_QWORD *)(a1 + 944) & 1LL;
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1320);
    if ( *(_BYTE *)(a1 + 1784) )
    {
      if ( *(_DWORD *)(v12 + 16) )
      {
        v13 = ((_BYTE)v11 - 1) & 1;
        v14 = (*(_DWORD *)(a1 + 1336) + 511 + *(_DWORD *)(v12 + 20)) & 0xFFFFFE00;
        *(_DWORD *)(a1 + 1336) = v14;
        v15 = v14 + 508;
        v18 = RtlpFcSizeOfFeatureUsageDataBuffer(v14 + 508);
        Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
        v17 = Pool2;
        if ( Pool2 )
        {
          RtlpFcInitializeDelayedFeatureUsageDataBuffer(Pool2, v18);
          v17[7] = v15;
          *(_QWORD *)(a1 + 8 * v13 + 1320) = v17;
          RtlUpdateSwapReference(a1 + 944);
          if ( (unsigned __int8)CmFcpManagerAddBufferIntoPublishListAndSetPublishState(a1, v12) == 1 )
            CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a1 + 1616));
        }
      }
    }
    else
    {
      *(_DWORD *)(v12 + 16) = 0;
    }
    if ( v5 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1400));
      KeAbPostRelease(a1 + 1400);
      KeLeaveCriticalRegion();
    }
  }
}
