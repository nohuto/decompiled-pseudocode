/*
 * XREFs of CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B482E0
 * Callers:
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14077A728 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 *     PfpPartitionToParent @ 0x1404D5F40 (PfpPartitionToParent.c)
 *     CmFcpManagerAllocateChangeSubscription @ 0x140B48410 (CmFcpManagerAllocateChangeSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureConfigurationChangeNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _SINGLE_LIST_ENTRY ***a5)
{
  unsigned int v6; // esi
  _SINGLE_LIST_ENTRY **v7; // rdi
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbp
  _SINGLE_LIST_ENTRY *IptSaveArea; // rax

  v6 = 0;
  v7 = (_SINGLE_LIST_ENTRY **)CmFcpManagerAllocateChangeSubscription();
  if ( v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Spare36, 0LL, 0LL, v8);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Spare36, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&CmpFreezeListLock.Spare36,
        v10,
        (__int64)&CmpFreezeListLock.Spare36);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    IptSaveArea = (_SINGLE_LIST_ENTRY *)CmpFreezeListLock.IptSaveArea;
    if ( *(struct _KTHREAD **)CmpFreezeListLock.IptSaveArea != (struct _KTHREAD *)&CmpFreezeListLock.SystemAffinityTokenListHead )
      __fastfail(3u);
    *v7 = &CmpFreezeListLock.SystemAffinityTokenListHead;
    v7[1] = IptSaveArea;
    IptSaveArea->Next = (struct _SINGLE_LIST_ENTRY *)v7;
    CmpFreezeListLock.IptSaveArea = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Spare36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Spare36);
    KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Spare36);
    KeLeaveCriticalRegion();
    if ( a4 && PfpPartitionToParent((__int64)&CmpFreezeListLock.WaitBlock[3].Thread) != *a4 )
      CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v7 + 2));
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
