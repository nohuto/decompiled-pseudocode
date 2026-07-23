/*
 * XREFs of MmInSwapWorkingSet @ 0x1404CF090
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x14036A16C (MiGetWorkingSetSwapSupport.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403FECF8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x1404A5FDC (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VmPrefetchVirtualAddresses @ 0x14077A3E8 (VmPrefetchVirtualAddresses.c)
 *     VmCheckLargePageInswap @ 0x140821D78 (VmCheckLargePageInswap.c)
 *     MiFreeWorkingSetSwapContext @ 0x140AC3DE4 (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x140AEC480 (MiInSwapStore.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF673C (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  struct _LIST_ENTRY **p_Blink; // r14
  void **v3; // rsi
  __int64 v4; // r13
  __int64 WorkingSetSwapSupport; // rax
  KIRQL v6; // dl
  __int64 *v7; // rdi
  unsigned int v8; // ebx
  _QWORD *v9; // r12
  _QWORD *v10; // rax
  volatile LONG *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  volatile LONG *v14; // rcx

  p_Blink = &Process[2].ReadyListHead.Blink;
  v3 = 0LL;
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1288));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)p_Blink);
  v7 = (__int64 *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v8 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v8 = -1073741558;
    }
    else
    {
      v9 = &unk_140E37998;
      v10 = &unk_140E37998;
      if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
        v10 = p_Blink + 27;
      *v10 = 1LL;
      v11 = (volatile LONG *)(v4 + 1288);
      if ( v6 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      else
        ExReleaseSpinLockExclusive(v11, v6);
      if ( *(_DWORD *)(v4 + 1300) != -1 )
        MiInSwapStore(Process);
      v12 = 0;
      if ( Process[3].ProcessListEntry.Blink && *(_QWORD *)(*v7 + 16) )
      {
        v3 = (void **)MiReAllocateWorkingSetSwapSupport(*v7);
        if ( v3 )
          v12 = (*(_BYTE *)(*v7 + 32) & 1) == 0;
        if ( (unsigned int)VmCheckLargePageInswap(Process) )
          v12 |= 4u;
      }
      MiProcessWsInSwapSupport(*v7, v12);
      if ( v3 )
        VmPrefetchVirtualAddresses(*v3);
      v13 = v7[7];
      if ( v13 )
        MiProcessWsInSwapSupport(v13, 1u);
      if ( v7[1] )
      {
        v7[5] = (__int64)v7;
        v7[4] = (__int64)MiInSwapSharedWorkingSetWorker;
        v7[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v7[6] = (__int64)Process;
        ExQueueWorkItemToPartition(v7 + 2, 3, 0xFFFFFFFF);
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v7);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1288));
      if ( MiGetWorkingSetSwapSupport((__int64)p_Blink) == 1 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
          v9 = p_Blink + 27;
        *v9 = 0LL;
      }
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  v14 = (volatile LONG *)(v4 + 1288);
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  else
    ExReleaseSpinLockExclusive(v14, v6);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v8;
}
