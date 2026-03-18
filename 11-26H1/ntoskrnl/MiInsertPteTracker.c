/*
 * XREFs of MiInsertPteTracker @ 0x1405033CC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x140AF1F50 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiCaptureStackTraceEx @ 0x14050EB9C (MiCaptureStackTraceEx.c)
 *     MiGetInstructionPointer @ 0x1406E653C (MiGetInstructionPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  __int64 PoolMm; // rdi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  KIRQL v21; // si
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _OWORD v25[3]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  memset_0(v25, 0, 0xA0uLL);
  if ( LOWORD(stru_140E349C0.Alignment) >= 0xAu )
  {
    v9 = RtlpInterlockedFlushSList(&stru_140E349C0);
    PoolMm = (__int64)v9;
    if ( v9 )
    {
      Next = v9->Next;
      if ( v9->Next )
      {
        do
        {
          v11 = Next->Next;
          ExFreePoolWithTag(Next, 0);
          Next = v11;
        }
        while ( v11 );
      }
      goto LABEL_8;
    }
  }
  else
  {
    PoolMm = (__int64)RtlpInterlockedPopEntrySList(&stru_140E349C0);
    if ( PoolMm )
      goto LABEL_8;
  }
  PoolMm = ExAllocatePoolMm(
             64LL,
             0x80uLL,
             2035510605,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
  {
    byte_140E34B65 = 1;
    return;
  }
LABEL_8:
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v13 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
      v14 = *(_QWORD *)(a1 + 16) + 4095LL;
      *(_QWORD *)(PoolMm + 16) = 1LL;
      v12 = v14 + v13;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(PoolMm + 16) = 0LL;
    }
  }
  else
  {
    v15 = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF;
    v16 = *(unsigned int *)(a1 + 40) + 4095LL;
    *(_QWORD *)(PoolMm + 16) = a1;
    v12 = v16 + v15;
    *(_QWORD *)(PoolMm + 40) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(PoolMm + 48) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(PoolMm + 52) = *(_DWORD *)(a1 + 40);
  }
  v17 = v12 >> 12;
  v18 = v17 + 1;
  if ( (a3 & 2) == 0 )
    v18 = v17;
  *(_QWORD *)(PoolMm + 24) = v18;
  if ( !(unsigned int)MiCaptureStackTraceEx(v25, 7LL) )
  {
    *(_QWORD *)&v25[0] = MiGetInstructionPointer();
    *((_QWORD *)&v25[0] + 1) = retaddr;
  }
  *(_OWORD *)(PoolMm + 72) = v25[0];
  *(_OWORD *)(PoolMm + 88) = v25[1];
  *(_OWORD *)(PoolMm + 104) = v25[2];
  *(_QWORD *)(PoolMm + 120) = v26;
  v19 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(PoolMm + 32) = v19;
  *(_QWORD *)(PoolMm + 56) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(PoolMm + 64) = ((a3 & 2) != 0 ? 0x10 : 0) | a3 & 1 ^ (*(_DWORD *)(PoolMm + 64) ^ ((unsigned __int8)*(_DWORD *)(PoolMm + 64) ^ (unsigned __int8)(4 * a4)) & 0xC) & 0xFFFFFFEC;
  v20 = (40543 * (v19 >> 12)) ^ ((40543 * (v19 >> 12)) >> 32);
  if ( KeGetCurrentIrql() == 2 )
  {
    v21 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E349D0);
  }
  else
  {
    v21 = ExAcquireSpinLockExclusive(&dword_140E349D0);
  }
  v22 = (char *)&unk_140E378B0 + 16 * (v20 & 0xF);
  v23 = *(_QWORD *)v22;
  if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
    __fastfail(3u);
  *(_QWORD *)PoolMm = v23;
  *(_QWORD *)(PoolMm + 8) = v22;
  *(_QWORD *)(v23 + 8) = PoolMm;
  *(_QWORD *)v22 = PoolMm;
  qword_140E379B0 += v18;
  v24 = ++qword_140E379B8;
  if ( qword_140E379B8 > (unsigned __int64)qword_140E379C0 )
    qword_140E379C0 = v24;
  if ( v21 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E349D0);
  else
    ExReleaseSpinLockExclusive(&dword_140E349D0, v21);
}
