/*
 * XREFs of CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC
 * Callers:
 *     CmFcShutdownSystem @ 0x14085AFA4 (CmFcShutdownSystem.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140AC1560 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140AC16F8 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404E36E0 (RtlpFcInitializeDelayedFeatureUsageDataBuffer.c)
 *     RtlpFcSizeOfFeatureUsageDataBuffer @ 0x1404F2AD4 (RtlpFcSizeOfFeatureUsageDataBuffer.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x140AC1AA0 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x140AC1C5C (RtlUpdateSwapReference.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1864), 2, 0) == 1 )
  {
    if ( !a2 )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = (unsigned __int64 *)(a1 + 1472);
      --CurrentThread->KernelApcDisable;
      v8 = (AutoBoost *)KeAbPreAcquire(a1 + 1472, 0LL, 0LL, a4);
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
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1392);
    if ( *(_BYTE *)(a1 + 1856) )
    {
      if ( *(_DWORD *)(v12 + 16) )
      {
        v13 = ((_BYTE)v11 - 1) & 1;
        v14 = (*(_DWORD *)(a1 + 1408) + 511 + *(_DWORD *)(v12 + 20)) & 0xFFFFFE00;
        *(_DWORD *)(a1 + 1408) = v14;
        v15 = v14 + 508;
        v18 = RtlpFcSizeOfFeatureUsageDataBuffer(v14 + 508);
        Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
        v17 = Pool2;
        if ( Pool2 )
        {
          RtlpFcInitializeDelayedFeatureUsageDataBuffer(Pool2, v18);
          v17[7] = v15;
          *(_QWORD *)(a1 + 8 * v13 + 1392) = v17;
          RtlUpdateSwapReference(a1 + 944);
          if ( (unsigned __int8)CmFcpManagerAddBufferIntoPublishListAndSetPublishState(a1, v12) == 1 )
            CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a1 + 1688));
        }
      }
    }
    else
    {
      *(_DWORD *)(v12 + 16) = 0;
    }
    if ( v5 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1472), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1472));
      KeAbPostRelease(a1 + 1472);
      KeLeaveCriticalRegion();
    }
  }
}
