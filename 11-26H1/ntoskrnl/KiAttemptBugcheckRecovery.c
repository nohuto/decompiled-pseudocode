/*
 * XREFs of KiAttemptBugcheckRecovery @ 0x1405FC154
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoRevertFromDemotedDumpType @ 0x1405C9DD8 (IoRevertFromDemotedDumpType.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C9F78 (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckDebugBreak @ 0x1405E9EC0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405EA1C0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405EB0FC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiYieldWaitForDebugger @ 0x1405EB62C (KiYieldWaitForDebugger.c)
 *     KiCaptureDumpPreRecovery @ 0x1405FC928 (KiCaptureDumpPreRecovery.c)
 *     KiGetRecoveryInformation @ 0x1405FCBF0 (KiGetRecoveryInformation.c)
 *     KiIsRecoveryPossibleOnCurrentStack @ 0x1405FCE64 (KiIsRecoveryPossibleOnCurrentStack.c)
 *     KiRecordRecoveryFailure @ 0x1405FCF28 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FCF60 (KiSaveBugcheckRecoveryProgress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FCF90 (KiScheduleBugcheckRecovery.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FD0B8 (KiSetBugCheckRecoveryProgressFlag.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 KiAttemptBugcheckRecovery()
{
  __int64 v0; // rcx
  PVOID v1; // rdi
  int v2; // ebx
  char *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-20h] BYREF
  PVOID v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+50h] [rbp-10h]
  char v9; // [rsp+80h] [rbp+20h] BYREF
  char v10; // [rsp+88h] [rbp+28h] BYREF

  v10 = 0;
  v9 = 0;
  if ( (KsepShimDbLock.WaitBlockFill6[96] & 2) != 0 || SLODWORD(KsepShimDbLock.QueueListEntry.Flink) <= 0 )
    goto LABEL_29;
  if ( BYTE4(KiDpcWatchdogConfigurationLock.InitialStack) )
    __fastfail(5u);
  if ( !(unsigned __int8)KiIsRecoveryPossibleOnCurrentStack() )
  {
    v0 = 1LL;
LABEL_28:
    KiRecordRecoveryFailure(v0);
    goto LABEL_29;
  }
  _m_prefetchw(&KsepShimDbLock.WaitBlockFill11[96]);
  if ( (_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 0x10001u) & 0x10) != 0 )
    goto LABEL_29;
  KiInvokeBugCheckEntryCallbacks(8u);
  if ( (int)KiSetBugCheckRecoveryProgressFlag(0x8000LL) < 0 )
    goto LABEL_27;
  KiGetRecoveryInformation(&KsepShimDbLock.648);
  v1 = KsepShimDbLock.SchedulerApc.Reserved[1];
  v2 = *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[36];
  v6 = 0LL;
  LODWORD(v7) = 0;
  BYTE4(v6) = KeGetCurrentIrql();
  IoSaveBugCheckRecoveryStatus((int *)&v6);
  v6 = 0LL;
  v8 = v2;
  v7 = v1;
  if ( (int)KiUpdateBugcheckRecoveryProgress(&v6) < 0
    || (int)KiSaveBugcheckRecoveryProgress(192LL) < 0
    || (KiInvokeBugCheckEntryCallbacks(0x3FFu),
        HIDWORD(v6) = KsepShimDbLock.SchedulerApcFill3[7],
        LODWORD(v7) = *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[72],
        LODWORD(v6) = 1,
        IoSaveBugCheckRecoveryStatus((int *)&v6),
        (int)KiSaveBugcheckRecoveryProgress(193LL) < 0) )
  {
LABEL_27:
    v0 = 5LL;
    goto LABEL_28;
  }
  if ( !KsepShimDbLock.SchedulerApcFill3[7] )
  {
    v0 = 2LL;
    goto LABEL_28;
  }
  word_140E010A6 |= 2u;
  _InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 0x20002u);
  v3 = &v10;
  if ( !KsepShimDbLock.SchedulerApcFill3[21] )
    v3 = 0LL;
  *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[76] = *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[72];
  if ( KiBugCheckShouldEnterPostBugCheckDebugger(*(int *)&KsepShimDbLock.SchedulerApcFill5[36], (__int64)v3) )
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
      *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[36],
      KsepShimDbLock.SchedulerApc.Reserved[1],
      KsepShimDbLock.SchedulerApc.Reserved[2],
      KsepShimDbLock.SchedulerApc.NormalContext,
      KsepShimDbLock.SchedulerApc.SystemArgument1);
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      " Bugcheck Recovery Info Location: 0x%p\n"
      "*******************************************************************************\n"
      "\n",
      &KsepShimDbLock.648);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        KiBugCheckDebugBreak(3u);
    }
  }
  if ( (int)KiCaptureDumpPreRecovery(v4, &v9) < 0 )
    *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[76] |= 0x10u;
  if ( (int)KiSaveBugcheckRecoveryProgress(194LL) < 0
    || (_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 0x40004u),
        KiScheduleBugcheckRecovery(),
        _InterlockedAnd((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 0xFFFFFFFB),
        (int)KiSaveBugcheckRecoveryProgress(195LL) < 0) )
  {
    KiRecordRecoveryFailure(5LL);
  }
  if ( v9 )
    IoRevertFromDemotedDumpType();
LABEL_29:
  IoPreparedTriageDumpData = 0LL;
  KiSupervisorXStateFeaturesLock.StackBase = (void *)&KiSupervisorXStateFeaturesLock.StackLimit;
  KiSupervisorXStateFeaturesLock.StackLimit = (void *volatile)&KiSupervisorXStateFeaturesLock.StackLimit;
  _m_prefetchw(&KsepShimDbLock.WaitBlockFill11[96]);
  _InterlockedOr(
    (volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96],
    (_InterlockedAnd((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 0xFFFFFFFC) & 2) != 0
  ? 0x100000
  : 0x80000);
  _m_prefetchw(&KsepShimDbLock.WaitBlockFill11[96]);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 8u);
  if ( (result & 8) != 0 )
    KiYieldWaitForDebugger();
  return result;
}
