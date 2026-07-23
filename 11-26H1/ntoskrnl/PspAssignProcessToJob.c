/*
 * XREFs of PspAssignProcessToJob @ 0x140AC79B8
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140AC7930 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PspGetJobAssignmentDisposition @ 0x140777930 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14077FC84 (PspIsJobMovable.c)
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x1407FE7A4 (PspIncrementJobChainProcessCounts.c)
 *     PspQuitNextJobProcess @ 0x1407FEBE0 (PspQuitNextJobProcess.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x1407FFB30 (PspValidateJobAssignmentMemoryPartition.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140A94870 (PspApplyJobChainLimitsToProcess.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 *     PspLockJobsAndProcessExclusive @ 0x140AAC6D8 (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobAssignment @ 0x140AAC904 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x140AAC978 (PspUnlockJobAssignment.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140AAC9DC (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobChainLimits @ 0x140AD398C (PspValidateJobChainLimits.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140AF27AC (PspGetJobLockHierarchyForAssignment.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF36D0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B02108 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140B038A4 (PspValidateJobAssignmentDiskIoAttribution.c)
 *     PspValidateJobAssignmentCpuPartition @ 0x140B11C14 (PspValidateJobAssignmentCpuPartition.c)
 *     PspAssignJobCpuPartitionToProcess @ 0x140B3F674 (PspAssignJobCpuPartitionToProcess.c)
 *     PspValidateJobAssignmentUILimits @ 0x140B81270 (PspValidateJobAssignmentUILimits.c)
 */

__int64 __fastcall PspAssignProcessToJob(signed __int32 *Object, _QWORD *BugCheckParameter1, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  char v5; // bl
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *NextJobProcess; // rsi
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
  __int64 v31; // [rsp+40h] [rbp-29h]
  __int128 v32; // [rsp+48h] [rbp-21h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h]
  _OWORD v34[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v35; // [rsp+80h] [rbp+17h]
  __int64 v36; // [rsp+D8h] [rbp+6Fh] BYREF
  char v37; // [rsp+E8h] [rbp+7Fh] BYREF

  v37 = 0;
  v4 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v31 = (__int64)CurrentThread;
  v35 = 0LL;
  NextJobProcess = BugCheckParameter1;
  LODWORD(v36) = 0;
  memset(v34, 0, sizeof(v34));
  if ( a4 == 5 )
  {
    a3 = BugCheckParameter1[84];
    NextJobProcess = PspGetNextJobProcess((__int64)Object, (__int64)CurrentThread, &v32, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess((__int64)Object, (__int64)CurrentThread, &v32, NextJobProcess);
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 61) )
    {
      v11 = -1073741558;
      v12 = -1073741558;
      goto LABEL_54;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment((_DWORD)Object, (_DWORD)NextJobProcess, a3, a4, (__int64)v34);
  v5 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread, v13, v14, v15);
  PspLockJobsAndProcessExclusive(
    (unsigned int *)v34,
    (__int64)NextJobProcess,
    (__int64)CurrentThread,
    (struct _KLOCK_ENTRIES *)1);
  if ( a4 == 5 )
  {
    if ( PspIsJobMovable((__int64)Object) )
    {
      v4 = 5;
      if ( (signed __int32 *)NextJobProcess[84] == Object && (*((_DWORD *)NextJobProcess + 383) & 0x1000) != 0 )
      {
LABEL_12:
        if ( NextJobProcess && v4 != 5 )
          a3 = NextJobProcess[84];
        if ( !(unsigned __int8)PspValidateJobAssignmentUILimits(Object, a3, v4)
          || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
          || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, (__int64)NextJobProcess, v4)
          || !(unsigned __int8)PspValidateJobAssignmentCpuPartition(Object)
          || v4 == 5 && (Object[264] & 1) != 0
          || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1102) + 1 > 0x64 )
        {
          goto LABEL_16;
        }
        if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
        {
          v18 = 0;
          while ( (unsigned int)(v18 - 1) <= 1
               || !_bittest(Object + 388, 0x19u)
               || !_bittest((const signed __int32 *)(a3 + 1552), 0x19u) )
          {
            if ( ++v18 >= 3 )
              goto LABEL_37;
          }
          goto LABEL_16;
        }
LABEL_37:
        if ( !(unsigned __int8)PspValidateJobAssignmentDiskIoAttribution(Object, v17, v4) )
        {
LABEL_16:
          v12 = -1073741637;
          goto LABEL_53;
        }
        switch ( v4 )
        {
          case 1u:
          case 3u:
            v20 = a3;
            break;
          case 4u:
            v20 = 0LL;
            break;
          case 5u:
            v19 = a3;
            v20 = 0LL;
LABEL_47:
            v36 = v20;
            if ( v19 )
            {
              v12 = PspValidateJobChainLimits(v19, v20, NextJobProcess, 0LL);
              if ( v12 < 0 )
              {
LABEL_52:
                CurrentThread = (struct _KTHREAD *)v31;
                goto LABEL_53;
              }
            }
LABEL_49:
            v12 = PspEstablishJobHierarchy((char *)Object, (__int64)NextJobProcess, a3, v4);
            if ( v12 >= 0 )
            {
              if ( NextJobProcess )
              {
                if ( (Object[388] & 0x1000) != 0 )
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
                v23 = v36;
                v24 = v5 | 8;
                if ( v4 == 4 )
                  v23 = a3;
                PspIncrementJobChainProcessCounts(v19, v23, (__int64)NextJobProcess, 0);
                PspApplyJobChainLimitsToProcess((__int64)Object, a3, (__int64)NextJobProcess);
                CurrentThread = (struct _KTHREAD *)v31;
                PspUnlockJobsAndProcessExclusive((unsigned int *)v34, 0LL, v31);
                v5 = v24 & 0xFB;
                if ( (Object[388] & 0x1000000) == 0 )
                {
                  PsQueryProcessAttributes((__int64)NextJobProcess, &v37, 0LL, v25);
                  if ( v37 )
                    _InterlockedOr(Object + 388, 0x1000000u);
                  else
                    _InterlockedOr(Object + 388, 0x1800000u);
                }
                v12 = PspApplyWorkingSetLimitsToProcess(NextJobProcess);
                if ( v12 >= 0 )
                {
                  if ( !*((_QWORD *)Object + 229)
                    || (PspLockProcessExclusive((__int64)NextJobProcess, v31, v26, v27),
                        v12 = PspAssignJobCpuPartitionToProcess(NextJobProcess, *((_QWORD *)Object + 229)),
                        PspUnlockProcessExclusive((__int64)NextJobProcess, v31),
                        v12 >= 0) )
                  {
                    v28 = 0;
                    if ( v4 == 5 )
                      v28 = 4;
                    if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v28) )
                    {
                      PspUnlockJobAssignment(v31);
                      --*(_WORD *)(v31 + 484);
                      v5 &= ~2u;
                      PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
                      KiLeaveCriticalRegionUnsafe(v31, v29);
                      if ( Object[136]
                        && (unsigned __int8)IsWin32kJobNotifyCallOutPresent()
                        && (unsigned int)Object[144] <= 0xFFFFFFFD )
                      {
                        Win32kJobAddProcessNotify(Object, NextJobProcess);
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
                  }
                }
                goto LABEL_53;
              }
              v12 = 0;
            }
            goto LABEL_52;
          default:
            v19 = 0LL;
            v36 = 0LL;
            goto LABEL_49;
        }
        v19 = (__int64)Object;
        goto LABEL_47;
      }
    }
  }
  else
  {
    JobAssignmentDisposition = PspGetJobAssignmentDisposition((__int64)Object, (__int64)NextJobProcess, a3, &v36);
    v4 = v36;
    if ( JobAssignmentDisposition >= 0 )
    {
      if ( (_DWORD)v36 != a4 )
      {
        v12 = -1073741267;
        goto LABEL_53;
      }
      if ( (_DWORD)v36 == 2 )
      {
        v12 = 0;
        goto LABEL_53;
      }
      goto LABEL_12;
    }
  }
  v12 = -1073741790;
LABEL_53:
  v11 = -1073741558;
LABEL_54:
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
    PspUnlockJobsAndProcessExclusive((unsigned int *)v34, (__int64)NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v12;
}
