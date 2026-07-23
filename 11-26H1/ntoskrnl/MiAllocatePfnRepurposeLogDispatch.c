/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x1404D6260
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiAllocatePfnRepurposeLogDispatch(
        struct _KDPC *Dpc,
        volatile LONG *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v5; // rbp
  __int64 PoolMm; // rax
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r14d
  int v13; // esi
  __int64 v14; // rax
  BOOL v15; // ebp

  v5 = MEMORY[0xFFFFF78000000320];
  PoolMm = ExAllocatePoolMm(
             64LL,
             0x1000uLL,
             1884450125,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v7 = (void *)PoolMm;
  if ( PoolMm )
  {
    *(_DWORD *)(PoolMm + 8) = 2;
    *(_QWORD *)(PoolMm + 32) = PoolMm + 64;
    *(_QWORD *)(PoolMm + 40) = PoolMm + 4088;
    *(_QWORD *)(PoolMm + 16) = v5;
    *(_QWORD *)PoolMm = 0LL;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(DeferredContext + 4560);
  v8 = *((_QWORD *)DeferredContext + 2271);
  if ( !*((_DWORD *)DeferredContext + 4539) )
    goto LABEL_23;
  if ( v7 )
  {
    *((_QWORD *)DeferredContext + 2271) = v7;
    v7 = 0LL;
    goto LABEL_6;
  }
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 32) & 0xFFFLL) != 0 )
    {
      v8 = 0LL;
      goto LABEL_6;
    }
LABEL_23:
    *((_QWORD *)DeferredContext + 2271) = 0LL;
  }
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel(DeferredContext + 4560);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    if ( v9 == v8 + 64 )
      goto LABEL_32;
    if ( (v9 & 0xFFF) != 0 )
    {
      if ( v5 < *(_QWORD *)(v8 + 16) )
        v5 = MEMORY[0xFFFFF78000000320];
      v10 = *(_QWORD *)(v8 + 32) - 8LL;
      *(_QWORD *)(v8 + 24) = v5;
      *(_QWORD *)(v8 + 40) = v10;
    }
    *(_QWORD *)(v8 + 32) = v8 + 64;
    v11 = *(_QWORD *)(*((_QWORD *)DeferredContext + 32) + 32LL);
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 728)) )
      goto LABEL_32;
    v12 = *(unsigned __int16 *)(v11 + 768);
    if ( v12 >= *(_DWORD *)(v11 + 760) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v11 + 688), 0x64u);
      v13 = 0;
    }
    else
    {
      v13 = 1;
      v15 = 0;
      if ( *(int *)(v8 + 8) <= 1 )
      {
        v14 = *(_QWORD *)(v8 + 56);
        if ( v14 )
        {
          if ( *(PVOID *)v11 != PspSystemPartition
            && (*(_DWORD *)(v14 + 500) & 4) != 0
            && (*(_DWORD *)(*(_QWORD *)v11 + 136LL) & 1) != 0 )
          {
            v15 = 1;
          }
        }
      }
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 768), (PSLIST_ENTRY)v8);
      if ( !*(_DWORD *)(v11 + 740) && v12 >= 8 )
        KeSetEvent((PRKEVENT)(v11 + 736), 0, 0);
      if ( !*(_DWORD *)(v11 + 740) )
      {
        if ( v15 )
          KeSetEvent((PRKEVENT)(v11 + 736), 0, 0);
      }
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 728));
    if ( !v13 )
LABEL_32:
      ExFreePoolWithTag((PVOID)v8, 0);
  }
}
