/*
 * XREFs of KiAttemptBugcheckRecovery @ 0x1405F9734
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     IoRevertFromDemotedDumpType @ 0x1405C7508 (IoRevertFromDemotedDumpType.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C76A8 (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckDebugBreak @ 0x1405E7550 (KiBugCheckDebugBreak.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405E7850 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405E878C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiYieldWaitForDebugger @ 0x1405E8CBC (KiYieldWaitForDebugger.c)
 *     KiCaptureDumpPreRecovery @ 0x1405F9F08 (KiCaptureDumpPreRecovery.c)
 *     KiGetRecoveryInformation @ 0x1405FA1D0 (KiGetRecoveryInformation.c)
 *     KiIsRecoveryPossibleOnCurrentStack @ 0x1405FA444 (KiIsRecoveryPossibleOnCurrentStack.c)
 *     KiRecordRecoveryFailure @ 0x1405FA508 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FA540 (KiSaveBugcheckRecoveryProgress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FA570 (KiScheduleBugcheckRecovery.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FA698 (KiSetBugCheckRecoveryProgressFlag.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FA874 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 KiAttemptBugcheckRecovery()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  int LastXStateSaveDebugInfo_high; // ebx
  char *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+50h] [rbp-10h]
  char v9; // [rsp+80h] [rbp+20h] BYREF
  char v10; // [rsp+88h] [rbp+28h] BYREF

  v10 = 0;
  v9 = 0;
  if ( (KsepShimDbLock.SchedulerApcFill3[60] & 2) != 0 || *(int *)&KsepShimDbLock.SchedulerApcFill5[48] <= 0 )
    goto LABEL_29;
  if ( KiBugcheckOwnerKeepsOthersFrozen )
    __fastfail(5u);
  if ( !(unsigned __int8)KiIsRecoveryPossibleOnCurrentStack() )
  {
    v0 = 1LL;
LABEL_28:
    KiRecordRecoveryFailure(v0);
    goto LABEL_29;
  }
  _m_prefetchw(&KsepShimDbLock.SchedulerApcFill5[60]);
  if ( (_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 0x10001u) & 0x10) != 0 )
    goto LABEL_29;
  KiInvokeBugCheckEntryCallbacks(8u);
  if ( (int)KiSetBugCheckRecoveryProgressFlag(0x8000LL) < 0 )
    goto LABEL_27;
  KiGetRecoveryInformation(&KsepShimDbLock.WaitBlockFill11[152]);
  v1 = *(_QWORD *)&KsepShimDbLock.ThreadFlags2;
  LastXStateSaveDebugInfo_high = HIDWORD(KsepShimDbLock.LastXStateSaveDebugInfo);
  v6 = 0LL;
  LODWORD(v7) = 0;
  BYTE4(v6) = KeGetCurrentIrql();
  IoSaveBugCheckRecoveryStatus((int *)&v6);
  v6 = 0LL;
  v8 = LastXStateSaveDebugInfo_high;
  v7 = v1;
  if ( (int)KiUpdateBugcheckRecoveryProgress(&v6) < 0
    || (int)KiSaveBugcheckRecoveryProgress(192LL) < 0
    || (KiInvokeBugCheckEntryCallbacks(0x3FFu),
        HIDWORD(v6) = KsepShimDbLock.WaitBlockFill7[159],
        LODWORD(v7) = KsepShimDbLock.Process,
        LODWORD(v6) = 1,
        IoSaveBugCheckRecoveryStatus((int *)&v6),
        (int)KiSaveBugcheckRecoveryProgress(193LL) < 0) )
  {
LABEL_27:
    v0 = 5LL;
    goto LABEL_28;
  }
  if ( !KsepShimDbLock.WaitBlockFill7[159] )
  {
    v0 = 2LL;
    goto LABEL_28;
  }
  word_140E010A6 |= 2u;
  _InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 0x20002u);
  v3 = &v10;
  if ( !KsepShimDbLock.WaitBlockFill11[173] )
    v3 = 0LL;
  *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[136] = KsepShimDbLock.Process;
  if ( KiBugCheckShouldEnterPostBugCheckDebugger(SHIDWORD(KsepShimDbLock.LastXStateSaveDebugInfo), (__int64)v3) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "*******************************************************************************\n"
      "                           Bugcheck Recovery\n"
      "*******************************************************************************\n");
    DbgPrintEx(
      0x65u,
      0,
      " You are seeing this message because the system has bugchecked and\n is attempting a bugcheck recovery.\n");
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      " System Error Info:\n"
      "     Bugcheck Code: 0x%08lx\n"
      "     Parameter 1: 0x%p\n"
      "     Parameter 2: 0x%p\n"
      "     Parameter 3: 0x%p\n"
      "     Parameter 4: 0x%p\n",
      HIDWORD(KsepShimDbLock.LastXStateSaveDebugInfo),
      *(const void **)&KsepShimDbLock.ThreadFlags2,
      KsepShimDbLock.QueueListEntry.Flink,
      KsepShimDbLock.QueueListEntry.Blink,
      *(const void **)&KsepShimDbLock.NextProcessor);
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      " Bugcheck Recovery Info Location: 0x%p\n"
      "*******************************************************************************\n"
      "\n",
      &KsepShimDbLock.WaitBlockFill11[152]);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        KiBugCheckDebugBreak(3u);
    }
  }
  if ( (int)KiCaptureDumpPreRecovery(v4, &v9) < 0 )
    *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[136] |= 0x10u;
  if ( (int)KiSaveBugcheckRecoveryProgress(194LL) < 0
    || (_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 0x40004u),
        KiScheduleBugcheckRecovery(),
        _InterlockedAnd((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 0xFFFFFFFB),
        (int)KiSaveBugcheckRecoveryProgress(195LL) < 0) )
  {
    KiRecordRecoveryFailure(5LL);
  }
  if ( v9 )
    IoRevertFromDemotedDumpType();
LABEL_29:
  IoPreparedTriageDumpData = 0LL;
  qword_140F26D08 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  _m_prefetchw(&KsepShimDbLock.SchedulerApcFill5[60]);
  _InterlockedOr(
    (volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60],
    (_InterlockedAnd((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 0xFFFFFFFC) & 2) != 0
  ? 0x100000
  : 0x80000);
  _m_prefetchw(&KsepShimDbLock.SchedulerApcFill5[60]);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 8u);
  if ( (result & 8) != 0 )
    KiYieldWaitForDebugger();
  return result;
}
