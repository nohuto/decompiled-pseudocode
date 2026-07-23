/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B4A070
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14077D658 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140B4A1A0 (CmFcpManagerAllocateChangeSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureConfigurationChangeNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbp
  _QWORD *OtherTransferCount; // rax

  v6 = 0;
  v7 = CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.ReadTransferCount, 0LL, 0LL, v8);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.ReadTransferCount, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&CmpFreezeListLock.ReadTransferCount,
        v10,
        (__int64)&CmpFreezeListLock.ReadTransferCount);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    OtherTransferCount = (_QWORD *)CmpFreezeListLock.OtherTransferCount;
    if ( *(struct _KTHREAD **)CmpFreezeListLock.OtherTransferCount != (struct _KTHREAD *)&CmpFreezeListLock.WriteTransferCount )
      __fastfail(3u);
    *(_QWORD *)v7 = &CmpFreezeListLock.WriteTransferCount;
    *(_QWORD *)(v7 + 8) = OtherTransferCount;
    *OtherTransferCount = v7;
    CmpFreezeListLock.OtherTransferCount = v7;
    if ( (_InterlockedExchangeAdd64(&CmpFreezeListLock.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&CmpFreezeListLock.ReadTransferCount);
    KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.ReadTransferCount);
    KeLeaveCriticalRegion();
    if ( a4 && PfpPartitionToParent((__int64)&CmpFreezeListLock.Timer.Processor) != *a4 )
      CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 16));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
