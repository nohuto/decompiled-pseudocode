/*
 * XREFs of PspAssignProcessToJob @ 0x140AC5D48
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140AC5CC0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PspGetJobAssignmentDisposition @ 0x140774930 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14077D190 (PspIsJobMovable.c)
 *     PspEstablishJobHierarchy @ 0x1407F836C (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x1407F8CA4 (PspIncrementJobChainProcessCounts.c)
 *     PspQuitNextJobProcess @ 0x1407F90E0 (PspQuitNextJobProcess.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x1407FA100 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x140959CD4 (PspGetNextJobProcess.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 *     MmAssignProcessToJob @ 0x14096022C (MmAssignProcessToJob.c)
 *     PsQueryProcessAttributes @ 0x1409675B0 (PsQueryProcessAttributes.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140A8FD18 (PspApplyJobChainLimitsToProcess.c)
 *     PspChargeJobWakeCounter @ 0x140AAE650 (PspChargeJobWakeCounter.c)
 *     PspLockJobsAndProcessExclusive @ 0x140AAEA78 (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobAssignment @ 0x140AAECA4 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x140AAED18 (PspUnlockJobAssignment.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140AAED7C (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobChainLimits @ 0x140AD6C7C (PspValidateJobChainLimits.c)
 *     PspChangeProcessExecutionState @ 0x140ADE6AC (PspChangeProcessExecutionState.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140AEFBE8 (PspGetJobLockHierarchyForAssignment.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF0A90 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140B01B74 (PspValidateJobAssignmentDiskIoAttribution.c)
 *     PspValidateJobAssignmentCpuPartition @ 0x140B101D4 (PspValidateJobAssignmentCpuPartition.c)
 *     PspAssignJobCpuPartitionToProcess @ 0x140B3D5A4 (PspAssignJobCpuPartitionToProcess.c)
 *     PspValidateJobAssignmentUILimits @ 0x140B79240 (PspValidateJobAssignmentUILimits.c)
 */

__int64 __fastcall PspAssignProcessToJob(_QWORD *Object, _QWORD *BugCheckParameter1, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  char v5; // bl
  _QWORD *NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v11; // r13d
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  int JobAssignmentDisposition; // eax
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  char v24; // bl
  struct _KLOCK_ENTRIES *v25; // r9
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v36; // [rsp+40h] [rbp-59h] BYREF
  struct _KTHREAD *v37; // [rsp+48h] [rbp-51h]
  __int128 v38; // [rsp+50h] [rbp-49h] BYREF
  __int128 v39; // [rsp+60h] [rbp-39h]
  _QWORD *v40; // [rsp+70h] [rbp-29h]
  _OWORD v41[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v42; // [rsp+98h] [rbp-1h]
  __int128 v43; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v44; // [rsp+B0h] [rbp+17h]
  __int64 v45; // [rsp+108h] [rbp+6Fh] BYREF
  char v46; // [rsp+118h] [rbp+7Fh] BYREF

  v46 = 0;
  v4 = 0;
  v36 = 0;
  v5 = 0;
  LODWORD(v40) = 0;
  v44 = 0LL;
  v42 = 0LL;
  NextJobProcess = BugCheckParameter1;
  LODWORD(v45) = 0;
  v38 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  memset(v41, 0, sizeof(v41));
  if ( a4 == 5 )
  {
    a3 = BugCheckParameter1[84];
    NextJobProcess = PspGetNextJobProcess((__int64)Object, (__int64)CurrentThread, &v43, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess((__int64)Object, (__int64)CurrentThread, &v43, NextJobProcess);
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 61) )
    {
      v11 = -1073741558;
      v12 = -1073741558;
      goto LABEL_55;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment((_DWORD)Object, (_DWORD)NextJobProcess, a3, a4, (__int64)v41);
  v5 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread, v13, v14, v15);
  PspLockJobsAndProcessExclusive(
    (unsigned int *)v41,
    (__int64)NextJobProcess,
    (__int64)CurrentThread,
    (struct _KLOCK_ENTRIES *)1);
  if ( a4 != 5 )
  {
    JobAssignmentDisposition = PspGetJobAssignmentDisposition((__int64)Object, (__int64)NextJobProcess, a3, &v45);
    v4 = v45;
    if ( JobAssignmentDisposition >= 0 )
    {
      if ( (_DWORD)v45 != a4 )
      {
        v12 = -1073741267;
        goto LABEL_54;
      }
      if ( (_DWORD)v45 == 2 )
      {
        v12 = 0;
        goto LABEL_54;
      }
      goto LABEL_12;
    }
LABEL_9:
    v12 = -1073741790;
    goto LABEL_54;
  }
  if ( !PspIsJobMovable((__int64)Object) )
    goto LABEL_9;
  v4 = 5;
  if ( (_QWORD *)NextJobProcess[84] != Object || (*((_DWORD *)NextJobProcess + 383) & 0x1000) == 0 )
    goto LABEL_9;
LABEL_12:
  if ( NextJobProcess && v4 != 5 )
    a3 = NextJobProcess[84];
  if ( !(unsigned __int8)PspValidateJobAssignmentUILimits(Object, a3, v4)
    || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
    || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, (__int64)NextJobProcess, v4)
    || !(unsigned __int8)PspValidateJobAssignmentCpuPartition(Object)
    || v4 == 5 && (Object[132] & 1) != 0
    || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1102) + 1 > 0x64 )
  {
    goto LABEL_16;
  }
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
  {
    v18 = 0;
    while ( v18 == 2
         || v18 == 1
         || !_bittest((const signed __int32 *)Object + 388, 0x19u)
         || !_bittest((const signed __int32 *)(a3 + 1552), 0x19u) )
    {
      if ( ++v18 >= 3 )
        goto LABEL_38;
    }
    goto LABEL_16;
  }
LABEL_38:
  if ( !(unsigned __int8)PspValidateJobAssignmentDiskIoAttribution(Object, v17, v4) )
  {
LABEL_16:
    v12 = -1073741637;
    goto LABEL_54;
  }
  switch ( v4 )
  {
    case 1u:
    case 3u:
      v20 = a3;
      goto LABEL_47;
    case 4u:
      v20 = 0LL;
LABEL_47:
      v19 = (__int64)Object;
      goto LABEL_48;
    case 5u:
      v19 = a3;
      v20 = 0LL;
LABEL_48:
      v45 = v20;
      if ( v19 )
      {
        v12 = PspValidateJobChainLimits(v19, v20, NextJobProcess, 0LL);
        if ( v12 < 0 )
          goto LABEL_53;
      }
      goto LABEL_50;
  }
  v19 = 0LL;
  v45 = 0LL;
LABEL_50:
  v12 = PspEstablishJobHierarchy((char *)Object, (__int64)NextJobProcess, a3, v4);
  if ( v12 < 0 )
  {
LABEL_53:
    CurrentThread = v37;
    goto LABEL_54;
  }
  if ( !NextJobProcess )
  {
    v12 = 0;
    goto LABEL_53;
  }
  if ( (Object[194] & 0x1000) != 0 )
  {
    v21 = 0LL;
    do
    {
      if ( (*((_DWORD *)NextJobProcess + (int)v21 + 458) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter(
          Object,
          (_QWORD *)a3,
          v21,
          *((_DWORD *)NextJobProcess + (int)v21 + 458) & 0x7FFFFFFF,
          9,
          0LL,
          6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + v21 + 458, 0x1Fu);
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < 7 );
    v22 = *((_DWORD *)NextJobProcess + 467) & 0x7FFFFFFF;
    if ( v22 )
      PspChargeJobWakeCounter(Object, (_QWORD *)a3, 0, v22, 13, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + 467, 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64(NextJobProcess + 57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(NextJobProcess + 57);
  KeAbPostRelease((unsigned __int64)(NextJobProcess + 57));
  v23 = v45;
  v24 = v5 | 8;
  if ( v4 == 4 )
    v23 = a3;
  PspIncrementJobChainProcessCounts(v19, v23, (__int64)NextJobProcess, 0);
  PspApplyJobChainLimitsToProcess((__int64)Object, a3, (__int64)NextJobProcess);
  CurrentThread = v37;
  PspUnlockJobsAndProcessExclusive((unsigned int *)v41, 0LL, (__int64)v37);
  v5 = v24 & 0xFB;
  if ( (Object[194] & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes((__int64)NextJobProcess, &v46, 0LL, v25);
    if ( v46 )
      _InterlockedOr((volatile signed __int32 *)Object + 388, 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)Object + 388, 0x1800000u);
  }
  v12 = PspApplyWorkingSetLimitsToProcess(NextJobProcess);
  if ( v12 < 0 )
    goto LABEL_54;
  if ( Object[229] )
  {
    PspLockProcessExclusive((__int64)NextJobProcess, (__int64)v37, v26, v27);
    v12 = PspAssignJobCpuPartitionToProcess(NextJobProcess, Object[229]);
    PspUnlockProcessExclusive((__int64)NextJobProcess, (__int64)v37);
    if ( v12 < 0 )
      goto LABEL_54;
  }
  v28 = 0;
  if ( v4 == 5 )
    v28 = 4;
  if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v28) )
  {
    PspUnlockJobAssignment((__int64)v37);
    --v37->KernelApcDisable;
    v5 &= ~2u;
    PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v29);
    if ( *((_DWORD *)Object + 136) )
    {
      if ( (unsigned __int8)IsWin32kJobNotifyCallOutPresent(v31, v30) )
      {
        v36 = *((_DWORD *)Object + 144);
        if ( v36 <= 0xFFFFFFFD )
          Win32kJobAddProcessNotify(Object, NextJobProcess);
      }
      else
      {
        v32 = *((_DWORD *)Object + 136) == 0;
        DWORD2(v39) = 1;
        *(_QWORD *)&v39 = Object;
        v40 = NextJobProcess;
        if ( !v32 )
        {
          v36 = *((_DWORD *)Object + 144);
          if ( v36 <= 0xFFFFFFFD )
          {
            PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
            v12 = PsInvokeWin32Callout(6, &v38, 1, (__int64)&v36);
            PspUnlockJobExclusive((__int64)Object, (__int64)CurrentThread, v33, v34);
          }
        }
        if ( v12 < 0 )
          goto LABEL_54;
      }
    }
    if ( v4 == 5 )
    {
      v12 = -1073741267;
      v5 |= 0x20u;
    }
  }
  else
  {
    v12 = -1073741756;
  }
LABEL_54:
  v11 = -1073741558;
LABEL_55:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 61);
  if ( (v5 & 0x20) == 0 && v12 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, (ULONG_PTR)Object, v12);
    if ( v12 != -1073741558 )
      v11 = -1073741756;
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess, 0LL, 0xAu, v11);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive((unsigned int *)v41, (__int64)NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v12;
}
