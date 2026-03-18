/*
 * XREFs of KiInitSystem @ 0x140CC9D74
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     KeAbInitialize @ 0x1405F73D0 (KeAbInitialize.c)
 *     HviGetHypervisorFeatures @ 0x1406DC730 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KiInitializeIdleProcess @ 0x140CC81A4 (KiInitializeIdleProcess.c)
 *     KiForceSymbolReferences @ 0x140CC9AA0 (KiForceSymbolReferences.c)
 */

__int64 __fastcall KiInitSystem(struct _KPROCESS *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences((__int64)a1, a2, a3, a4);
  qword_140F26CE8 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140F26D18 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140F26CF8 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140F26D08 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KiSupervisorXStateFeaturesLock.UserAffinity = (_KAFFINITY_EX *)&KiSupervisorXStateFeaturesLock.Process;
  KiSupervisorXStateFeaturesLock.Process = (_KPROCESS *)&KiSupervisorXStateFeaturesLock.Process;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.NextProcessor = &KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
  KiSupervisorXStateFeaturesLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
  KiSupervisorXStateFeaturesLock.ThreadLock = (unsigned __int64)&KiSupervisorXStateFeaturesLock.StackBase;
  KiSupervisorXStateFeaturesLock.StackBase = &KiSupervisorXStateFeaturesLock.StackBase;
  *(_QWORD *)KeServiceDescriptorTable = KiServiceTable;
  *(_DWORD *)&KeServiceDescriptorTable[16] = KiServiceLimit;
  *(_QWORD *)&KeServiceDescriptorTable[24] = &KiArgumentTable;
  qword_140F26998 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140F269A0 = (__int64)&KiSupervisorXStateFeaturesLock.NpxState;
  KiSupervisorXStateFeaturesLock.SavedApcState.ApcListHead[0].Blink = KiSupervisorXStateFeaturesLock.SavedApcState.ApcListHead;
  KiSupervisorXStateFeaturesLock.SavedApcState.ApcListHead[0].Flink = KiSupervisorXStateFeaturesLock.SavedApcState.ApcListHead;
  LODWORD(xmmword_1412018F0) = 0;
  KiSupervisorXStateFeaturesLock.Spare35[1] = (unsigned __int64)KiSupervisorXStateFeaturesLock.Spare35;
  KiSupervisorXStateFeaturesLock.Spare35[0] = (unsigned __int64)KiSupervisorXStateFeaturesLock.Spare35;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSupervisorXStateFeaturesLock.StackLimit) = 1;
  BYTE2(KiSupervisorXStateFeaturesLock.StackLimit) = 6;
  HIDWORD(KiSupervisorXStateFeaturesLock.StackLimit) = 0;
  KiSupervisorXStateFeaturesLock.AffinityVersion = 0LL;
  KiSupervisorXStateFeaturesLock.SListFaultAddress = 0LL;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup = 0LL;
  stru_140FC01F0.WaitBlock[3] = *(_KWAIT_BLOCK *)KeServiceDescriptorTable;
  *(_OWORD *)&stru_140FC01F0.ThreadFlags2 = xmmword_1412018F0;
  *(_OWORD *)&stru_140FC01F0.MutantListHead.Blink = *(_OWORD *)KeServiceDescriptorTable;
  *(_OWORD *)&stru_140FC01F0.SchedulerSharedSystemSlot = *(_OWORD *)&KeServiceDescriptorTable[16];
  *(_OWORD *)&stru_140FC01F0.IoSelfBoostsEntry.Next = *(_OWORD *)&KeServiceDescriptorTable[32];
  *(_OWORD *)&stru_140FC01F0.PriorityFloorCounts[8] = xmmword_1412018F0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_140F269B8 = 0LL;
  qword_140F26990 = 0LL;
  LOWORD(KiSupervisorXStateFeaturesLock.NpxState) = 1;
  BYTE2(KiSupervisorXStateFeaturesLock.NpxState) = 6;
  HIDWORD(KiSupervisorXStateFeaturesLock.NpxState) = 0;
  LOWORD(KiSupervisorXStateFeaturesLock.WpsFeedback) = 0;
  BYTE2(KiSupervisorXStateFeaturesLock.WpsFeedback) = 6;
  HIDWORD(KiSupervisorXStateFeaturesLock.WpsFeedback) = 0;
  KeAbInitialize();
  *(_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144] = 1;
  KiSupervisorXStateFeaturesLock.WaitBlock[3].WaitListEntry.Blink = 0LL;
  *(_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[160] = 0;
  *(_WORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[168] = 1;
  KiSupervisorXStateFeaturesLock.WaitBlockFill11[170] = 6;
  *(_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[172] = 0;
  LODWORD(KiSupervisorXStateFeaturesLock.SystemAffinityTokenListHead.Next) = 1;
  KiSupervisorXStateFeaturesLock.LastXStateSaveDebugInfo = (unsigned __int64)&KiSupervisorXStateFeaturesLock.Spare18;
  KiSupervisorXStateFeaturesLock.Spare18 = (unsigned __int64)&KiSupervisorXStateFeaturesLock.Spare18;
  KiSupervisorXStateFeaturesLock.Spare32 = &KiSupervisorXStateFeaturesLock.1136;
  KiSupervisorXStateFeaturesLock.AutoBoostThreadState = &KiSupervisorXStateFeaturesLock.1136;
  KiSupervisorXStateFeaturesLock.Padding[2] = (unsigned __int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_140F267C8 = (__int64)&qword_140F267C0;
  qword_140F267C0 = (__int64)&qword_140F267C0;
  KiSupervisorXStateFeaturesLock.IptSaveArea = 0LL;
  *(_DWORD *)&KiSupervisorXStateFeaturesLock.ResourceIndex = 0;
  LOWORD(KiSupervisorXStateFeaturesLock.SchedulerSharedSwappablePage) = 1;
  BYTE2(KiSupervisorXStateFeaturesLock.SchedulerSharedSwappablePage) = 6;
  HIDWORD(KiSupervisorXStateFeaturesLock.SchedulerSharedSwappablePage) = 0;
  LODWORD(KiSupervisorXStateFeaturesLock.SchedulerAssistLastYieldBoostTime) = 531;
  KiSupervisorXStateFeaturesLock.Padding[3] = 0LL;
  qword_140F267B8 = 0LL;
  KiSupervisorXStateFeaturesLock.Padding[1] = 0LL;
  KiInitializeIdleProcess(a1);
  result = HviGetHypervisorFeatures(&v6);
  if ( (HIDWORD(v6) & 0x10000000) != 0 )
    KiCrossTlbFlushSupported = 1;
  return result;
}
