/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140AC1560
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x140AC1540 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReleaseSwapReference @ 0x1403104F0 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14031057C (RtlAcquireSwapReference.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x1404DF168 (CmFcpManagerFeatureUsageBufferNearCapacityThreshold.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacity(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // r14
  __int64 v6; // rbx
  char v7; // si
  char i; // bp
  unsigned int v9; // eax
  void *v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  __int64 v14; // r9
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbx

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 944);
  --CurrentThread->KernelApcDisable;
  LODWORD(v6) = RtlAcquireSwapReference((__int64 *)(a1 + 944), a2, a3);
  v7 = 0;
  for ( i = 1; ; i = 0 )
  {
    v9 = CmFcpManagerFeatureUsageBufferNearCapacityThreshold(*(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)v6 + 1392)
                                                                       + 28LL));
    if ( (unsigned int)v10 < v9 )
      break;
    if ( v7 )
      goto LABEL_15;
    v13 = (AutoBoost *)KeAbPreAcquire(a1 + 1472, 0LL, 1LL, v12);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 1472), 0LL) )
    {
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v10);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
LABEL_15:
      if ( i )
        RtlReleaseSwapReference(v4, v6, v11);
      LOBYTE(v10) = 1;
      CmFcpManagerPublishFeatureUsageData(a1, v10);
LABEL_6:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1472), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1472));
      KeAbPostRelease(a1 + 1472);
      goto LABEL_9;
    }
    if ( v13 )
      KeAbPostReleaseEx((struct _KTHREAD *)(a1 + 1472), (unsigned __int64)v13, v11, v14);
    RtlReleaseSwapReference(v4, v6, v11);
    v16 = (AutoBoost *)KeAbPreAcquire(a1 + 1472, 0LL, 0LL, v15);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1472), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1472), v16, a1 + 1472);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v7 = 1;
    v6 = *v4 & 1;
  }
  if ( i )
    RtlReleaseSwapReference(v4, v6, v11);
  if ( v7 )
    goto LABEL_6;
LABEL_9:
  KeLeaveCriticalRegion();
}
