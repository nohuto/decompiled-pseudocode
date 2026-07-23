/*
 * XREFs of CmFcManagerInitialize @ 0x140CF6B34
 * Callers:
 *     CmFcInitSystem0 @ 0x140CF3DA4 (CmFcInitSystem0.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpWorkItemInitialize @ 0x14077EB9C (CmpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x140815150 (RtlInitializeSwapReference.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 *     CmFcpInitializeSectionState @ 0x140B6570C (CmFcpInitializeSectionState.c)
 */

__int64 *CmFcManagerInitialize()
{
  struct _LIST_ENTRY **p_Blink; // rcx
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

  memset_0(&CmpFreezeListLock.Timer.TimerListEntry, 0, 0x750uLL);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.Timer.Dpc);
  p_Blink = &CmpFreezeListLock.WaitBlock[0].WaitListEntry.Blink;
  do
  {
    CmFcpInitializeSectionState((__int64)p_Blink);
    p_Blink = (struct _LIST_ENTRY **)(v1 + 24);
  }
  while ( v2 != 1 );
  memset_0(&CmpFreezeListLock.WaitBlockFill11[104], 0, 0xE8uLL);
  RtlInitializeSwapReference(&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink);
  memset_0(&CmpFreezeListLock.WaitBlockFill11[128], 0, 0x60uLL);
  memset_0(&CmpFreezeListLock.Process, 0, 0x60uLL);
  RtlInitializeSwapReference(&CmpFreezeListLock.SchedulerApc.ApcListEntry.Flink);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.SchedulerApc.Reserved[1]);
  *(_DWORD *)&CmpFreezeListLock.SchedulerApcFill5[72] = 275;
  CmpFreezeListLock.MutantListHead.Flink = 0LL;
  CmpFreezeListLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)CmFcpManagerDrainUsageNotificationsDpc;
  *(_QWORD *)&CmpFreezeListLock.SuspendEvent.Header.Lock = 0LL;
  CmpFreezeListLock.SuspendEvent.Header.WaitListHead.Blink = &CmpFreezeListLock.Timer.TimerListEntry;
  CmpWorkItemInitialize(
    (__int64)&CmpFreezeListLock.MutantListHead.Blink,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)&CmpFreezeListLock.Timer.TimerListEntry);
  CmpWorkItemInitialize(
    (__int64)&CmpFreezeListLock.PriorityFloorSummary,
    v3,
    (__int64)CmFcpManagerRetryUsageNotificationsWorker,
    v4);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&CmpFreezeListLock.ReadTransferCount);
  CmpFreezeListLock.OtherTransferCount = (__int64)&CmpFreezeListLock.WriteTransferCount;
  CmpFreezeListLock.WriteTransferCount = (__int64)&CmpFreezeListLock.WriteTransferCount;
  qword_140EFBE70 = (__int64)&qword_140EFBE68;
  qword_140EFBE68 = (__int64)&qword_140EFBE68;
  CmSiRWLockInitialize(&stru_140EFBCA8);
  LODWORD(dword_140EFBEA8[0]) = 275;
  qword_140EFBEC0 = (__int64)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc;
  qword_140EFBEC8 = (__int64)&CmpFreezeListLock.Timer.TimerListEntry;
  qword_140EFBF00 = (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc;
  qword_140EFBEE0 = v5;
  qword_140EFBEB8 = v5;
  LODWORD(BugCheckParameter2[0]) = 275;
  qword_140EFBF08 = (__int64)&CmpFreezeListLock.Timer.TimerListEntry;
  qword_140EFBF20 = v5;
  qword_140EFBEF8 = v5;
  RtlInitializeSwapReference(qword_140EFBC90);
  xmmword_140EFBE88 = 0LL;
  CmSiRWLockInitialize(&stru_140EFBEA0);
  CmpWorkItemInitialize((__int64)&stru_140EFBF38, v6, (__int64)CmFcpManagerFlushFeatureUsageDataWorker, v7);
  CmpWorkItemInitialize((__int64)&unk_140EFBF78, v8, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v9);
  CmpWorkItemInitialize(
    (__int64)&stru_140EFBFB8,
    v10,
    (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker,
    v11);
  result = &qword_140EFC010;
  qword_140EFC018 = (__int64)&qword_140EFC010;
  qword_140EFC010 = (__int64)&qword_140EFC010;
  qword_140EFBE80 = (__int64)&qword_140EFBE78;
  qword_140EFBE78 = (__int64)&qword_140EFBE78;
  qword_140EFBE98 = v13;
  word_140EFC008 = v13;
  byte_140EFC00A = 6;
  dword_140EFC00C = v13;
  return result;
}
