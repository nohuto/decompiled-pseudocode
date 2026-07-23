/*
 * XREFs of KiInitSystem @ 0x140CCFE5C
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeAbInitialize @ 0x1405F9D90 (KeAbInitialize.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiInitializeIdleProcess @ 0x140CCE294 (KiInitializeIdleProcess.c)
 *     KiForceSymbolReferences @ 0x140CCFB88 (KiForceSymbolReferences.c)
 */

__int64 __fastcall KiInitSystem(struct _KPROCESS *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences((__int64)a1, a2, a3, a4);
  KiSupervisorXStateFeaturesLock.CycleTime = (volatile unsigned __int64)&KiSupervisorXStateFeaturesLock.ThreadLock;
  KiSupervisorXStateFeaturesLock.ThreadLock = (unsigned __int64)&KiSupervisorXStateFeaturesLock.ThreadLock;
  KiSupervisorXStateFeaturesLock.InitialStack = &KiSupervisorXStateFeaturesLock.QuantumTarget;
  KiSupervisorXStateFeaturesLock.QuantumTarget = (unsigned __int64)&KiSupervisorXStateFeaturesLock.QuantumTarget;
  KiSupervisorXStateFeaturesLock.SListFaultAddress = &KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  KiSupervisorXStateFeaturesLock.StackBase = (void *)&KiSupervisorXStateFeaturesLock.StackLimit;
  KiSupervisorXStateFeaturesLock.StackLimit = (void *volatile)&KiSupervisorXStateFeaturesLock.StackLimit;
  qword_140F26BC8 = (__int64)&qword_140F26BC0;
  qword_140F26BC0 = (__int64)&qword_140F26BC0;
  qword_140F26B88 = (__int64)&qword_140F26B80;
  qword_140F26B80 = (__int64)&qword_140F26B80;
  KiSupervisorXStateFeaturesLock.Timer.Dpc = (_KDPC *)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry.Blink;
  KiSupervisorXStateFeaturesLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry.Blink;
  *(_QWORD *)KeServiceDescriptorTable = KiServiceTable;
  *(_DWORD *)&KeServiceDescriptorTable[16] = KiServiceLimit;
  *(_QWORD *)&KeServiceDescriptorTable[24] = &KiArgumentTable;
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&KiSupervisorXStateFeaturesLock.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)KiBalanceSetManagerDeferredRoutine;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.SystemCallNumber = &word_140F26BA0;
  qword_140F26BB0 = (__int64)&qword_140F26BA8;
  qword_140F26BA8 = (__int64)&qword_140F26BA8;
  LODWORD(xmmword_1412018F0) = 0;
  qword_140F26B10 = (__int64)&qword_140F26B08;
  qword_140F26B08 = (__int64)&qword_140F26B08;
  KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink = 0LL;
  LOWORD(KiSupervisorXStateFeaturesLock.Timer.TimerListEntry.Flink) = 1;
  BYTE2(KiSupervisorXStateFeaturesLock.Timer.TimerListEntry.Flink) = 6;
  HIDWORD(KiSupervisorXStateFeaturesLock.Timer.TimerListEntry.Flink) = 0;
  qword_140F26B90 = 0LL;
  KiSupervisorXStateFeaturesLock.Timer.DueTime.QuadPart = 0LL;
  qword_140F26B70 = 0LL;
  stru_140FC11F0.WaitBlock[3] = *(_KWAIT_BLOCK *)KeServiceDescriptorTable;
  *(_OWORD *)&stru_140FC11F0.ThreadFlags2 = xmmword_1412018F0;
  *(_OWORD *)&stru_140FC11F0.MutantListHead.Blink = *(_OWORD *)KeServiceDescriptorTable;
  *(_OWORD *)&stru_140FC11F0.SchedulerSharedSystemSlot = *(_OWORD *)&KeServiceDescriptorTable[16];
  *(_OWORD *)&stru_140FC11F0.IoSelfBoostsEntry.Next = *(_OWORD *)&KeServiceDescriptorTable[32];
  *(_OWORD *)&stru_140FC11F0.PriorityFloorCounts[8] = xmmword_1412018F0;
  LODWORD(KiSupervisorXStateFeaturesLock.StateSaveArea) = 275;
  KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Flink = 0LL;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitRegister.Flags = 0LL;
  word_140F26BA0 = 1;
  byte_140F26BA2 = 6;
  dword_140F26BA4 = 0;
  LOWORD(word_140F26B00.Header.Lock) = 0;
  byte_140F26B02 = 6;
  dword_140F26B04 = 0;
  KeAbInitialize();
  *(_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56] = 1;
  KiSupervisorXStateFeaturesLock.SchedulerApc.SystemArgument1 = 0LL;
  *(_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[72] = 0;
  *(_WORD *)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[80] = 1;
  KiSupervisorXStateFeaturesLock.SchedulerApc.Inserted = 6;
  KiSupervisorXStateFeaturesLock.UserTime = 0;
  LODWORD(KiSupervisorXStateFeaturesLock.KcsanThread) = 1;
  KiSupervisorXStateFeaturesLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.SuspendEvent;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.SuspendEvent.Header.Lock = &KiSupervisorXStateFeaturesLock.SuspendEvent;
  KiSupervisorXStateFeaturesLock.Padding[2] = (unsigned __int64)&KiSupervisorXStateFeaturesLock.Padding[1];
  KiSupervisorXStateFeaturesLock.Padding[1] = (unsigned __int64)&KiSupervisorXStateFeaturesLock.Padding[1];
  qword_140F26B38 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_140F26B68 = (__int64)&qword_140F26B60;
  qword_140F26B60 = (__int64)&qword_140F26B60;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.SchedulerAssistYieldCounter = 0LL;
  LODWORD(KiSupervisorXStateFeaturesLock.SchedulerAssistLastYieldBoostTime) = 0;
  LOWORD(KiSupervisorXStateFeaturesLock.Padding[0]) = 1;
  BYTE2(KiSupervisorXStateFeaturesLock.Padding[0]) = 6;
  HIDWORD(KiSupervisorXStateFeaturesLock.Padding[0]) = 0;
  LODWORD(qword_140F26B20) = 531;
  qword_140F26B40 = 0LL;
  qword_140F26B58 = 0LL;
  qword_140F26B30 = 0LL;
  KiInitializeIdleProcess(a1);
  result = HviGetHypervisorFeatures(&v6);
  if ( (HIDWORD(v6) & 0x10000000) != 0 )
    KiCrossTlbFlushSupported = 1;
  return result;
}
