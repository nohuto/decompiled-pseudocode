/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x140946FB8
 * Callers:
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x1407FE7A4 (PspIncrementJobChainProcessCounts.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x1407FFB30 (PspValidateJobAssignmentMemoryPartition.c)
 *     MmAssignProcessToJob @ 0x140A05AEC (MmAssignProcessToJob.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140A94870 (PspApplyJobChainLimitsToProcess.c)
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 *     PspValidateJobChainLimits @ 0x140AD398C (PspValidateJobChainLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B02108 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspValidateJobAssignmentCpuPartition @ 0x140B11C14 (PspValidateJobAssignmentCpuPartition.c)
 *     PspAssignJobCpuPartitionToProcess @ 0x140B3F674 (PspAssignJobCpuPartitionToProcess.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rdi
  int v8; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, CurrentThread, 0LL);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    goto LABEL_3;
  }
  EffectiveServerSilo = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(EffectiveServerSilo + 256);
      if ( (v10 & 0x1000) == 0 )
      {
        if ( (a3 & 1) == 0 )
          goto LABEL_3;
        if ( (v10 & 0x800) == 0 )
          break;
      }
      EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1304);
      if ( !EffectiveServerSilo )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( (a3 & 1) == 0 )
      goto LABEL_3;
  }
  if ( EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1552) & 0x40000000) == 0 )
  {
    v8 = -1073741790;
    goto LABEL_5;
  }
LABEL_3:
  if ( !EffectiveServerSilo )
  {
    v8 = 0;
LABEL_5:
    PspUnlockJobChain(a1, CurrentThread);
    return (unsigned int)v8;
  }
  if ( !PspValidateJobAssignmentMemoryPartition(EffectiveServerSilo, 0LL, a2, 1)
    || !(unsigned __int8)PspValidateJobAssignmentCpuPartition(EffectiveServerSilo) )
  {
    v8 = -1073741637;
    goto LABEL_5;
  }
  v8 = PspValidateJobChainLimits(EffectiveServerSilo, v11, v12, a3);
  if ( v8 < 0 )
    goto LABEL_5;
  v8 = PspEstablishJobHierarchy((char *)EffectiveServerSilo, a2, 0LL, 1);
  if ( v8 < 0 )
    goto LABEL_5;
  v8 = PspAssignJobCpuPartitionToProcess(a2, *(_QWORD *)(EffectiveServerSilo + 1832));
  if ( v8 < 0 )
    goto LABEL_5;
  PspIncrementJobChainProcessCounts(EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (*(_DWORD *)(EffectiveServerSilo + 1552) & 0x1000) != 0 )
  {
    v13 = (volatile signed __int32 *)(a2 + 1832);
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1868), 0x1Fu);
  }
  PspUnlockJobChain(a1, CurrentThread);
  v8 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v8 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0LL) )
    return (unsigned int)-1073741756;
  return (unsigned int)v8;
}
