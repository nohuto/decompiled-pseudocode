/*
 * XREFs of PspExitThread @ 0x14094B14C
 * Callers:
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     KiSchedulerApcTerminate @ 0x14094B0F0 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     KiRundownMutants @ 0x1404AB48C (KiRundownMutants.c)
 *     KeQuerySystemTimeUnsafe @ 0x1404AC5F4 (KeQuerySystemTimeUnsafe.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     RtlpFlsSlotDataValidateEmpty @ 0x1404BDC44 (RtlpFlsSlotDataValidateEmpty.c)
 *     ExTimerRundown @ 0x140513E74 (ExTimerRundown.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DbgkExitProcess @ 0x14077DD00 (DbgkExitProcess.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IoCancelThreadIo @ 0x14094BAC8 (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     PspEmptyPropertySet @ 0x14094BFA0 (PspEmptyPropertySet.c)
 *     KeRundownApcQueues @ 0x14094BFD8 (KeRundownApcQueues.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x14094C09C (PspSchedulerSharedDataRegionSlotFree.c)
 *     RtlpFlsDataCleanup @ 0x14094C22C (RtlpFlsDataCleanup.c)
 *     MmExitThread @ 0x14094C484 (MmExitThread.c)
 *     PoDeletePowerRequest @ 0x14094CE80 (PoDeletePowerRequest.c)
 *     LpcRequestPort @ 0x14098DE90 (LpcRequestPort.c)
 *     PspCallThreadNotifyRoutines @ 0x1409E7E7C (PspCallThreadNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspClearProcessThreadCidRefs @ 0x1409FF230 (PspClearProcessThreadCidRefs.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x140A0481C (PspFreeCurrentThreadUserShadowStack.c)
 *     MmDeleteTeb @ 0x140A048C4 (MmDeleteTeb.c)
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 *     PsCaptureExceptionPort @ 0x140A9FC4C (PsCaptureExceptionPort.c)
 *     DbgkExitThread @ 0x140B3C484 (DbgkExitThread.c)
 *     PspDeleteSecureThread @ 0x140B439D4 (PspDeleteSecureThread.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *BugCheckParameter4; // rdi
  ULONG_PTR Process; // r14
  ULONG_PTR v4; // r8
  __int64 v5; // rdx
  struct _KLOCK_ENTRIES *v6; // r9
  struct _LIST_ENTRY *Blink; // rcx
  char v8; // r12
  void *v9; // rdx
  AutoBoost *v10; // rbx
  __int64 DirectoryTableBase_high; // rcx
  void *InitialStack; // r13
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  unsigned int *Teb; // rbx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  _KPROCESS *v25; // r14
  _SLIST_HEADER *v26; // rbx
  struct _KTHREAD *Thread; // rcx
  ULONG_PTR LastXStateSaveDebugInfo; // r9
  __int64 v30; // rcx
  struct _KTHREAD *v31; // rax
  _SLIST_ENTRY *NormalContext; // rdx
  __int64 ProcessServerSilo; // rax
  void *v34; // rbx
  struct _LIST_ENTRY *v35; // rbx
  int v36; // eax
  void *v37; // rbx
  int v38; // eax
  void *ULong64FromUser; // rax
  __int16 v40; // ax
  bool v41; // zf
  char v42; // al
  unsigned int ULongFromUser; // eax
  void *v44; // rax
  PSLIST_ENTRY v45; // rax
  signed __int32 v46[8]; // [rsp+0h] [rbp-E8h] BYREF
  struct _KTHREAD *v47; // [rsp+30h] [rbp-B8h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-A8h] BYREF
  void *v50; // [rsp+48h] [rbp-A0h]
  __int64 v51; // [rsp+50h] [rbp-98h]
  void *v52; // [rsp+58h] [rbp-90h]
  __int128 v53; // [rsp+60h] [rbp-88h] BYREF
  __int128 v54; // [rsp+70h] [rbp-78h]
  __int128 v55; // [rsp+80h] [rbp-68h]
  __int128 v56; // [rsp+90h] [rbp-58h] BYREF
  struct _KTHREAD *v57; // [rsp+A0h] [rbp-48h]
  int v58; // [rsp+A8h] [rbp-40h]

  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  BugCheckParameter4 = KeGetCurrentThread();
  v47 = BugCheckParameter4;
  Process = (ULONG_PTR)BugCheckParameter4->Process;
  PspClearProcessThreadCidRefs(BugCheckParameter4, *(_QWORD *)&BugCheckParameter4[1].CurrentRunTime, BugCheckParameter4);
  v4 = (ULONG_PTR)BugCheckParameter4->ApcState.Process;
  if ( Process != v4 )
    KeBugCheckEx(5u, Process, v4, BugCheckParameter4->ApcStateIndex, (ULONG_PTR)BugCheckParameter4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL, 0LL);
  if ( BugCheckParameter4->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, BugCheckParameter4->CombinedApcDisable, 0LL, 1uLL);
  if ( BugCheckParameter4[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)BugCheckParameter4, 0LL);
    ObfDereferenceObjectWithTag(BugCheckParameter4[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    BugCheckParameter4[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&BugCheckParameter4[1].WaitBlockFill11[88]);
  PspRevertContainerImpersonation((ULONG_PTR)BugCheckParameter4, v5);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&BugCheckParameter4[1].WaitStatus);
  Blink = BugCheckParameter4[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PoDeletePowerRequest(Blink);
    BugCheckParameter4[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v8 = 0;
  BugCheckParameter4[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(BugCheckParameter4, 0LL, 0LL);
  --BugCheckParameter4->KernelApcDisable;
  if ( (*(_DWORD *)(Process + 1532) & 1) == 0 || *(_QWORD *)(Process + 1600) )
    PspCallThreadNotifyRoutines(BugCheckParameter4, 0LL, 0LL);
  v10 = (AutoBoost *)KeAbPreAcquire(Process + 456, 0LL, 0LL, v6);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 456), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 456), v10, Process + 456);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  --*(_DWORD *)(Process + 896);
  if ( (*(_DWORD *)(Process + 1532) & 1) == 0 || *(_QWORD *)(Process + 1600) )
  {
    if ( !*(_DWORD *)(Process + 896) )
      v8 = 1;
  }
  else if ( (*(_DWORD *)(Process + 2012) & 2) != 0 && !*(_DWORD *)(Process + 896) )
  {
    v8 = 1;
  }
  if ( v8 )
  {
    _InterlockedOr((volatile signed __int32 *)(Process + 500), 0x2000008u);
    LOBYTE(v9) = 1;
    PspExitLastThread(0LL, v9, Process, BugCheckParameter4, a1);
  }
  else
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(Process + 908) = a1;
    PspUnlockProcessExclusive(Process, (__int64)BugCheckParameter4);
  }
  DirectoryTableBase_high = -3LL;
  if ( BugCheckParameter4[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v35 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v35 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v35[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v35 - 48) >> 8)] != PsJobType
      || (HIDWORD(v35[97].Flink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)BugCheckParameter4, (ULONG_PTR)v35, Process, 1uLL);
    }
    ObfDereferenceObjectWithTag(v35, 0x6D497350u);
  }
  if ( *(_QWORD *)(Process + 776) && (BugCheckParameter4->MiscFlags & 0x400) == 0 )
  {
    if ( v8 )
      DbgkExitProcess();
    else
      DbgkExitThread(a1);
  }
  if ( (*(_BYTE *)(Process + 368) & 1) != 0 )
    PspDeleteSecureThread();
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 0x20) != 0 )
    {
      DirectoryTableBase_high = HIDWORD(BugCheckParameter4->Process[1].DirectoryTableBase);
      if ( (DirectoryTableBase_high & 0x40000008) == 0 )
      {
        ProcessServerSilo = PsGetProcessServerSilo(Process);
        PspCatchCriticalBreak(
          1,
          (struct _KPROCESS *)BugCheckParameter4,
          (const char *)(Process + 824),
          ProcessServerSilo,
          a1);
      }
    }
  }
  if ( v8 )
    PspExitLastThread(1LL, 0LL, Process, BugCheckParameter4, a1);
  InitialStack = BugCheckParameter4[1].InitialStack;
  if ( InitialStack )
  {
    LODWORD(v53) = 3145736;
    WORD2(v53) = 6;
    *((_QWORD *)&v55 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v36 = LpcRequestPort(*((_QWORD *)InitialStack + 1), &v53);
        if ( v36 != -1073741801 && v36 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v37 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v37;
    }
    while ( v37 );
  }
  if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
  {
    v34 = (void *)PsCaptureExceptionPort(Process);
    if ( v34 )
    {
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      LODWORD(v53) = 3145736;
      WORD2(v53) = 6;
      *((_QWORD *)&v55 + 1) = *(_QWORD *)&BugCheckParameter4[1].Header.Lock;
      while ( 1 )
      {
        v38 = LpcRequestPort(v34, &v53);
        if ( v38 != -1073741801 && v38 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v34);
    }
  }
  if ( BugCheckParameter4->WaitBlock[2].SparePtr )
  {
    v57 = BugCheckParameter4;
    v58 = 1;
    PsInvokeWin32Callout(1LL, &v56, 0LL, 0LL);
  }
  if ( v8 )
    PspExitLastThread(2LL, 0LL, Process, BugCheckParameter4, 0);
  if ( (*((_DWORD *)&BugCheckParameter4->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL);
  v13 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup |= 1u;
  if ( v13 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    RtlpFlsDataCleanup(DirectoryTableBase_high, v13, 1LL);
    KeLeaveGuardedRegion();
  }
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(BugCheckParameter4);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  PspSchedulerSharedDataRegionSlotFree(BugCheckParameter4);
  Teb = (unsigned int *)BugCheckParameter4->Teb;
  if ( Teb )
  {
    BugCheckParameter4->Teb = 0LL;
    --BugCheckParameter4->KernelApcDisable;
    _InterlockedOr(v46, 0);
    if ( ((__int64)BugCheckParameter4[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)((char *)BugCheckParameter4 + 1424), v15, v16, v17);
    KeLeaveCriticalRegionThread((__int64)BugCheckParameter4);
    if ( (BugCheckParameter4->MiscFlags & 0x400) == 0 && (*(_DWORD *)(Process + 500) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0 )
      {
        v50 = 0LL;
        ULong64FromUser = (void *)RtlReadULong64FromUser(Teb + 1310);
        v50 = ULong64FromUser;
        if ( ULong64FromUser )
        {
          BaseAddress = ULong64FromUser;
          RegionSize = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        }
        if ( *(_QWORD *)(Process + 784) )
        {
          v40 = *(_WORD *)(Process + 1772);
          if ( v40 == 332 || (v41 = v40 == 452, v42 = 0, v41) )
            v42 = 1;
          if ( v42 )
          {
            v51 = 0LL;
            ULongFromUser = RtlReadULongFromUser(Teb + 2947);
            v51 = ULongFromUser;
            if ( ULongFromUser )
            {
              RegionSize = ULongFromUser;
              BaseAddress = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
            }
          }
        }
      }
      v52 = 0LL;
      v44 = (void *)RtlReadULong64FromUser(Teb + 1450);
      v52 = v44;
      if ( v44 )
        ObCloseHandle(v44, 1);
      if ( (*(_BYTE *)(&BugCheckParameter4[1].SwapListEntry + 1) & 2) != 0
        && (BugCheckParameter4->MiscFlags & 0x100000) != 0 )
      {
        PspFreeCurrentThreadUserShadowStack();
      }
      MmDeleteTeb(Process, Teb);
    }
  }
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(v19);
  else
    *v19 = MEMORY[0xFFFFF78000000014];
  if ( v8 )
    PspExitLastThread(3LL, 0LL, Process, BugCheckParameter4, 0);
  KeRundownApcQueues(BugCheckParameter4);
  if ( BugCheckParameter4->SchedulerApc.SystemArgument2 && PspSiloMonitorLock.KernelShadowStackLimit.AllFields )
    guard_dispatch_icall_no_overrides((__int64)BugCheckParameter4, v20);
  v22 = *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  if ( (v22 & 1) == 0 )
    __int2c();
  v23 = *(_QWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup;
  *(_DWORD *)&BugCheckParameter4[1].UserAffinityPrimaryGroup = v22 | 2;
  v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v24 )
  {
    if ( !RtlpFlsSlotDataValidateEmpty(v21, v24) )
      __fastfail(0x46u);
    v31 = KeGetCurrentThread();
    --v31->SpecialApcDisable;
    RtlpFlsDataCleanup(v30, v24, 2LL);
    KeLeaveGuardedRegion();
  }
  v25 = BugCheckParameter4->Process;
  v26 = (_SLIST_HEADER *)v25[4].Padding[4];
  if ( v26 )
  {
    NormalContext = (_SLIST_ENTRY *)BugCheckParameter4[1].SchedulerApc.NormalContext;
    if ( NormalContext )
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v25[4].Padding[4], NormalContext);
    if ( v8 )
    {
      v25[4].Padding[4] = 0LL;
      while ( 1 )
      {
        v45 = RtlpInterlockedPopEntrySList(v26);
        if ( !v45 )
          break;
        ExFreePoolWithTag(v45, 0);
      }
      ExFreePoolWithTag(v26, 0);
    }
  }
  Thread = BugCheckParameter4[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    BugCheckParameter4[1].WaitBlock[3].Thread = 0LL;
  }
  LastXStateSaveDebugInfo = BugCheckParameter4[1].LastXStateSaveDebugInfo;
  if ( (unsigned __int64 *)LastXStateSaveDebugInfo != &BugCheckParameter4[1].LastXStateSaveDebugInfo )
    KeBugCheckEx(0x1C6u, 0x14uLL, (ULONG_PTR)BugCheckParameter4, LastXStateSaveDebugInfo, 0LL);
  MmExitThread(BugCheckParameter4, 0LL);
  return KeTerminateThread((LegacyAutoBoost *)BugCheckParameter4);
}
