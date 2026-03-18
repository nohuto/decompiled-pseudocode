/*
 * XREFs of ExAllocateContiguousHeapPool @ 0x14034AA60
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x14029B070 (ExpAddTagForBigPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlpHpFreeHeap @ 0x140347010 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeapBackend @ 0x14034B090 (RtlpHpAllocateHeapBackend.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403979B0 (ExpPoolTrackerChargeEntry.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403C08E4 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1403C0B34 (EtwTracePool.c)
 *     ExpPlFindLimitEntry @ 0x1404D6E00 (ExpPlFindLimitEntry.c)
 *     KasanPoolAllocateNoInline @ 0x1405DD960 (KasanPoolAllocateNoInline.c)
 *     ExpPoolFlagsToPoolType @ 0x140C10F50 (ExpPoolFlagsToPoolType.c)
 */

ULONG_PTR ExAllocateContiguousHeapPool(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, ...)
{
  unsigned int v5; // r9d
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  int v9; // r12d
  unsigned __int64 v10; // rsi
  unsigned __int64 HeapBackend; // rax
  ULONG_PTR v12; // r13
  __int64 v13; // rdi
  unsigned int Number; // eax
  int StackBase; // r9d
  __int64 v16; // r11
  unsigned int v17; // edx
  unsigned int v18; // r10d
  __int64 v19; // r14
  __int64 v20; // r15
  int v21; // eax
  int v22; // ecx
  __int64 LimitEntry; // rax
  __int64 v24; // r11
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  void *v28; // [rsp+38h] [rbp-28h]
  __int64 v29; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp+58h]
  __int64 v33; // [rsp+C0h] [rbp+60h] BYREF
  va_list va; // [rsp+C0h] [rbp+60h]
  __int64 v35; // [rsp+C8h] [rbp+68h]
  va_list va1; // [rsp+D0h] [rbp+70h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v33 = va_arg(va1, _QWORD);
  v35 = va_arg(va1, _QWORD);
  v32 = a4;
  v5 = v33;
  if ( (_DWORD)v33 == 0x80000000 )
    v5 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v6 = *(&stru_140E6BCE8.QuantumTarget + 1048 * (v5 < HIDWORD(stru_140E6BCE8.Header.WaitListHead.Flink) ? v5 : 0));
  if ( a1 > *(_QWORD *)(*(_QWORD *)stru_140E2EB88.ThreadLock + 22272LL) )
    return 0LL;
  if ( a2 < *(_QWORD *)(*(_QWORD *)stru_140E2EB88.ThreadLock + 22280LL) )
    return 0LL;
  if ( (unsigned __int64)(a3 - 1) <= 0x1FE )
    return 0LL;
  v9 = 1;
  if ( (*(_BYTE *)(v6 + 333) & 7) == 0 )
    return 0LL;
  if ( a4 >= *(unsigned int *)(v6 + 528) )
    return 0LL;
  v10 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapBackend = RtlpHpAllocateHeapBackend(v6, v10, v10, 0x800000LL);
  v12 = HeapBackend;
  if ( !HeapBackend )
    return 0LL;
  v13 = (unsigned int)v35;
  if ( !(unsigned int)ExpAddTagForBigPages(HeapBackend, (unsigned int)v35, v10, 64, 0, 0) )
  {
    v7 = 0LL;
    RtlpHpFreeHeap(v6, v12);
    return v7;
  }
  LODWORD(v27) = 0;
  LOBYTE(v33) = 0;
  LOBYTE(v31) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v13 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
    && (int)ExpPoolFlagsToPoolType(64, 0, (unsigned int)&v27, (unsigned int)va, (__int64)&v31) >= 0 )
  {
    v26 = v27;
    if ( (_BYTE)v33 )
      v26 = v27 | 8;
    EtwTracePool(3616, v26, v13, v12, v10);
  }
  Number = KeGetPcr()->Prcb.Number;
  StackBase = (int)stru_140EFEF90.StackBase;
  v16 = PoolTrackTableSize;
  v28 = stru_140EFEF90.StackBase;
  v29 = PoolTrackTableSize;
  v27 = *((_QWORD *)&stru_140EFEF90.CurrentRunTime + Number);
  v17 = LODWORD(stru_140EFEF90.StackBase) & ((40543 * v13) ^ ((unsigned __int64)(40543 * v13) >> 32));
  v31 = v17;
  v18 = v17;
  LODWORD(v33) = v17;
  do
  {
    while ( 1 )
    {
      v19 = 80LL * v17;
      v20 = v19 + v27;
      v21 = *(_DWORD *)(v19 + v27);
      if ( v21 == (_DWORD)v13 )
      {
        v9 = ExpPoolTrackerChargeEntry(1LL, v10, v19 + v27);
        goto LABEL_18;
      }
      if ( v21 )
        break;
      v22 = *(_DWORD *)(v19 + PoolTrackTable);
      if ( v22 )
      {
        *(_DWORD *)v20 = v22;
        v25 = *(_QWORD *)(v19 + PoolTrackTable + 72);
        if ( v25 )
          *(_QWORD *)(v20 + 72) = v25;
      }
      else
      {
        if ( v17 == v16 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Blink, &LockHandle);
        if ( !*(_DWORD *)(v19 + PoolTrackTable) )
        {
          LimitEntry = ExpPlFindLimitEntry((unsigned int)v13);
          *(_QWORD *)(v19 + v24 + 72) = LimitEntry;
          *(_QWORD *)(v20 + 72) = LimitEntry;
          *(_DWORD *)(v19 + PoolTrackTable) = v13;
          *(_DWORD *)v20 = v13;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v17 = v31;
        StackBase = (int)v28;
        v18 = v33;
        v16 = v29;
      }
    }
    v17 = StackBase & (v17 + 1);
    v31 = v17;
  }
  while ( v17 != v18 );
  ExpInsertPoolTrackerExpansion((unsigned int)v13, v10, 64LL);
LABEL_18:
  v7 = v12;
  if ( byte_140FC7BE8 )
    KasanPoolAllocateNoInline(v12, v10, v12, v32, 0);
  if ( !v9 )
  {
    ExFreeHeapPool(v12);
    return 0LL;
  }
  return v7;
}
