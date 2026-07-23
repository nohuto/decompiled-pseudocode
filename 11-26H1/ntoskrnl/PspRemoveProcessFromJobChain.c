/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x1409FEEF8
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     PspTerminateProcessesJobCallback @ 0x1409FF320 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     PspInitializeProcessExecutionState @ 0x1404DB100 (PspInitializeProcessExecutionState.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspLockJobExclusiveUnlessRoot @ 0x14077FBE4 (PspLockJobExclusiveUnlessRoot.c)
 *     PspUnlockJobExclusiveUnlessRoot @ 0x14077FCCC (PspUnlockJobExclusiveUnlessRoot.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409CDB8C (PspFoldProcessAccountingIntoJob.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 *     PspLockRootJobFromProcess @ 0x1409FF4D8 (PspLockRootJobFromProcess.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 *     PspUnlinkJobProcess @ 0x140AEEF88 (PspUnlinkJobProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x140AF75AC (EtwTraceJobRemoveProcess.c)
 *     PspRequestProcessExecutionState @ 0x140AFC0F8 (PspRequestProcessExecutionState.c)
 *     PspSubtractAccountingValues @ 0x140B66D1C (PspSubtractAccountingValues.c)
 */

__int64 __fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v6; // r15d
  struct _KTHREAD *CurrentThread; // r14
  bool v9; // r13
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  char v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // [rsp+28h] [rbp-69h]
  _BYTE v29[3]; // [rsp+29h] [rbp-68h] BYREF
  int v30; // [rsp+2Ch] [rbp-65h]
  __int64 v31; // [rsp+30h] [rbp-61h] BYREF
  __int64 v32; // [rsp+38h] [rbp-59h] BYREF
  struct _KTHREAD *v33; // [rsp+40h] [rbp-51h]
  __int64 v34[20]; // [rsp+48h] [rbp-49h] BYREF
  char v36; // [rsp+108h] [rbp+77h]

  v36 = a3;
  result = HIDWORD(Process[3].ActiveGroupsMask.Masks[1]);
  v31 = 0LL;
  v32 = 0LL;
  v6 = a3;
  v29[0] = 0;
  if ( (result & 0x1000) == 0 || (a3 & 1) != 0 )
  {
    memset_0(v34, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v33 = CurrentThread;
    v9 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v28 = 0;
    if ( (v6 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (Process[3].ActiveGroupsMask.Masks[1] & 0x4000000000LL) == 0 )
    {
      PsTerminateProcess(Process);
      v28 = 1;
    }
    v30 = 1;
    PspLockRootJobFromProcess(Process, CurrentThread, &v31, &v32);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v6, a4);
    if ( (v6 & 4) == 0 || _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      v12 = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess(Process, v34, v10, v11);
      v12 = 1;
    }
    v13 = v31;
    v14 = v31;
    if ( v31 )
    {
      v15 = v30;
      do
      {
        PspLockJobExclusiveUnlessRoot(v14);
        if ( v9 )
        {
          --*(_DWORD *)(v14 + 216);
          if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x2000000000LL) != 0 )
            --*(_DWORD *)(v14 + 1460);
        }
        if ( (v6 & 8) != 0 && v9 )
          ++*(_DWORD *)(v14 + 220);
        if ( a2 && (!*a2 || *a2 == v14) && *(_QWORD *)(v14 + 552) && ((1 << a2[1]) & *(_DWORD *)(v14 + 1104)) != 0 )
          PspSendJobNotification(v14, a2[1], a2[2], 0);
        if ( v12 )
        {
          PspFoldProcessAccountingIntoJob(v14, (__int64)Process, v34);
          if ( v14 != Process[1].Padding[3]
            || *(_DWORD *)(v14 + 1464) == LODWORD(PspSiloMonitorLock.Timer.Header.WaitListHead.Flink) )
          {
            if ( v15 == 1 )
            {
              v17 = v14 + 1352;
              v19 = (_QWORD *)(v14 + 1352);
              if ( v14 + 1352 < (unsigned __int64)(v14 + 1456) )
              {
                while ( !*v19 )
                {
                  if ( (unsigned __int64)++v19 >= v14 + 1456 )
                    goto LABEL_37;
                }
                PspSubtractAccountingValues(v14 + 1352, v34);
                v15 = 2;
              }
            }
          }
          else
          {
            v15 = 0;
          }
        }
LABEL_37:
        PspUnlockJobExclusiveUnlessRoot(v14, v16, v17, v18);
        v14 = *(_QWORD *)(v14 + 1304);
      }
      while ( v14 );
      v13 = v31;
      CurrentThread = v33;
      LOBYTE(v6) = v36;
    }
    PspLockJobExclusiveUnlessRoot(v13);
    if ( (v6 & 1) != 0 )
    {
      PspUnlinkJobProcess(v13);
      PspUnlockJobExclusiveUnlessRoot(v13, v23, v24, v25);
      return PspUnlockJobExclusive(v32, CurrentThread);
    }
    else
    {
      if ( v9 && (Process[1].DirectoryTableBase & 4) != 0 && !v28 )
      {
        PspInitializeProcessExecutionState(v29);
        LOBYTE(v26) = v29[0];
        PspRequestProcessExecutionState(Process, v26, 0LL);
      }
      PspUnlockJobExclusiveUnlessRoot(v13, v20, v21, v22);
      PspUnlockJobExclusive(v32, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      return (__int64)KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v27);
    }
  }
  return result;
}
