/*
 * XREFs of CmFcManagerInitialize @ 0x140CF07BC
 * Callers:
 *     CmFcInitSystem0 @ 0x140CEDAA0 (CmFcInitSystem0.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpWorkItemInitialize @ 0x14077C01C (CmpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x14080F6C0 (RtlInitializeSwapReference.c)
 *     CmSiRWLockInitialize @ 0x140B60560 (CmSiRWLockInitialize.c)
 *     CmFcpInitializeSectionState @ 0x140B6266C (CmFcpInitializeSectionState.c)
 */

__int64 *CmFcManagerInitialize()
{
  PVOID *p_SparePtr; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // edx
  __int64 v4; // r9
  __int64 v5; // r11
  int v6; // edx
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // r9
  int v10; // edx
  __int64 v11; // r9
  __int64 *result; // rax
  __int64 v13; // r11

  memset_0(&CmpFreezeListLock.WaitBlockFill11[144], 0, 0x708uLL);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.WaitBlockFill11[160]);
  p_SparePtr = &CmpFreezeListLock.WaitBlock[3].SparePtr;
  do
  {
    CmFcpInitializeSectionState((__int64)p_SparePtr);
    p_SparePtr = (PVOID *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset_0(&CmpFreezeListLock.600, 0, 0xE8uLL);
  RtlInitializeSwapReference(&CmpFreezeListLock.600);
  memset_0(&CmpFreezeListLock.SavedApcStateFill[24], 0, 0x60uLL);
  memset_0(&CmpFreezeListLock.SchedulerApcFill5[72], 0, 0x60uLL);
  RtlInitializeSwapReference(&CmpFreezeListLock.PriorityFloorCounts[16]);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.AbCompletedIoQoSBoostCount);
  LODWORD(CmpFreezeListLock.ReadOperationCount) = 275;
  *(_QWORD *)&CmpFreezeListLock.ThreadTimerDelay = 0LL;
  CmpFreezeListLock.ReadTransferCount = (__int64)CmFcpManagerDrainUsageNotificationsDpc;
  CmpFreezeListLock.OtherOperationCount = 0LL;
  CmpFreezeListLock.WriteTransferCount = (__int64)&CmpFreezeListLock.WaitBlock[3];
  CmpWorkItemInitialize(
    (__int64)CmpFreezeListLock.TracingPrivate,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)&CmpFreezeListLock.WaitBlock[3]);
  CmpWorkItemInitialize(
    (__int64)&CmpFreezeListLock.KernelShadowStack,
    v3,
    (__int64)CmFcpManagerRetryUsageNotificationsWorker,
    v4);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.Spare36);
  CmpFreezeListLock.IptSaveArea = &CmpFreezeListLock.SystemAffinityTokenListHead;
  CmpFreezeListLock.SystemAffinityTokenListHead.Next = &CmpFreezeListLock.SystemAffinityTokenListHead;
  qword_140EFBB08 = (__int64)&qword_140EFBB00;
  qword_140EFBB00 = (__int64)&qword_140EFBB00;
  CmSiRWLockInitialize(&stru_140EFB988);
  LODWORD(dword_140EFBB40) = 275;
  qword_140EFBB58 = (__int64)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc;
  qword_140EFBB60 = (__int64)&CmpFreezeListLock.WaitBlock[3];
  qword_140EFBB98 = (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc;
  qword_140EFBB78 = v5;
  qword_140EFBB50 = v5;
  LODWORD(BugCheckParameter2) = 275;
  qword_140EFBBA0 = (__int64)&CmpFreezeListLock.WaitBlock[3];
  qword_140EFBBB8 = v5;
  qword_140EFBB90 = v5;
  RtlInitializeSwapReference(qword_140EFB970);
  xmmword_140EFBB20 = 0LL;
  CmSiRWLockInitialize(&stru_140EFBB38);
  CmpWorkItemInitialize((__int64)&stru_140EFBBD0, v6, (__int64)CmFcpManagerFlushFeatureUsageDataWorker, v7);
  CmpWorkItemInitialize((__int64)&unk_140EFBC10, v8, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v9);
  CmpWorkItemInitialize((__int64)&WorkItem, v10, (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker, v11);
  result = &qword_140EFBCA8;
  qword_140EFBCB0 = (__int64)&qword_140EFBCA8;
  qword_140EFBCA8 = (__int64)&qword_140EFBCA8;
  qword_140EFBB18 = (__int64)&qword_140EFBB10;
  qword_140EFBB10 = (__int64)&qword_140EFBB10;
  qword_140EFBB30 = v13;
  word_140EFBCA0 = v13;
  byte_140EFBCA2 = 6;
  dword_140EFBCA4 = v13;
  return result;
}
