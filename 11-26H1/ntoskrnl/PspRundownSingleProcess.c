/*
 * XREFs of PspRundownSingleProcess @ 0x1409FEA50
 * Callers:
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspTerminateProcess @ 0x14094A8D8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     PspProcessRundownWorker @ 0x1409BDE40 (PspProcessRundownWorker.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x140B465F0 (PspProcessRundownWorkerSingle.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     RtlInterlockedSetClearBits @ 0x1404C51EC (RtlInterlockedSetClearBits.c)
 *     KeSetProcess @ 0x1404CA8CC (KeSetProcess.c)
 *     KeRundownSecureProcess @ 0x1405E827C (KeRundownSecureProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     ObKillProcess @ 0x1409FE7A8 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x1409FE810 (ExSweepHandleTable.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1409FF1E4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspClearProcessThreadCidRefs @ 0x1409FF230 (PspClearProcessThreadCidRefs.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     PspSendProcessNotificationToJobChain @ 0x140AE4DDC (PspSendProcessNotificationToJobChain.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(PRKPROCESS PROCESS, bool a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  bool v4; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY **p_Blink; // rax
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v19; // rbx
  void *UserCetLogging; // rcx
  void *v21; // rcx
  void *InstrumentationCallback; // rcx
  struct _LIST_ENTRY *v23; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // r11
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rbp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  v4 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_2;
  PspLockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread, a3, a4);
  if ( !LODWORD(PROCESS[1].CpuPartitionList.Blink) )
  {
    _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
    v4 = (_InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 0x2000008u) & 0x2000000) == 0;
  }
  PspUnlockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
  if ( v4 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
    _InterlockedExchange64((volatile __int64 *)&PROCESS[1].ProfileListHead.Blink, 1LL);
    if ( PROCESS[1].Padding[3] && (PROCESS[1].DirectoryTableBase & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase, 8, 32);
      PspSendProcessNotificationToJobChain(PROCESS, v26, PROCESS[1].Header.WaitListHead.Flink);
    }
    if ( (PROCESS->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      KeRundownSecureProcess((__int64)PROCESS);
    if ( (PROCESS[1].DirectoryTableBase & 0x4000000000000LL) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      if ( PROCESS[1].KernelTime )
        ObKillProcess((__int64)PROCESS);
      MmCleanProcessAddressSpace(PROCESS);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    if ( *(_QWORD *)&PROCESS[3].Spare0e )
    {
      --CurrentThread->KernelApcDisable;
      v27 = (AutoBoost *)KeAbPreAcquire((__int64)&PROCESS[3].Spare0d, 0LL, 0LL, v9);
      v29 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&PROCESS[3].Spare0d, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PROCESS[3].Spare0d, v27, (__int64)&PROCESS[3].Spare0d);
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v29, v28);
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)&PROCESS[3].Spare0e + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)&PROCESS[3].Spare0e, 0);
      *(_QWORD *)&PROCESS[3].Spare0e = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PROCESS[3].Spare0d, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PROCESS[3].Spare0d);
      KeAbPostRelease((unsigned __int64)&PROCESS[3].Spare0d);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v10 = *(_QWORD **)&PROCESS[4].AutoBoostState.TreeCount;
    if ( v10 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v11 = v10;
            if ( !*v10 )
              break;
            v10 = (_QWORD *)*v10;
            *v11 = 0LL;
          }
          v12 = v10 + 1;
          if ( !v10[1] )
            break;
          v10 = (_QWORD *)v10[1];
          *v12 = 0LL;
        }
        v13 = v10[2];
        PspUserApcKernelRoutine(v10);
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 )
          break;
        v10 = (_QWORD *)v14;
      }
    }
    *(_QWORD *)&PROCESS[4].AutoBoostState.TreeCount = 0LL;
    Blink = PROCESS[4].ReadyListHead.Blink;
    if ( Blink )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v16 = Blink;
            if ( !Blink->Flink )
              break;
            Blink = Blink->Flink;
            v16->Flink = 0LL;
          }
          p_Blink = &Blink->Blink;
          if ( !Blink->Blink )
            break;
          Blink = Blink->Blink;
          *p_Blink = 0LL;
        }
        Flink = Blink[1].Flink;
        PspUserApcKernelRoutine(Blink);
        v19 = (unsigned __int64)Flink & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 )
          break;
        Blink = (struct _LIST_ENTRY *)v19;
      }
    }
    PROCESS[4].ReadyListHead.Blink = 0LL;
    UserCetLogging = PROCESS->UserCetLogging;
    if ( UserCetLogging )
    {
      ExFreePoolWithTag(UserCetLogging, 0);
      PROCESS->UserCetLogging = 0LL;
    }
    if ( *(_QWORD *)&PROCESS[4].BasePriority )
    {
      ExFreePoolWithTag(*(PVOID *)&PROCESS[4].BasePriority, 0);
      *(_QWORD *)&PROCESS[4].BasePriority = 0LL;
    }
    v21 = (void *)PROCESS[1].Padding[4];
    if ( v21 )
    {
      PROCESS[1].Padding[4] = 0LL;
      ObfDereferenceObject(v21);
    }
    InstrumentationCallback = PROCESS[1].InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      ObfDereferenceObjectWithTag(InstrumentationCallback, 0x72437350u);
      PROCESS[1].InstrumentationCallback = 0LL;
    }
    if ( (PROCESS[1].DirectoryTableBase & 0x4000000000000LL) != 0 )
      KeSetProcess((__int64)PROCESS, v7, v8);
    if ( PROCESS[1].Padding[3] )
    {
      PspRemoveProcessFromJobChain(PROCESS);
      PspNotifyEmptyJobsInJobChain(PROCESS);
    }
    v23 = PROCESS[1].Header.WaitListHead.Flink;
    if ( v23 )
      PspClearProcessThreadCidRefs(CurrentThread, v23, PROCESS);
  }
  else
  {
    v25 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)PROCESS);
    if ( v25 )
    {
      ExSweepHandleTable(PROCESS, v25, 1);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
    }
  }
  return v4;
}
